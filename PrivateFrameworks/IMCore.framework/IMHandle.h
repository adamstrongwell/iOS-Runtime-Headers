/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMAccount, IMPerson, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMutableArray, NSSet, NSString, NSURL;

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {
    int _IDStatus;
    NSString *_IDWithTrimmedServer;
    NSString *_IDWithoutResource;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSString *_abNickname;
    IMAccount *_account;
    int _addressBookIdentifier;
    unsigned int _authRequestStatus;
    BOOL _beingTornDown;
    BOOL _blockNotifications;
    unsigned long long _capabilities;
    NSDictionary *_certs;
    NSString *_countryCode;
    NSString *_displayID;
    NSArray *_emails;
    NSDictionary *_extraProps;
    NSDate *_feedUpdatedDate;
    NSString *_firstName;
    NSString *_formattedNumber;
    NSString *_fullName;
    NSSet *_groups;
    NSString *_guid;
    BOOL _hasCheckedCardMap;
    BOOL _hasCheckedPhoneNumber;
    BOOL _hasTemporaryWatch;
    NSString *_id;
    NSDate *_idleSince;
    BOOL _isAnonymous;
    BOOL _isBot;
    BOOL _isMobile;
    BOOL _isRegistered;
    BOOL _isRetainingAccount;
    NSString *_lastName;
    NSString *_nickname;
    NSString *_normalizedFormOfID;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    int _notificationQueueCount;
    NSDictionary *_otherServiceIDs;
    IMPerson *_person;
    struct __CFPhoneNumber { } *_phoneNumberRef;
    NSData *_pictureData;
    NSDictionary *_presenceProps;
    unsigned int _prevStatus;
    NSString *_prevStatusMsg;
    int _priority;
    NSString *_processedStatusMsg;
    unsigned int _resourceIndex;
    NSAttributedString *_richStatusMsg;
    unsigned int _status;
    NSURL *_statusMessageURL;
    NSString *_statusMsg;
    NSURL *_statusURL;
    NSString *_uncanonicalID;
    NSString *_uniqueName;
    NSDate *_whenStatusChanged;
    NSDate *_whenWentOffline;
    BOOL _willUpdateIdleTime;
}

@property(readonly) NSString * ID;
@property int IDStatus;
@property(readonly) NSString * IDWithoutResource;
@property(readonly) IMPerson * _cachedPerson;
@property(setter=_setIsRegisteredWithRegistrar:) BOOL _isRegisteredWithRegistrar;
@property(readonly) IMAccount * account;
@property(readonly) NSArray * accountSiblingsArray;
@property(readonly) NSString * accountTypeName;
@property(readonly) int addressBookIdentifier;
@property(readonly) BOOL areABPropertiesRecent;
@property(readonly) unsigned int authRequestStatus;
@property(readonly) id bestAccountSibling;
@property(readonly) id bestSibling;
@property(readonly) BOOL canBeAdded;
@property(readonly) BOOL canBeDeleted;
@property(readonly) unsigned long long capabilities;
@property(retain) NSString * countryCode;
@property(retain) NSData * customPictureData;
@property(readonly) NSArray * dependentIMHandles;
@property(readonly) NSString * displayID;
@property(readonly) NSString * email;
@property(readonly) NSArray * emails;
@property(readonly) NSArray * existingAccountSiblingsArray;
@property(readonly) id existingIMHandleWithoutResource;
@property(readonly) NSDictionary * extraProperties;
@property(readonly) NSDate * feedUpdatedDate;
@property(readonly) NSString * firstName;
@property(readonly) NSString * fullName;
@property(readonly) NSSet * groups;
@property(readonly) NSArray * groupsArray;
@property(readonly) NSString * guid;
@property(readonly) BOOL hasAudio;
@property(readonly) BOOL hasConferencing;
@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasMultiwayAudio;
@property(readonly) BOOL hasMultiwayVideo;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasNoConferencingCaps;
@property(readonly) BOOL hasOtherSiblings;
@property(readonly) BOOL hasResource;
@property(readonly) BOOL hasServer;
@property(readonly) BOOL hasVideo;
@property(readonly) NSString * idleString;
@property(readonly) double idleTime;
@property(readonly) id imHandleWithoutResource;
@property(readonly) BOOL isAnonymous;
@property(setter=setBlocked:) BOOL isBlocked;
@property(readonly) BOOL isBot;
@property(readonly) BOOL isBuddy;
@property(readonly) BOOL isConferenceAvailable;
@property(readonly) BOOL isLoginIMHandle;
@property(readonly) BOOL isLoginIMHandleForAnyAccount;
@property(readonly) BOOL isMobile;
@property(readonly) BOOL isSystemUser;
@property(readonly) BOOL isVisiblyBlocked;
@property(readonly) NSString * lastName;
@property(readonly) NSString * mobileDeviceName;
@property(readonly) NSString * name;
@property(readonly) NSString * nameAndEmail;
@property(readonly) NSString * nameAndID;
@property(readonly) NSString * nameOfStatus;
@property(readonly) NSString * nickname;
@property(readonly) NSString * normalizedID;
@property(readonly) NSString * offlineString;
@property(retain) NSString * originalID;
@property(retain) NSDictionary * otherServiceIDs;
@property(setter=setIMPerson:,retain) IMPerson * person;
@property(readonly) NSData * pictureData;
@property(readonly) NSDictionary * presenceProperties;
@property(readonly) unsigned int previousStatus;
@property(readonly) NSString * previousStatusMessage;
@property int priority;
@property(readonly) NSString * resource;
@property(readonly) NSAttributedString * richStatusMessage;
@property(readonly) NSString * server;
@property(readonly) IMServiceImpl * service;
@property(readonly) NSSet * siblings;
@property(readonly) NSArray * siblingsArray;
@property(readonly) unsigned int status;
@property(readonly) NSString * statusMessage;
@property(retain) NSURL * statusMessageAsURL;
@property(readonly) NSURL * statusURL;
@property(readonly) BOOL supportsARDMuxing;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) double timeSinceWentOffline;
@property(readonly) NSString * uniqueName;
@property(readonly) BOOL watchingIMHandle;

