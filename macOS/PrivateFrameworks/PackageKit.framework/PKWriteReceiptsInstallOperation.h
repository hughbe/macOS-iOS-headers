//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier;

@interface PKWriteReceiptsInstallOperation : PKInstallOperation
{
    PKPackageSpecifier *_currentPackageSpecifier;
    BOOL _inSandbox;
}

- (void)main;
- (BOOL)_saveReceiptForPackageSpecifier:(id)arg1 withMasterBOM:(id)arg2 error:(id *)arg3;
- (id)_newMasterBOMIfEnabled;
- (BOOL)_shouldWriteReceiptForPackageSpecifier:(id)arg1;
- (id)messageTracerComment;
- (id)messageTracerDomain;
- (id)currentPackageSpecifier;
- (int)installState;
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 writeInSandbox:(BOOL)arg4;

@end

