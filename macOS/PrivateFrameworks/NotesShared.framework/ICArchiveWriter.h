//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface ICArchiveWriter : NSObject
{
    struct archive *_archive;
    BOOL _usesCompression;
    NSURL *_destinationURL;
    NSString *_basePath;
}

@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) BOOL usesCompression; // @synthesize usesCompression=_usesCompression;
- (void).cxx_destruct;
- (BOOL)writeURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id *)arg3;
- (BOOL)open:(id *)arg1;
- (BOOL)finish:(id *)arg1;
- (BOOL)writeURLs:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2;

@end

