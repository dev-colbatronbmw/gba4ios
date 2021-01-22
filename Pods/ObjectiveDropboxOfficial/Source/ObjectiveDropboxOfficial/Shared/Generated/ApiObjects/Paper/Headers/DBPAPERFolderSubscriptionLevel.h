///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERFolderSubscriptionLevel;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FolderSubscriptionLevel` union.
///
/// The subscription level of a Paper folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERFolderSubscriptionLevel : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERFolderSubscriptionLevelTag` enum type represents the possible
/// tag states with which the `DBPAPERFolderSubscriptionLevel` union can exist.
typedef NS_ENUM(NSInteger, DBPAPERFolderSubscriptionLevelTag) {
  /// Not shown in activity, no email messages.
  DBPAPERFolderSubscriptionLevelNone,

  /// Shown in activity, no email messages.
  DBPAPERFolderSubscriptionLevelActivityOnly,

  /// Shown in activity, daily email messages.
  DBPAPERFolderSubscriptionLevelDailyEmails,

  /// Shown in activity, weekly email messages.
  DBPAPERFolderSubscriptionLevelWeeklyEmails,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERFolderSubscriptionLevelTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "none".
///
/// Description of the "none" tag state: Not shown in activity, no email
/// messages.
///
/// @return An initialized instance.
///
- (instancetype)initWithNone;

///
/// Initializes union class with tag state of "activity_only".
///
/// Description of the "activity_only" tag state: Shown in activity, no email
/// messages.
///
/// @return An initialized instance.
///
- (instancetype)initWithActivityOnly;

///
/// Initializes union class with tag state of "daily_emails".
///
/// Description of the "daily_emails" tag state: Shown in activity, daily email
/// messages.
///
/// @return An initialized instance.
///
- (instancetype)initWithDailyEmails;

///
/// Initializes union class with tag state of "weekly_emails".
///
/// Description of the "weekly_emails" tag state: Shown in activity, weekly
/// email messages.
///
/// @return An initialized instance.
///
- (instancetype)initWithWeeklyEmails;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "none".
///
/// @return Whether the union's current tag state has value "none".
///
- (BOOL)isNone;

///
/// Retrieves whether the union's current tag state has value "activity_only".
///
/// @return Whether the union's current tag state has value "activity_only".
///
- (BOOL)isActivityOnly;

///
/// Retrieves whether the union's current tag state has value "daily_emails".
///
/// @return Whether the union's current tag state has value "daily_emails".
///
- (BOOL)isDailyEmails;

///
/// Retrieves whether the union's current tag state has value "weekly_emails".
///
/// @return Whether the union's current tag state has value "weekly_emails".
///
- (BOOL)isWeeklyEmails;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBPAPERFolderSubscriptionLevel` union.
///
@interface DBPAPERFolderSubscriptionLevelSerializer : NSObject

///
/// Serializes `DBPAPERFolderSubscriptionLevel` instances.
///
/// @param instance An instance of the `DBPAPERFolderSubscriptionLevel` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERFolderSubscriptionLevel` API object.
///
+ (nullable NSDictionary *)serialize:(DBPAPERFolderSubscriptionLevel *)instance;

///
/// Deserializes `DBPAPERFolderSubscriptionLevel` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERFolderSubscriptionLevel` API object.
///
/// @return An instantiation of the `DBPAPERFolderSubscriptionLevel` object.
///
+ (DBPAPERFolderSubscriptionLevel *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
