/* Generated by RuntimeBrowser.
 */

@protocol SFPerformIntentCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)intentMessageData;
- (NSString *)intentMessageName;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setIntentMessageData:(NSData *)arg1;
- (void)setIntentMessageName:(NSString *)arg1;

@end
