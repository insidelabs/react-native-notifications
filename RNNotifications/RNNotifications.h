@import UIKit;

#import <React/RCTBridgeModule.h>
#import <PushKit/PushKit.h>
#import <UserNotifications/UserNotifications.h>

@interface RNNotifications : NSObject <RCTBridgeModule>

+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
+ (void)didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;
+ (void)didUpdatePushCredentials:(PKPushCredentials *)credentials forType:(NSString *)type;

+ (void)didReceiveRemoteNotification:(NSDictionary *)notification;
+ (void)didReceiveRemoteUNNotification:(UNNotification *)notification;
+ (void)didReceiveLocalNotification:(UILocalNotification *)notification;

+ (void)didReceiveNotificationResponse:(UNNotificationResponse *)response;

+ (void)handleActionWithIdentifier:(NSString *)identifier forRemoteNotification:(NSDictionary *)userInfo withResponseInfo:(NSDictionary *)responseInfo completionHandler:(void (^)())completionHandler;
+ (void)handleActionWithIdentifier:(NSString *)identifier forLocalNotification:(UILocalNotification *)notification withResponseInfo:(NSDictionary *)responseInfo completionHandler:(void (^)())completionHandler;

@end
