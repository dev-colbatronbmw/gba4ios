///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESMetadata;
@class DBFILESRelocationBatchResultData;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocationBatchResultData` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRelocationBatchResultData : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Metadata of the relocated object.
@property (nonatomic, readonly) DBFILESMetadata *metadata;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param metadata Metadata of the relocated object.
///
/// @return An initialized instance.
///
- (instancetype)initWithMetadata:(DBFILESMetadata *)metadata;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RelocationBatchResultData` struct.
///
@interface DBFILESRelocationBatchResultDataSerializer : NSObject

///
/// Serializes `DBFILESRelocationBatchResultData` instances.
///
/// @param instance An instance of the `DBFILESRelocationBatchResultData` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchResultData` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESRelocationBatchResultData *)instance;

///
/// Deserializes `DBFILESRelocationBatchResultData` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchResultData` API object.
///
/// @return An instantiation of the `DBFILESRelocationBatchResultData` object.
///
+ (DBFILESRelocationBatchResultData *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
