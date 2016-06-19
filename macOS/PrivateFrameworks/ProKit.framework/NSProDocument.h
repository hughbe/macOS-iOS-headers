//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

@class NSProDocumentModule, NSView;

@interface NSProDocument : NSDocument
{
    NSView *_documentView;
    NSProDocumentModule *_documentModule;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (Class)documentModuleClass;
- (id)documentModule;
- (id)documentView;
- (void)shouldCloseWindowController:(id)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)showWindows;
- (void)close;
- (void)removeWindowController:(id)arg1;
- (void)addWindowControllersFromDocument:(id)arg1;
- (id)mainWindowController;
- (id)windowForSheet;
- (void)makeWindowControllers;
- (id)windowNibName;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

