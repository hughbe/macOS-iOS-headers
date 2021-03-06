//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetItemDataResponseOperation, NSArray;

@interface MFEWSGetItemDataRequestOperation : MFEWSRequestOperation
{
    NSArray *_itemIdTypes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *itemIdTypes; // @synthesize itemIdTypes=_itemIdTypes;
- (id)prepareRequest;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
@property(retain, nonatomic) MFEWSGetItemDataResponseOperation *responseOperation;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)description;
- (id)initWithItemIdTypes:(id)arg1 dataHandler:(CDUnknownBlockType)arg2 gateway:(id)arg3 errorHandler:(id)arg4;

@end

