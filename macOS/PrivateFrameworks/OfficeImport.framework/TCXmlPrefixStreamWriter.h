//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/TCXmlStreamWriter.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter
{
    NSMutableArray *mStateStack;
}

+ (struct _xmlTextWriter *)createNonXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(BOOL)arg3;
+ (struct _xmlTextWriter *)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(BOOL)arg3;
- (BOOL)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2;
- (BOOL)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (BOOL)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long long)arg2;
- (BOOL)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(BOOL)arg2;
- (BOOL)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2;
- (BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3;
- (BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4;
- (BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long long)arg3;
- (BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(BOOL)arg3;
- (BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3;
- (BOOL)writeAttribute:(id)arg1 doubleContent:(double)arg2;
- (BOOL)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (BOOL)writeAttribute:(id)arg1 unsignedLongContent:(unsigned long long)arg2;
- (BOOL)writeAttribute:(id)arg1 intContent:(long long)arg2;
- (BOOL)writeAttribute:(id)arg1 boolContent:(BOOL)arg2;
- (BOOL)writeAttribute:(id)arg1 content:(id)arg2;
- (BOOL)addElement:(id)arg1;
- (BOOL)startElement:(id)arg1;
- (id)currentAttributePrefix;
- (id)currentElementPrefix;
- (id)currentState;
- (void)popState;
- (id)pushStateWithSharedPrefix:(id)arg1;
- (id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2;
- (id)pushState;
- (void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2;
- (void)dealloc;
- (id)initWithTextWriter:(struct _xmlTextWriter *)arg1;
- (BOOL)writeOAAttribute:(id)arg1 doubleContent:(double)arg2;
- (BOOL)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (BOOL)writeOAAttribute:(id)arg1 intContent:(long long)arg2;
- (BOOL)writeOAAttribute:(id)arg1 boolContent:(BOOL)arg2;
- (BOOL)writeOAAttribute:(id)arg1 content:(id)arg2;
- (BOOL)startOAElement:(id)arg1;
- (void)pushOAState;
- (void)writeTextString:(id)arg1 forElement:(id)arg2;
- (BOOL)writeIndexAttribute:(id)arg1 intContent:(unsigned long long)arg2;

@end

