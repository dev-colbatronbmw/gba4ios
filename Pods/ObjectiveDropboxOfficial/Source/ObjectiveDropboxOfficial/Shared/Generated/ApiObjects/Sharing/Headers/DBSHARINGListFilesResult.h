///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGListFilesResult;
@class DBSHARINGSharedFileMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFilesResult` struct.
///
/// Success results for `listReceivedFiles`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFilesResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Information about the files shared with current user.
@property (nonatomic, readonly) NSArray<DBSHARINGSharedFileMetadata *> *entries;

/// Cursor used to obtain additional shared files.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param entries Information about the files shared with current user.
/// @param cursor Cursor used to obtain additional shared files.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBSHARINGSharedFileMetadata *> *)entries cursor:(nullable NSString *)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param entries Information about the files shared with current user.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBSHARINGSharedFileMetadata *> *)entries;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFilesResult` struct.
///
@interface DBSHARINGListFilesResultSerializer : NSObject

///
/// Serializes `DBSHARINGListFilesResult` instances.
///
/// @param instance An instance of the `DBSHARINGListFilesResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFilesResult` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGListFilesResult *)instance;

///
/// Deserializes `DBSHARINGListFilesResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFilesResult` API object.
///
/// @return An instantiation of the `DBSHARINGListFilesResult` object.
///
+ (DBSHARINGListFilesResult *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
