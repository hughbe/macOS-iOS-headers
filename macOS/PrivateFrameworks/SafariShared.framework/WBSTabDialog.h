//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSTabDialog : NSObject
{
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _dismissalBlock;
    BOOL _blocksWebProcessUntilDismissed;
    NSArray *_cancellationExemptions;
}

+ (id)tabDialogWithPresentationBlock:(CDUnknownBlockType)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *cancellationExemptions; // @synthesize cancellationExemptions=_cancellationExemptions;
@property(nonatomic) BOOL blocksWebProcessUntilDismissed; // @synthesize blocksWebProcessUntilDismissed=_blocksWebProcessUntilDismissed;
- (id)createInfo;
- (id)init;
- (id)_init;

@end

