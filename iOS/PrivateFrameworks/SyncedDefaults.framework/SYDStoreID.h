/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDStoreID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
