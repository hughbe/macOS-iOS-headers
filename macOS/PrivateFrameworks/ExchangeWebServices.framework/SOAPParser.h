//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSError, NSMutableArray, NSString, NSXMLParser, SOAPDocument;

@interface SOAPParser : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *_stack;
    id <SOAPParserDelegate> _delegate;
    SOAPDocument *_document;
    NSError *_error;
    NSXMLParser *_parser;
}

@property(retain, nonatomic) NSXMLParser *parser; // @synthesize parser=_parser;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) SOAPDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak id <SOAPParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (void)parseData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

