//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class SMConnectionFamilyIconTypeTransformer;

@interface SMConnectionFamilyIconTransformer : NSValueTransformer
{
    SMConnectionFamilyIconTypeTransformer *_connectionFamilyIconTypeTransformer;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(retain) SMConnectionFamilyIconTypeTransformer *connectionFamilyIconTypeTransformer; // @synthesize connectionFamilyIconTypeTransformer=_connectionFamilyIconTypeTransformer;
- (void).cxx_destruct;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

