//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CVML/CVMLObservation.h>

@class MPImageDescriptor, NSData, NSString, NSUUID;

@interface CVMLImageprintObservation : CVMLObservation
{
    NSUUID *_identifier;
    NSString *_imageprintVersion;
    MPImageDescriptor *_imageprintDescriptor;
    NSString *_imageprintType;
}

+ (id)calculateDistanceBetweenImageprint1:(id)arg1 andImageprint2:(id)arg2;
@property(retain) NSString *imageprintType; // @synthesize imageprintType=_imageprintType;
@property(retain) MPImageDescriptor *imageprintDescriptor; // @synthesize imageprintDescriptor=_imageprintDescriptor;
@property(retain) NSString *imageprintVersion; // @synthesize imageprintVersion=_imageprintVersion;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) NSData *rawImageprintDescriptor;
- (id)initWithRawImageprintDescriptor:(id)arg1;
- (id)isImageprintValid;
- (id)calculateDistanceFromImageprint:(id)arg1;
- (id)calculateDistanceFromImageprintObservation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (id)initWithData:(id)arg1;
- (id)init;

@end

