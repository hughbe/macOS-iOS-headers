//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ISS_MMGroup, ISS_MMTransaction, ISS_MMiDiskSession, NSArray, NSString;

@protocol DMPrincipalManagement
- (ISS_MMTransaction *)listGroupsForAccountNamed:(NSString *)arg1;
- (ISS_MMTransaction *)groupExists:(ISS_MMGroup *)arg1;
- (ISS_MMTransaction *)listMembers:(ISS_MMGroup *)arg1;
- (ISS_MMTransaction *)removeGroup:(ISS_MMGroup *)arg1;
- (ISS_MMTransaction *)removePrincipals:(NSArray *)arg1 fromGroup:(ISS_MMGroup *)arg2;
- (ISS_MMTransaction *)addPrincipals:(NSArray *)arg1 toGroup:(ISS_MMGroup *)arg2;
- (ISS_MMTransaction *)createGroup:(ISS_MMGroup *)arg1 withMembers:(NSArray *)arg2;
- (ISS_MMTransaction *)allSecondaryUserInfo;
- (ISS_MMTransaction *)listSecondaryUsersForAccountNamed:(NSString *)arg1;
- (ISS_MMTransaction *)resetPassword:(NSString *)arg1 forSecondaryUserNamed:(NSString *)arg2;
- (ISS_MMTransaction *)lookupPasswordForSecondaryUserNamed:(NSString *)arg1;
- (ISS_MMTransaction *)removeSecondaryUserNamed:(NSString *)arg1;
- (ISS_MMTransaction *)createSecondaryUserNamed:(NSString *)arg1 withPassword:(NSString *)arg2;
- (id)initWithIDiskSession:(ISS_MMiDiskSession *)arg1;
@end

