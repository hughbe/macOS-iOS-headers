//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEFile : NSObject
{
    shared_ptr_ab06ee6d _This;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property shared_ptr_ab06ee6d This; // @synthesize This=_This;
- (id)execute:(id)arg1;
- (id)getValidationWarnings;
- (id)getValidationErrors;
- (void)addPhrase:(id)arg1;
- (id)getDialogs;
- (id)getParameters;
@property(retain) NSString *localeFilename;
@property(retain) NSString *id;
@property(retain) NSString *paramsFilename;
- (void)addCondition:(id)arg1;
- (id)getRoot;
- (shared_ptr_ab06ee6d)getSharedPtr;
- (id)initWithSharedPtr:(shared_ptr_ab06ee6d)arg1;
- (id)init;

@end

