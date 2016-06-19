//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBasePlayerCell.h>

@class GKLabel, NSLayoutConstraint, NSString;

@interface GKFriendPlayerCell : GKBasePlayerCell
{
    GKLabel *_statusLabel;
    GKLabel *_whenLabel;
    NSLayoutConstraint *_nameYConstraint;
    double _nameYOffset;
}

+ (Class)cellClassForPlayer:(id)arg1;
@property(nonatomic) double nameYOffset; // @synthesize nameYOffset=_nameYOffset;
@property(nonatomic) NSLayoutConstraint *nameYConstraint; // @synthesize nameYConstraint=_nameYConstraint;
@property(retain, nonatomic) GKLabel *whenLabel; // @synthesize whenLabel=_whenLabel;
@property(retain, nonatomic) GKLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)didUpdateModel;
@property(nonatomic) NSString *whenText;
- (void)setSelected:(BOOL)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

