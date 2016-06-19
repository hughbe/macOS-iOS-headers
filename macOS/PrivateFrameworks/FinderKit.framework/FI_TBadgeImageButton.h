//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TButton.h>

__attribute__((visibility("hidden")))
@interface FI_TBadgeImageButton : FI_TButton
{
    _Bool _inBatchUpdate;
    _Bool _selected;
    _Bool _dimmed;
    _Bool _active;
    struct TString _primaryToolTip;
    int _context;
    int _bladeRunnerBadge;
    struct TNSRef<NSError *, void> _bladeRunnerError;
    long long _backgroundStyle;
    function_f9feaa7d _clickHandler;
}

@property(nonatomic) int bladeRunnerBadge; // @synthesize bladeRunnerBadge=_bladeRunnerBadge;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic, getter=isInBatchUpdate) _Bool inBatchUpdate; // @synthesize inBatchUpdate=_inBatchUpdate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateBadgeImage;
- (void)setToolTip:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)prepareForReuse;
- (id)iCloudBadgeImageWithMouseDown:(_Bool)arg1;
- (void)initCommon;

@end

