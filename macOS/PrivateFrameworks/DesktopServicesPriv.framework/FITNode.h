//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DesktopServicesPriv/FINode.h>

__attribute__((visibility("hidden")))
@interface FITNode : FINode
{
    void *_node[10];
}

- (id)description;
- (oneway void)release;
- (oneway void)releaseUnderMonitor;
- (void *)asTNode;
- (struct TNode *)asTNodeObject;
- (void)dealloc;
- (void)deleteTNode;

@end

