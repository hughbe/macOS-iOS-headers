//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenuItem, NSString;

@interface CKUIMenuItemRepresentation : NSObject
{
    NSString *_property;
    NSMenuItem *_parentMenuItem;
    NSString *_groupIdentifier;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(nonatomic) __weak NSMenuItem *parentMenuItem; // @synthesize parentMenuItem=_parentMenuItem;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)initWithProperty:(id)arg1;
- (id)init;

@end

