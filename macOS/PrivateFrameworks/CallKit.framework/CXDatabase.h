//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface CXDatabase : NSObject
{
    NSURL *_url;
    struct sqlite3 *_database;
    NSMutableDictionary *_sqlQueryToStatements;
}

@property(retain, nonatomic) NSMutableDictionary *sqlQueryToStatements; // @synthesize sqlQueryToStatements=_sqlQueryToStatements;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(BOOL)arg4 resultRowHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (BOOL)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id *)arg3;
- (id)_statementForSQL:(id)arg1 transient:(BOOL)arg2 error:(id *)arg3;
- (BOOL)executeSQL:(id)arg1 error:(id *)arg2;
- (BOOL)rollbackTransactionWithError:(id *)arg1;
- (BOOL)commitTransactionWithError:(id *)arg1;
- (BOOL)beginTransactionWithError:(id *)arg1;
@property(readonly, nonatomic) long long lastInsertedRowID;
- (BOOL)vacuumWithError:(id *)arg1;
- (BOOL)enableForeignKeysWithError:(id *)arg1;
- (BOOL)closeWithError:(id *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 error:(id *)arg3;

@end

