//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSArray, NSDictionary, NSString;

@protocol InternetAccountExportsAuthKit <JSExport>
@property(readonly, nonatomic) NSDictionary *workflow;
@property(retain, nonatomic, getter=icaButtonBar, setter=icaSetButtonBar:) JSValue *buttonBar;
@property(readonly, nonatomic) NSDictionary *environment;
@property(readonly, nonatomic) unsigned long long protocolVersion;
- (void)runAppleIDOptOut:(JSValue *)arg1;
- (void)obtainAuthRight:(JSValue *)arg1;
- (void)setAuthKitDataValue:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)skipAndContinueSignIn;
- (void)skipSignIn;
- (void)dismiss:(NSString *)arg1;
- (void)showTermsAndConditions:(NSArray *)arg1 callback:(JSValue *)arg2;
- (void)resetCompleted:(NSString *)arg1 password:(NSString *)arg2;
- (void)saveTOS:(NSString *)arg1 localizedName:(NSString *)arg2 content:(NSString *)arg3;
- (void)saveTOS:(NSString *)arg1 content:(NSString *)arg2;
- (void)setAlternateButton:(JSValue *)arg1 callback:(JSValue *)arg2;
- (void)setRightNavButton:(JSValue *)arg1 callback:(JSValue *)arg2;
- (void)setLeftNavButton:(JSValue *)arg1 callback:(JSValue *)arg2;
- (void)setPageSubTitle:(JSValue *)arg1;
- (void)setNavTitle:(JSValue *)arg1;
- (void)webClientHasLoaded;
- (void)openHelp:(NSString *)arg1;
- (void)openExternalURL:(NSString *)arg1;
- (void)exitWebView:(NSDictionary *)arg1;
- (void)endSheet:(NSDictionary *)arg1;
- (void)beginSheetWithContent:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)beginSheetWithURL:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)refreshView:(NSString *)arg1 section:(NSString *)arg2;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(JSValue *)arg3;
- (void)showAlert:(NSDictionary *)arg1 callback:(JSValue *)arg2;
- (void)webClientIsReady;
- (void)log:(NSString *)arg1 message:(NSString *)arg2;

@optional
- (void)runAppleIDOptOut:(JSValue *)arg1 __JS_EXPORT_AS__runAppleIDOptOut:(id)arg2;
- (void)obtainAuthRight:(JSValue *)arg1 __JS_EXPORT_AS__obtainAuthRight:(id)arg2;
- (void)setAuthKitDataValue:(NSString *)arg1 forKey:(NSString *)arg2 __JS_EXPORT_AS__setAuthKitDataValue:(id)arg3;
- (void)dismiss:(NSString *)arg1 __JS_EXPORT_AS__dismiss:(id)arg2;
- (void)showTermsAndConditions:(NSArray *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__showTermsAndConditions:(id)arg3;
- (void)resetCompleted:(NSString *)arg1 password:(NSString *)arg2 __JS_EXPORT_AS__resetCompleted:(id)arg3;
- (void)saveTOS:(NSString *)arg1 localizedName:(NSString *)arg2 content:(NSString *)arg3 __JS_EXPORT_AS__saveTOSWithName:(id)arg4;
- (void)saveTOS:(NSString *)arg1 content:(NSString *)arg2 __JS_EXPORT_AS__saveTOS:(id)arg3;
- (void)setAlternateButton:(JSValue *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__setAlternateButton:(id)arg3;
- (void)setRightNavButton:(JSValue *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__setRightNavButton:(id)arg3;
- (void)setLeftNavButton:(JSValue *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__setLeftNavButton:(id)arg3;
- (void)setPageSubTitle:(JSValue *)arg1 __JS_EXPORT_AS__setPageSubTitle:(id)arg2;
- (void)setNavTitle:(JSValue *)arg1 __JS_EXPORT_AS__setNavTitle:(id)arg2;
- (void)openHelp:(NSString *)arg1 __JS_EXPORT_AS__openHelp:(id)arg2;
- (void)openExternalURL:(NSString *)arg1 __JS_EXPORT_AS__openExternalURL:(id)arg2;
- (void)exitWebView:(NSDictionary *)arg1 __JS_EXPORT_AS__exit:(id)arg2;
- (void)endSheet:(NSDictionary *)arg1 __JS_EXPORT_AS__endSheet:(id)arg2;
- (void)beginSheetWithContent:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5 __JS_EXPORT_AS__beginSheetWithContent:(id)arg6;
- (void)beginSheetWithURL:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5 __JS_EXPORT_AS__beginSheetWithURL:(id)arg6;
- (void)refreshView:(NSString *)arg1 section:(NSString *)arg2 __JS_EXPORT_AS__refreshView:(id)arg3;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(JSValue *)arg3 __JS_EXPORT_AS__resize:(id)arg4;
- (void)showAlert:(NSDictionary *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__showAlert:(id)arg3;
- (void)log:(NSString *)arg1 message:(NSString *)arg2 __JS_EXPORT_AS__log:(id)arg3;
@end

