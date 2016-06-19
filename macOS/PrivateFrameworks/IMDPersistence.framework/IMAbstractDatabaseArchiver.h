//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMAbstractDatabaseArchiver : NSObject
{
    NSString *_destinationPath;
    NSString *_sourcePath;
}

@property(readonly, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(readonly, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (BOOL)deleteFailedArchiveAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)copyDatabase:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2;

@end

