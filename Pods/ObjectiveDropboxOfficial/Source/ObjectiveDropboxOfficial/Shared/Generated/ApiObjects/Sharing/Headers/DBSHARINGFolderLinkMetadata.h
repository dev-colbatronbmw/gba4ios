///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSHARINGSharedLinkMetadata.h"
#import "DBSerializableProtocol.h"

@class DBSHARINGFolderLinkMetadata;
@class DBSHARINGLinkPermissions;
@class DBSHARINGTeamMemberInfo;
@class DBUSERSTeam;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FolderLinkMetadata` struct.
///
/// The metadata of a folder shared link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFolderLinkMetadata : DBSHARINGSharedLinkMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param url URL of the shared link.
/// @param name The linked file name (including extension). This never contains
/// a slash.
/// @param linkPermissions The link's access permissions.
/// @param id_ A unique identifier for the linked file.
/// @param expires Expiration time, if set. By default the link won't expire.
/// @param pathLower The lowercased full path in the user's Dropbox. This always
/// starts with a slash. This field will only be present only if the linked file
/// is in the authenticated user's  dropbox.
/// @param teamMemberInfo The team membership information of the link's owner.
/// This field will only be present  if the link's owner is a team member.
/// @param contentOwnerTeamInfo The team information of the content's owner.
/// This field will only be present if the content's owner is a team member and
/// the content's owner team is different from the link's owner team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url
                       name:(NSString *)name
            linkPermissions:(DBSHARINGLinkPermissions *)linkPermissions
                        id_:(nullable NSString *)id_
                    expires:(nullable NSDate *)expires
                  pathLower:(nullable NSString *)pathLower
             teamMemberInfo:(nullable DBSHARINGTeamMemberInfo *)teamMemberInfo
       contentOwnerTeamInfo:(nullable DBUSERSTeam *)contentOwnerTeamInfo;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param url URL of the shared link.
/// @param name The linked file name (including extension). This never contains
/// a slash.
/// @param linkPermissions The link's access permissions.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url
                       name:(NSString *)name
            linkPermissions:(DBSHARINGLinkPermissions *)linkPermissions;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FolderLinkMetadata` struct.
///
@interface DBSHARINGFolderLinkMetadataSerializer : NSObject

///
/// Serializes `DBSHARINGFolderLinkMetadata` instances.
///
/// @param instance An instance of the `DBSHARINGFolderLinkMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFolderLinkMetadata` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGFolderLinkMetadata *)instance;

///
/// Deserializes `DBSHARINGFolderLinkMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFolderLinkMetadata` API object.
///
/// @return An instantiation of the `DBSHARINGFolderLinkMetadata` object.
///
+ (DBSHARINGFolderLinkMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
