//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDFaceCollection.h>

@class RDPerson;

@interface RDFaceCollectionPerson : RDFaceCollection
{
    RDPerson *_person;
}

- (void).cxx_destruct;
- (id)modelIdsFromCollectionOfClass:(Class)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (long long)type;
- (id)initWithPerson:(id)arg1;

@end

