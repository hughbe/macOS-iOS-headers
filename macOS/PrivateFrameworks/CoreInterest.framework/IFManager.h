//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IFManager : NSObject
{
}

+ (id)rankDocuments:(id)arg1 withTopics:(id)arg2;
+ (BOOL)provideIndication:(id)arg1 forTopic:(id)arg2;
+ (BOOL)executeQuery:(id)arg1;
+ (void)processTopic:(id)arg1 query:(id)arg2;
+ (void)propagateDown:(id)arg1 score:(double)arg2 root:(id)arg3 distance:(unsigned long long)arg4;
+ (void)propagateUp:(id)arg1 score:(double)arg2 parent:(id)arg3 distance:(unsigned long long)arg4;

@end

