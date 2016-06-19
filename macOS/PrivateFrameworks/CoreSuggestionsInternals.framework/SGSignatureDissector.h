//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@interface SGSignatureDissector : SGPipelineDissector
{
}

+ (void)initialize;
+ (id)singleLineSignatureLeadingCharacterSet;
- (BOOL)shouldIgnoreSignature:(id)arg1;
- (BOOL)_paragraphWithContent:(id)arg1 range:(struct _NSRange)arg2 exceedsLineLimit:(unsigned long long)arg3 orCharacterLimit:(unsigned long long)arg4;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (struct _NSRange)rangeOfSenderNameComponents:(id)arg1 withFullname:(id)arg2 inSubstring:(id)arg3;
- (struct _NSRange)rangeOfSenderName:(id)arg1 inRange:(struct _NSRange)arg2 restrictLength:(BOOL)arg3 forEntity:(id)arg4;
- (id)authorFirstname:(id)arg1;
- (id)authorName:(id)arg1;
- (struct _NSRange)trailingSenderNameLineRange:(id)arg1;
- (struct _NSRange)miniSignatureRange:(id)arg1;
- (struct _NSRange)sigHtmlBlockRange:(id)arg1;
- (struct _NSRange)hmmSignatureRangeWithContent:(id)arg1 detectedData:(id)arg2 quotedRegions:(id)arg3 authorName:(id)arg4;
- (struct _NSRange)hmmSignatureRange:(id)arg1;
- (struct _NSRange)hmmPlausibleSignatureRange:(id)arg1;
- (struct _NSRange)findSignaturePrefix:(id)arg1;
- (id)findRejectSig:(id)arg1;
- (struct _NSRange)findValediction:(id)arg1;
- (id)findSignaturePrefixesInEntity:(id)arg1 withSignaturePrefixes:(id)arg2;
- (id)findValedictionCommencedSignatureRanges:(id)arg1;
- (struct _NSRange)signatureRange:(id)arg1;

@end

