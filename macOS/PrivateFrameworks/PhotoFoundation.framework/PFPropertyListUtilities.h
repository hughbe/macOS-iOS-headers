//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFPropertyListUtilities : NSObject
{
}

+ (BOOL)canEncodeInPropertyList:(id)arg1;
+ (id)filterPropertyListNoData:(id)arg1;
+ (id)filterPropertyList:(id)arg1;
+ (id)filterPropertyList:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_filterArray:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_filterDictionary:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)encodedDataWithPropertyListObject:(id)arg1;
+ (id)encodedDataWithPropertyListObject:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
+ (id)mutableArrayFromEncodedData:(id)arg1;
+ (id)arrayFromEncodedData:(id)arg1;
+ (id)mutableDictionaryFromEncodedData:(id)arg1;
+ (id)dictionaryFromEncodedData:(id)arg1;
+ (id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3;
+ (id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3 error:(id *)arg4;

@end

