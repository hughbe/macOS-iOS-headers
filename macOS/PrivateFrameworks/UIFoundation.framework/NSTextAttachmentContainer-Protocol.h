//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSImage, NSTextContainer;

@protocol NSTextAttachmentContainer <NSObject>
- (struct CGRect)attachmentBoundsForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (NSImage *)imageForBounds:(struct CGRect)arg1 textContainer:(NSTextContainer *)arg2 characterIndex:(unsigned long long)arg3;
@end

