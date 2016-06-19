//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiObject.h>

#import "LiEncoding.h"
#import "NSCopying.h"

@class LiStringAtom, NSString;

@interface LiKeyPath : LiObject <NSCopying, LiEncoding>
{
    id _tagData;
    LiStringAtom *_keyAtom;
}

+ (unsigned char)encodingObjectType;
@property(readonly, nonatomic) LiStringAtom *keyAtom; // @synthesize keyAtom=_keyAtom;
@property(retain, nonatomic) id tagData; // @synthesize tagData=_tagData;
- (void).cxx_destruct;
- (void)addStringAtomsToArray:(id)arg1;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isAnyPropertyKeyPath;
- (BOOL)isOptimisticLockKeyPath;
- (BOOL)isUuidKeyPath;
- (BOOL)isModelIdKeyPath;
- (long long)compare:(id)arg1;
- (BOOL)isEquivalentToKeyPath:(id)arg1;
- (BOOL)isEqualToKeyPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)atomId;
- (id)atomPath;
- (id)stringValue;
@property(readonly, copy) NSString *description;
- (id)initWithAtomPath:(id)arg1 withAtomCache:(id)arg2;
- (id)initWithPath:(id)arg1 forTable:(id)arg2;
- (id)initWithPath:(id)arg1 withAtomCache:(id)arg2;
- (id)initWithAtomId:(long long)arg1 withAtomCache:(id)arg2;
- (id)initWithAtom:(id)arg1;
- (id)init;
- (BOOL)validForTable:(id)arg1;
- (void)setTagDataForTable:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)tableIndex;
- (id)propertyIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

