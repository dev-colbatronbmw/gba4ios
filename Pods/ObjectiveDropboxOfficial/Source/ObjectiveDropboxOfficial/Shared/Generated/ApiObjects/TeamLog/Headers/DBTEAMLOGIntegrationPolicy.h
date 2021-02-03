///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGIntegrationPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `IntegrationPolicy` union.
///
/// Policy for controlling whether a service integration is enabled for the
/// team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGIntegrationPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGIntegrationPolicyTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGIntegrationPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGIntegrationPolicyTag) {
  /// (no description).
  DBTEAMLOGIntegrationPolicyDisabled,

  /// (no description).
  DBTEAMLOGIntegrationPolicyEnabled,

  /// (no description).
  DBTEAMLOGIntegrationPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGIntegrationPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled".
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "enabled".
///
/// @return An initialized instance.
///
- (instancetype)initWithEnabled;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

///
/// Retrieves whether the union's current tag state has value "enabled".
///
/// @return Whether the union's current tag state has value "enabled".
///
- (BOOL)isEnabled;

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
/// The serialization class for the `DBTEAMLOGIntegrationPolicy` union.
///
@interface DBTEAMLOGIntegrationPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGIntegrationPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGIntegrationPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGIntegrationPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGIntegrationPolicy *)instance;

///
/// Deserializes `DBTEAMLOGIntegrationPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGIntegrationPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGIntegrationPolicy` object.
///
+ (DBTEAMLOGIntegrationPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
