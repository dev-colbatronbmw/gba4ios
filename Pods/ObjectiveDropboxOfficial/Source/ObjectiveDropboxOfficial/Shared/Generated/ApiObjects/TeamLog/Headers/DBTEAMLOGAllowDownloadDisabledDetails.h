///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAllowDownloadDisabledDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AllowDownloadDisabledDetails` struct.
///
/// Disabled allow downloads.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAllowDownloadDisabledDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AllowDownloadDisabledDetails` struct.
///
@interface DBTEAMLOGAllowDownloadDisabledDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGAllowDownloadDisabledDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGAllowDownloadDisabledDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAllowDownloadDisabledDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGAllowDownloadDisabledDetails *)instance;

///
/// Deserializes `DBTEAMLOGAllowDownloadDisabledDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAllowDownloadDisabledDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGAllowDownloadDisabledDetails`
/// object.
///
+ (DBTEAMLOGAllowDownloadDisabledDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
