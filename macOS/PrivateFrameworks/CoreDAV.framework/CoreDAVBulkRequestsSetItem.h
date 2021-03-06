//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem
{
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVBulkRequestsItem *simpleItem; // @synthesize simpleItem=_simpleItem;
@property(retain, nonatomic) CoreDAVBulkRequestsItem *crudItem; // @synthesize crudItem=_crudItem;
@property(readonly, nonatomic) NSDictionary *dictRepresentation;
- (id)description;
- (id)init;

@end

