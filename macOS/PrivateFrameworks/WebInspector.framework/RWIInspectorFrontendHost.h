//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSMutableDictionary, NSString, RWIInspector;

__attribute__((visibility("hidden")))
@interface RWIInspectorFrontendHost : NSObject <NSMenuDelegate>
{
    RWIInspector *_inspector;
    struct OpaqueJSValue *_pageInspectorFrontendAPIObjectRef;
    struct OpaqueJSValue *_pageDispatchMessageFromBackendObjectRef;
    NSMutableDictionary *_suggestedToActualURLMap;
}

+ (id)inspectorFrontendHostForInspector:(id)arg1;
+ (void)initializeInContext:(struct OpaqueJSContext *)arg1 withInspector:(id)arg2;
+ (struct OpaqueJSClass *)inspectorFrontendHostClass;
+ (CDStruct_d8b9d57c *)staticFunctions;
@property(retain, nonatomic) NSMutableDictionary *suggestedToActualURLMap; // @synthesize suggestedToActualURLMap=_suggestedToActualURLMap;
@property(nonatomic) struct OpaqueJSValue *pageDispatchMessageFromBackendObjectRef; // @synthesize pageDispatchMessageFromBackendObjectRef=_pageDispatchMessageFromBackendObjectRef;
@property(nonatomic) struct OpaqueJSValue *pageInspectorFrontendAPIObjectRef; // @synthesize pageInspectorFrontendAPIObjectRef=_pageInspectorFrontendAPIObjectRef;
@property(nonatomic) RWIInspector *inspector; // @synthesize inspector=_inspector;
- (void)menuSelection:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)sendMessageToFrontend:(id)arg1;
- (struct OpaqueJSValue *)_window_InspectorFrontendAPI:(struct OpaqueJSContext *)arg1 propertyName:(const char *)arg2;
- (struct OpaqueJSValue *)_window_InspectorFrontendAPI:(struct OpaqueJSContext *)arg1;
- (void)clearInspector;
- (void)dealloc;
- (id)initWithInspector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

