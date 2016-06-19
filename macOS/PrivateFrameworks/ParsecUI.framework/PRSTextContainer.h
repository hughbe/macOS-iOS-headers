//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextContainer.h"

@interface PRSTextContainer : NSTextContainer
{
    struct CGSize _exclusionMargin;
    struct CGRect _exclusionRect;
}

@property struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property struct CGSize exclusionMargin; // @synthesize exclusionMargin=_exclusionMargin;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (BOOL)widthTracksTextView;
- (BOOL)isSimpleRectangularTextContainer;

@end

