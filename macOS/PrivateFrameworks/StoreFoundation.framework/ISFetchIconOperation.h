//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreFoundation/ISOperation.h>

@class NSNumber, NSURL;

@interface ISFetchIconOperation : ISOperation
{
    NSURL *_remoteURL;
    NSURL *_localURL;
    NSURL *_localIconURL;
    NSNumber *_productID;
}

@property(readonly) NSNumber *productID; // @synthesize productID=_productID;
@property(readonly) NSURL *iconURL; // @synthesize iconURL=_localIconURL;
- (void).cxx_destruct;
- (void)run;
- (id)initWithProductID:(id)arg1 url:(id)arg2 storeClient:(id)arg3;

@end

