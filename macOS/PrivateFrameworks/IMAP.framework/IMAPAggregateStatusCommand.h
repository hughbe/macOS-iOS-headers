//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPAggregateCommand.h>

@interface IMAPAggregateStatusCommand : IMAPAggregateCommand
{
}

- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (id)activityString;
- (id)commandTypeString;

@end

