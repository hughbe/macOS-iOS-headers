//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface WFPDFContentStream : NSObject
{
    struct CGPDFContentStream *_contentStreamRef;
    NSMutableDictionary *_operatorBlocks;
    struct CGPDFOperatorTable *_operatorTableRef;
    NSArray *_textContainers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *textContainers; // @synthesize textContainers=_textContainers;
@property(nonatomic) struct CGPDFOperatorTable *operatorTableRef; // @synthesize operatorTableRef=_operatorTableRef;
@property(retain, nonatomic) NSMutableDictionary *operatorBlocks; // @synthesize operatorBlocks=_operatorBlocks;
@property(readonly, nonatomic) struct CGPDFContentStream *contentStreamRef; // @synthesize contentStreamRef=_contentStreamRef;
- (id)textInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithContentStreamRef:(struct CGPDFContentStream *)arg1;

@end

