//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNUID_instanciateWithOption:(id)arg1;
+ (id)SCNUID_creationOptions;
- (BOOL)hasReferenceToPhysicsBody:(id)arg1;
- (id)bodyB;
- (id)bodyA;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

