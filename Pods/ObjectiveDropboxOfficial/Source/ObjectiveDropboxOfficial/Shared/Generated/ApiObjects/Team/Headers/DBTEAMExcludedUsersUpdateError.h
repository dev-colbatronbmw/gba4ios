///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMExcludedUsersUpdateError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ExcludedUsersUpdateError` union.
///
/// Excluded users update error.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMExcludedUsersUpdateError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMExcludedUsersUpdateErrorTag` enum type represents the possible
/// tag states with which the `DBTEAMExcludedUsersUpdateError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMExcludedUsersUpdateErrorTag) {
  /// At least one of the users is not part of your team.
  DBTEAMExcludedUsersUpdateErrorUsersNotInTeam,

  /// A maximum of 1000 users for each of addition/removal can be supplied.
  DBTEAMExcludedUsersUpdateErrorTooManyUsers,

  /// (no description).
  DBTEAMExcludedUsersUpdateErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMExcludedUsersUpdateErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "users_not_in_team".
///
/// Description of the "users_not_in_team" tag state: At least one of the users
/// is not part of your team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUsersNotInTeam;

///
/// Initializes union class with tag state of "too_many_users".
///
/// Description of the "too_many_users" tag state: A maximum of 1000 users for
/// each of addition/removal can be supplied.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyUsers;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "users_not_in_team".
///
/// @return Whether the union's current tag state has value "users_not_in_team".
///
- (BOOL)isUsersNotInTeam;

///
/// Retrieves whether the union's current tag state has value "too_many_users".
///
/// @return Whether the union's current tag state has value "too_many_users".
///
- (BOOL)isTooManyUsers;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMExcludedUsersUpdateError` union.
///
@interface DBTEAMExcludedUsersUpdateErrorSerializer : NSObject

///
/// Serializes `DBTEAMExcludedUsersUpdateError` instances.
///
/// @param instance An instance of the `DBTEAMExcludedUsersUpdateError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMExcludedUsersUpdateError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMExcludedUsersUpdateError *)instance;

///
/// Deserializes `DBTEAMExcludedUsersUpdateError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMExcludedUsersUpdateError` API object.
///
/// @return An instantiation of the `DBTEAMExcludedUsersUpdateError` object.
///
+ (DBTEAMExcludedUsersUpdateError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
