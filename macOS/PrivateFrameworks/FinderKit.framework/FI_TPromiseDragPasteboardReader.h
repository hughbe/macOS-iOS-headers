//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPasteboardReading.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TPromiseDragPasteboardReader : NSObject <NSPasteboardReading>
{
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

