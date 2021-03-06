//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;

@interface WFExtensionInputVariable : WFVariable
{
    id <WFVariableProvider> _variableProvider;
}

- (void).cxx_destruct;
- (id)variableProvider;
- (id)possibleContentClassesWithContext:(id)arg1;
- (BOOL)isAvailable;
- (id)icon;
- (id)name;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithVariableProvider:(id)arg1 aggrandizements:(id)arg2;

@end

