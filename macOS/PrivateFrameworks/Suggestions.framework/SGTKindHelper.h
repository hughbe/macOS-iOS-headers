//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SGTKindHelper : NSObject
{
    NSDictionary *typeNames;
    NSDictionary *contentTypeToTypeName;
    NSDictionary *typeToContentTypes;
}

+ (id)sharedKindHelper;
- (void).cxx_destruct;
- (id)normalizedValueForContentType:(id)arg1 kindProposition:(id)arg2 values:(id *)arg3 excludeDynamic:(BOOL)arg4;
- (id)init;

@end

