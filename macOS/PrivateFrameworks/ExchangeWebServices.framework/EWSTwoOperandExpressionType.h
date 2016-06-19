//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSearchExpressionType.h>

#import "XSDefinitionProvider.h"

@class EWSBasePathToElementType, EWSFieldURIOrConstantType, NSString;

@interface EWSTwoOperandExpressionType : EWSSearchExpressionType <XSDefinitionProvider>
{
    EWSBasePathToElementType *_Path;
    EWSFieldURIOrConstantType *_FieldURIOrConstant;
}

+ (id)definition;
@property(retain, nonatomic) EWSFieldURIOrConstantType *FieldURIOrConstant; // @synthesize FieldURIOrConstant=_FieldURIOrConstant;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path=_Path;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

