//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSString;

@interface PGGraphContactNode : PGGraphNode
{
    NSString *_contactIdentifier;
}

- (void).cxx_destruct;
@property(readonly) NSDate *potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate;
- (unsigned long long)genderHintForGivenName;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;

@end

