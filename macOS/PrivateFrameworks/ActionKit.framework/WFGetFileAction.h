//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFStorageServiceAction.h>

@interface WFGetFileAction : WFStorageServiceAction
{
}

- (id)targetDataInfo;
- (void)updateVisibleParameters;
- (void)selectedStorageServiceChanged;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (BOOL)outputsMultipleItems;
- (BOOL)multipleSelectionEnabled;
- (id)filenamePlaceholderText;
- (id)showPickerKey;
- (id)filePathKey;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end

