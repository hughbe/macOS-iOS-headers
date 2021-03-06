//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSSQLLimitIntermediate, NSSQLOrderIntermediate, NSSQLWhereIntermediate, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLStatementIntermediate : NSSQLIntermediate
{
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOrderIntermediate *_orderIntermediate;
}

- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (void)setGoverningEntity:(id)arg1;
- (id)governingEntity;
- (void)setGoverningAlias:(id)arg1;
- (id)governingAlias;
- (id)correlationToken;
- (void)setCorrelationToken:(id)arg1;
- (void)setOrderIntermediate:(id)arg1;
- (id)orderIntermediate;
- (void)setLimitIntermediate:(id)arg1;
- (id)limitIntermediate;
- (void)setWhereIntermediate:(id)arg1;
- (id)whereIntermediate;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;

@end

