//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

#import <WorkflowKit/WFCodableAttributeBackedParameter-Protocol.h>

@class INCodableAttribute, NSString;
@protocol WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;

@interface WFDynamicResolveParameter : WFParameter <WFCodableAttributeBackedParameter>
{
    INCodableAttribute *_codableAttribute;
    id <WFDynamicResolveParameterDataSource> _dataSource;
    id <WFDynamicResolveParameterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WFDynamicResolveParameterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WFDynamicResolveParameterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
- (void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endResolutionSession;
- (void)resolveOptionsForUserInput:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)localizedLabelForState:(id)arg1;
- (Class)singleStateClass;
- (id)initWithDefinition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

