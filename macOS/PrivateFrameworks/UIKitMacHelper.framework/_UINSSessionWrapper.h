//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDraggingSession, UINSDragSession;
@protocol UINSDragOperationMasks, UINSDragSessionHandler;

__attribute__((visibility("hidden")))
@interface _UINSSessionWrapper : NSObject
{
    NSDraggingSession *_internalDragSession;
    UINSDragSession *_externalDragSession;
    id <UINSDragSessionHandler> _sessionHandler;
    id <UINSDragOperationMasks> _operationMasks;
}

- (void).cxx_destruct;
@property(retain) id <UINSDragOperationMasks> operationMasks; // @synthesize operationMasks=_operationMasks;
@property(retain) id <UINSDragSessionHandler> sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(retain) UINSDragSession *externalDragSession; // @synthesize externalDragSession=_externalDragSession;
@property(retain) NSDraggingSession *internalDragSession; // @synthesize internalDragSession=_internalDragSession;

@end

