//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer
{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_8c65c4f4 layoutInput;
}

- (void).cxx_destruct;
- (void)setLayoutInput:(CDStruct_8c65c4f4)arg1;
- (CDStruct_8c65c4f4)layoutInput;
- (void)setLayoutOutput:(id)arg1;
- (id)layoutOutput;
- (id)children;
- (struct CGSize)performLayout;

@end

