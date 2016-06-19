//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioBufferList {
    unsigned int mNumberBuffers;
    struct AudioBuffer mBuffers[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioTimeStamp {
    double mSampleTime;
    unsigned long long mHostTime;
    double mRateScalar;
    unsigned long long mWordClockTime;
    struct SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGColorSpace;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CNNBlock {
    CDUnknownFunctionPointerType *_field1;
    struct CNNSize _field2;
    struct CNNSize _field3;
    struct CNNData *_field4;
    struct CNNData *_field5;
};

struct CNNData {
    float *data_;
    struct CNNSize size_;
};

struct CNNSize {
    int size_[4];
};

struct CameraMotionAnalysis {
    struct Vector<ma::CameraMotionSegment *> _field1;
    struct CameraMotionSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    struct HinkleyDetector _field5[6];
    int _field6;
    struct RotationAnalysis _field7;
    _Bool _field8;
    _Bool _field9;
};

struct CameraMotionSegment;

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct DSPSplitComplex {
    float *realp;
    float *imagp;
};

struct DescriptorAnalysis {
    struct Vector<ma::DescriptorSegment *> _field1;
    struct DescriptorSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    struct Rotator *_field5;
};

struct DescriptorSegment;

struct EncodeAnalysis {
    int _field1;
    int _field2;
    char *_field3;
    struct __CVBuffer *_field4;
    struct Translation _field5;
    long long *_field6;
    long long *_field7;
    int *_field8;
    int *_field9;
    int *_field10;
    struct Translation *_field11;
    struct FrameBuffer *_field12;
    struct EncodeStats *_field13;
    float _field14;
    float _field15;
    struct MotionFieldAnalysis _field16;
};

struct EncodeParameters {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned short _field7;
};

struct EncodeStats;

struct FaceList {
    struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox>> _field1;
};

struct FineSubjectMotionAnalysis {
    struct Vector<ma::FineSubjectMotionSegment *> _field1;
    struct FineSubjectMotionSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    struct HinkleyDetector _field5;
};

struct FineSubjectMotionSegment;

struct Frame {
    int frame_idx_;
    CDStruct_1b6d18a9 timestamp_;
    CDStruct_1b6d18a9 duration_;
    struct Translation ave_motion_;
    struct Translation org_motion_;
    unsigned long long distortion_;
    float distortion_norm_;
    struct Translation motion_change_;
    unsigned int compressed_bytes_;
    _Bool blur_;
    struct Translation acc_var_;
    float texture_;
    struct MotionResult motion_result_;
    float interestingness_;
    struct Histogram histogram_;
};

struct FrameBuffer {
    int frame_count_;
    struct Frame buffer_[35];
};

struct HinkleyDetector {
    float _field1;
    float _field2;
    int _field3;
    struct HinkleyStats _field4;
};

struct HinkleyStats {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct Histogram {
    float extremities_;
    float overexposes_;
    int *histogram_[3];
    int *moments_hist_[2];
};

struct InterestingnessAnalysis {
    struct Vector<ma::InterestingnessSegment *> _field1;
    struct InterestingnessSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    struct HinkleyDetector _field5;
};

struct InterestingnessSegment;

struct IrisAnalysis {
    float _field1;
    float _field2;
    int _field3;
    _Bool _field4;
    struct __CFArray *_field5;
};

struct Kernel {
    float *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MetaDataAnalysis {
    _Bool _field1;
    struct FrameBuffer *_field2;
    struct Translation _field3;
    struct Translation _field4;
};

struct MotionFieldAnalysis {
    char *_field1;
    int *_field2[2];
    short *_field3[2];
    float *_field4[2];
    float *_field5;
    float *_field6;
    int _field7[2];
    int _field8;
    int *_field9[2];
    float *_field10[2];
    float *_field11[2];
    float _field12;
    float _field13;
    float _field14;
    int _field15;
    int _field16;
    struct EncodeStats *_field17;
    struct ObjectDetection _field18;
    struct ObjectTracking _field19;
    int _field20;
    _Bool _field21;
};

struct MotionFilter {
    struct FrameBuffer *_field1;
};

struct MotionResult {
    float significant_values_[6];
    float confidence_[6];
    float fine_action_score_;
    float action_score_;
    float track_score_;
    float rotation_angle_;
    int action_blocks_;
    float action_motion_;
    _Bool valid_mb_;
    _Bool valid_submb_;
    int support_size_;
    float residual_var_;
    float gmv_[2];
    CDStruct_1b6d18a9 duration_;
    struct Vector<ma::Object *> objects_;
    struct Vector<ma::Object *> detect_objects_;
};

struct MotionVector;

struct MovingObjectAnalysis {
    struct Vector<ma::MovingObjectSegment *> _field1;
    struct MovingObjectSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    int _field5;
    int _field6;
};

struct MovingObjectSegment;

struct Object {
    int _field1;
    struct CGRect _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    _Bool _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    _Bool _field10;
};

struct ObjectDetection {
    struct Vector<ma::Object *> _field1;
    struct MotionVector *_field2;
    float *_field3;
    int *_field4;
    int *_field5;
    int *_field6;
    int _field7;
    int _field8;
    _Bool _field9;
};

struct ObjectTracking {
    struct Object _field1;
    struct Object _field2;
    _Bool _field3;
    int _field4;
    int _field5;
    float *_field6;
    float *_field7;
    float *_field8;
    float *_field9;
    float *_field10;
    float *_field11;
    float *_field12;
    long long _field13;
    long long _field14;
    float *_field15;
    int _field16;
    int _field17;
    long long _field18;
    int _field19;
    struct Vector<ma::ObjectTracking::Expert *> _field20;
    _Bool _field21;
};

struct ObstructionAnalysis {
    CDStruct_1b6d18a9 _field1;
    struct __CFArray *_field2;
    int _field3;
    int _field4;
    struct {
        int _field1;
        int _field2;
        int _field3;
    } _field5;
    CDStruct_4aceb884 _field6;
    CDStruct_4aceb884 _field7;
    float _field8;
    int _field9;
    CDStruct_1b6d18a9 _field10;
};

struct OpaqueVTImageRotationSession;

struct PreEncodeAnalysis {
    _Bool _field1;
    _Bool _field2;
    struct __CFData *_field3;
    struct __CFArray *_field4;
    _Bool _field5;
    struct Vector<unsigned int> _field6;
    struct Vector<unsigned short> _field7;
    struct Vector<float> _field8;
    struct Vector<float> _field9;
    CDStruct_1b6d18a9 _field10;
    int _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    struct EncodeParameters _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    CDStruct_1b6d18a9 _field19;
    double _field20;
    unsigned int _field21;
};

struct QualityAnalysis {
    CDStruct_1b6d18a9 _field1[2];
    float _field2[2];
    struct FrameBuffer *_field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
    int _field10;
    _Bool _field11;
    _Bool _field12;
    CDStruct_1b6d18a9 _field13;
    float _field14;
    float _field15;
    struct __CFArray *_field16;
    struct __CFArray *_field17;
};

struct RotationAnalysis {
    struct Vector<ma::RotationSegment *> _field1;
    struct RotationSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    struct HinkleyDetector _field5;
    int _field6;
};

struct RotationSegment;

struct Rotator {
    struct __CVPixelBufferPool *_field1;
    int _field2;
    int _field3;
    int _field4;
    struct OpaqueVTImageRotationSession *_field5;
};

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct SceneAnalysis {
    struct Vector<ma::SceneSegment *> _field1;
    struct SceneSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    int _field9;
    struct CameraMotionAnalysis _field10;
    struct SubjectMotionAnalysis _field11;
    struct FineSubjectMotionAnalysis _field12;
    struct TrackingAnalysis _field13;
    struct DescriptorAnalysis _field14;
    struct MovingObjectAnalysis _field15;
    struct InterestingnessAnalysis _field16;
};

struct SceneSegment;

struct SubjectMotionAnalysis {
    struct Vector<ma::SubjectMotionSegment *> _field1;
    struct SubjectMotionSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    struct HinkleyDetector _field5;
};

struct SubjectMotionSegment;

struct TrackSegment;

struct TrackingAnalysis {
    struct Vector<ma::TrackSegment *> _field1;
    struct TrackSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    struct HinkleyDetector _field5;
};

struct Translation {
    float x_;
    float y_;
    float z_;
};

struct Vector<float> {
    struct __CFArray *_field1;
};

struct Vector<ma::CameraMotionSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::DescriptorSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::FineSubjectMotionSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::InterestingnessSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::MovingObjectSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::Object *> {
    struct __CFArray *vector_;
};

struct Vector<ma::ObjectTracking::Expert *> {
    struct __CFArray *_field1;
};

struct Vector<ma::RotationSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::SceneSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::SubjectMotionSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::TrackSegment *> {
    struct __CFArray *_field1;
};

struct Vector<unsigned int> {
    struct __CFArray *_field1;
};

struct Vector<unsigned short> {
    struct __CFArray *_field1;
};

struct __CFArray;

struct __list_node_base<vImage_Buffer, void *> {
    struct __list_node_base<vImage_Buffer, void *> *_field1;
    struct __list_node_base<vImage_Buffer, void *> *_field2;
};

struct __list_node_base<vision::DCN::boundingbox, void *> {
    struct __list_node_base<vision::DCN::boundingbox, void *> *_field1;
    struct __list_node_base<vision::DCN::boundingbox, void *> *_field2;
};

struct __shared_weak_count;

struct blob<float, 3>;

struct blob<float, 4>;

struct blob<unsigned char __attribute__((ext_vector_type(4))), 2>;

struct fast_pyramid_resizer;

struct fast_pyramid_resizer_metal {
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> _field1;
    struct vector<id<MTLTexture>, std::__1::allocator<id<MTLTexture>>> _field2;
    struct vector<id<MTLTexture>, std::__1::allocator<id<MTLTexture>>> _field3;
};

struct list<vImage_Buffer, std::__1::allocator<vImage_Buffer>> {
    struct __list_node_base<vImage_Buffer, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vImage_Buffer, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox>> {
    struct __list_node_base<vision::DCN::boundingbox, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vision::DCN::boundingbox, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct net;

struct net_strides_configuration {
    int num_layer;
    struct vector<int, std::__1::allocator<int>> kernel_size;
    struct vector<int, std::__1::allocator<int>> stride;
    struct vector<int, std::__1::allocator<int>> pad;
};

struct pair<unsigned long long, unsigned long long> {
    unsigned long long first;
    unsigned long long second;
};

struct shared_ptr<Espresso::blob<float, 3>> {
    struct blob<float, 3> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<float, 4>> {
    struct blob<float, 4> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2>> {
    struct blob<unsigned char __attribute__((ext_vector_type(4))), 2> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::fast_pyramid_resizer> {
    struct fast_pyramid_resizer *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::net> {
    struct net *_field1;
    struct __shared_weak_count *_field2;
};

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

struct vImage_CGImageFormat {
    unsigned int bitsPerComponent;
    unsigned int bitsPerPixel;
    struct CGColorSpace *colorSpace;
    unsigned int bitmapInfo;
    unsigned int version;
    double *decode;
    int renderingIntent;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__first_;
    } __end_cap_;
};

struct vector<id<MTLTexture>, std::__1::allocator<id<MTLTexture>>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<__strong id<MTLTexture>*, std::__1::allocator<id<MTLTexture>>> {
        id *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__first_;
    } __end_cap_;
};

struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> {
    struct pair<unsigned long long, unsigned long long> *__begin_;
    struct pair<unsigned long long, unsigned long long> *__end_;
    struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long>*, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> {
        struct pair<unsigned long long, unsigned long long> *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> {
    shared_ptr_dc6ac1b7 *__begin_;
    shared_ptr_dc6ac1b7 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3>>*, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> {
        shared_ptr_dc6ac1b7 *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> {
    shared_ptr_7fb9d9f9 *__begin_;
    shared_ptr_7fb9d9f9 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>*, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> {
        shared_ptr_7fb9d9f9 *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> {
    shared_ptr_a302c975 *__begin_;
    shared_ptr_a302c975 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::net>*, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> {
        shared_ptr_a302c975 *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
} CDStruct_4aceb884;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Template types
typedef struct list<vImage_Buffer, std::__1::allocator<vImage_Buffer>> {
    struct __list_node_base<vImage_Buffer, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vImage_Buffer, void *>>> {
        unsigned long long _field1;
    } _field2;
} list_db827431;

typedef struct shared_ptr<Espresso::blob<float, 3>> {
    struct blob<float, 3> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_dc6ac1b7;

typedef struct shared_ptr<Espresso::blob<float, 4>> {
    struct blob<float, 4> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_86ba3c2c;

typedef struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2>> {
    struct blob<unsigned char __attribute__((ext_vector_type(4))), 2> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5e9c0076;

typedef struct shared_ptr<Espresso::fast_pyramid_resizer> {
    struct fast_pyramid_resizer *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_7fb9d9f9;

typedef struct shared_ptr<Espresso::net> {
    struct net *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_a302c975;

