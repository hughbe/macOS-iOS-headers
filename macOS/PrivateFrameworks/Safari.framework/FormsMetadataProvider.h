//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSFormsMetadataProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FormsMetadataProvider : NSObject <WBSFormsMetadataProvider>
{
    struct Array _framesForAllForms;
    struct Array _metadataForAllForms;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long formCount;
- (id)initWithFrames:(const struct Array *)arg1 metadataForAllForms:(const struct Array *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

