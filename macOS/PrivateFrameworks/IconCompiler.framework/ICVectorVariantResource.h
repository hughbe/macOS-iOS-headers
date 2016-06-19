//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICVariantResourceProtocol.h"

@class NSString, NSURL;

@interface ICVectorVariantResource : NSObject <ICVariantResourceProtocol>
{
    NSString *_variantName;
    unsigned long long _flags;
    struct CGPDFDocument *_pdfDocument;
    NSURL *_URL;
}

+ (id)resourceWithURL:(id)arg1 resourceInfo:(id)arg2;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(readonly) struct CGPDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(readonly) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly) NSString *variantName; // @synthesize variantName=_variantName;
- (void).cxx_destruct;
- (struct CGImage *)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithURL:(id)arg1 variantName:(id)arg2 flags:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

