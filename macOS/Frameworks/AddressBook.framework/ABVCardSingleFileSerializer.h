//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABVCardFileSerializer.h>

@class NSFileHandle, NSMutableArray, NSURL;

__attribute__((visibility("hidden")))
@interface ABVCardSingleFileSerializer : ABVCardFileSerializer
{
    NSMutableArray *_names;
    BOOL _usePeopleNamesAsName;
    NSFileHandle *_cardHandle;
    NSURL *_cardURL;
}

+ (id)serializerWithBasePath:(id)arg1 names:(id)arg2;
@property(copy) NSURL *cardURL; // @synthesize cardURL=_cardURL;
- (void)serializePersonWithName:(id)arg1 vCardData:(id)arg2;
- (id)makeProgress;
- (void)serializePeople:(id)arg1 addressBook:(id)arg2;
- (void)overrideNames:(id)arg1;
- (void)dealloc;
- (id)initWithBasePath:(id)arg1;

@end