+ (void)_loadStatusNames;
+ (id)bestIMHandleInArray:(id)arg1;
+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)nameOfStatus:(unsigned int)arg1;
+ (BOOL)notificationsEnabled;
+ (void)setNotificationsEnabled:(BOOL)arg1;

- (id)ID;
- (int)IDStatus;
- (id)IDWithoutResource;
- (id)_IDWithTrimmedServer;
- (id)_abPersonCreateIfNeeded;
- (id)_bestChatSibling;
- (id)_cachedPerson;
- (id)_chatSiblings;
- (id)_chatSiblingsArray;
- (void)_clearABPersonLookup;
- (void)_clearABProperties;
- (void)_clearStatusMessageURLCache;
- (void)_createPhoneNumberRefIfNeeded;
- (void)_filterStatusMessage;
- (id)_formattedPhoneNumber;
- (id)_handleInfo;
- (BOOL)_hasABName;
- (BOOL)_hasServiceNameProperties;
- (void)_imPersonPictureChanged:(id)arg1;
- (BOOL)_isChatSiblingOf:(id)arg1;
- (BOOL)_isMyIDInList:(id)arg1;
- (BOOL)_isRegisteredWithRegistrar;
- (id)_nameForComparisonPreferFirst:(BOOL)arg1;
- (id)_nameUsingUnique:(BOOL)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_registerForIMPersonPictureChanges;
- (void)_registerForNotifications;
- (void)_removeAccountReference:(id)arg1;
- (void)_scheduleIdleTimeUpdate;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendData:(id)arg1;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (void)_sendRemoteLogDumpRequest;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (BOOL)_setCapabilities:(unsigned long long)arg1;
- (void)_setCountryCode:(id)arg1;
- (void)_setExtraProperties:(id)arg1;
- (void)_setIsRegisteredWithRegistrar:(BOOL)arg1;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(BOOL)arg3;
- (void)_setOriginalID:(id)arg1 updateSiblings:(BOOL)arg2;
- (void)_setOriginalID:(id)arg1;
- (void)_stopRetainingAccount:(id)arg1;
- (void)_unregisterFromIMPersonPictureChanges;
- (void)_updateIdleTime;
- (void)_updateIdleTimer;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (id)account;
- (id)accountSiblingsArray;
- (id)accountTypeName;
- (int)addressBookIdentifier;
- (BOOL)areABPropertiesRecent;
- (unsigned int)authRequestStatus;
- (void)beginNotificationQueue;
- (id)bestAccountSibling;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (id)bestIMHandleForAccount:(id)arg1;
- (id)bestIMHandleForService:(id)arg1;
- (id)bestSibling;
- (id)bestSiblingInGroup:(id)arg1 otherThan:(id)arg2;
- (id)bestSiblingInGroup:(id)arg1;
- (BOOL)canBeAdded;
- (BOOL)canBeDeleted;
- (unsigned long long)capabilities;
- (id)chatSiblingsArray;
- (void)clearABPerson;
- (int)compareAccountNames:(id)arg1;
- (int)compareFirstNames:(id)arg1;
- (int)compareIDs:(id)arg1;
- (int)compareLastNames:(id)arg1;
- (int)compareNormalizedIDs:(id)arg1;
- (int)compareStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)customPictureData;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)dependentIMHandles;
- (id)description;
- (id)displayID;
- (id)email;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)existingAccountSiblingsArray;
- (id)existingChatSiblingsArray;
- (id)existingIMHandleWithoutResource;
- (id)extraProperties;
- (id)feedUpdatedDate;
- (void)finalize;
- (id)firstName;
- (id)fullName;
- (id)groups;
- (id)groupsArray;
- (id)guid;
- (BOOL)hasAudio;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (BOOL)hasConferencing;
- (BOOL)hasLocation;
- (BOOL)hasMultiwayAudio;
- (BOOL)hasMultiwayVideo;
- (BOOL)hasName;
- (BOOL)hasNoConferencingCaps;
- (BOOL)hasOtherSiblings;
- (BOOL)hasResource;
- (BOOL)hasServer;
- (BOOL)hasVideo;
- (unsigned int)hash;
- (id)idleString;
- (double)idleTime;
- (id)imHandleForOtherAccount:(id)arg1;
- (id)imHandleRegistrarGUID;
- (id)imHandleWithoutResource;
- (id)init;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAccountSiblingOf:(id)arg1;
- (BOOL)isAnonymous;
- (BOOL)isBetterThanIMHandle:(id)arg1;
- (BOOL)isBlocked;
- (BOOL)isBot;
- (BOOL)isBuddy;
- (BOOL)isConferenceAvailable;
- (BOOL)isLoginIMHandle;
- (BOOL)isLoginIMHandleForAnyAccount;
- (BOOL)isMobile;
- (BOOL)isSiblingOf:(id)arg1;
- (BOOL)isSystemUser;
- (BOOL)isVisiblyBlocked;
- (id)lastName;
- (BOOL)matchesIMHandle:(id)arg1;
- (id)mobileDeviceName;
- (id)name;
- (id)nameAndEmail;
- (id)nameAndID;
- (id)nameOfStatus;
- (id)nickname;
- (id)normalizedID;
- (id)offlineString;
- (id)originalID;
- (id)otherServiceIDs;
- (id)person;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)pictureData;
- (void)postNotificationName:(id)arg1;
- (id)presenceProperties;
- (unsigned int)previousStatus;
- (id)previousStatusMessage;
- (int)priority;
- (void)propertiesChanged:(id)arg1;
- (id)publicAPIPropertiesDictionary;
- (oneway void)release;
- (void)releaseNotificationQueue;
- (void)requestIDStatus;
- (void)requestValueOfProperty:(id)arg1;
- (BOOL)resetABPerson;
- (void)resetABProperties;
- (void)resetUniqueName;
- (id)resource;
- (id)richStatusMessage;
- (void)sendNotificationABPersonChanged;
- (id)server;
- (id)service;
- (void)setAnonymous:(BOOL)arg1;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (void)setBlocked:(BOOL)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (void)setCustomPictureData:(id)arg1;
- (void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setEmail:(id)arg1;
- (void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setEmails:(id)arg1;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setHasTemporaryWatch:(BOOL)arg1;
- (void)setIDStatus:(int)arg1;
- (void)setIMPerson:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsBot:(BOOL)arg1;
- (void)setIsMobile:(BOOL)arg1;
- (void)setLocalNickname:(id)arg1;
- (void)setOtherServiceIDs:(id)arg1;
- (void)setPersonStatus:(unsigned int)arg1;
- (void)setPresenceProperties:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setStatus:(unsigned int)arg1 message:(id)arg2 richMessage:(id)arg3;
- (void)setStatusMessageAsURL:(id)arg1;
- (void)setStatusURLFromString:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (BOOL)shouldQueueNotifications;
- (id)siblings;
- (id)siblingsArray;
- (unsigned int)sortOrderInGroup:(id)arg1;
- (unsigned int)status;
- (void)statusChanged:(unsigned int)arg1 message:(id)arg2;
- (void)statusChanged:(unsigned int)arg1;
- (id)statusMessage;
- (id)statusMessageAsURL;
- (void)statusMessageChanged:(id)arg1;
- (id)statusURL;
- (BOOL)supportsARDMuxing;
- (double)timeSinceStatusChanged;
- (double)timeSinceWentOffline;
- (id)uniqueName;
- (BOOL)watchingIMHandle;

@end
