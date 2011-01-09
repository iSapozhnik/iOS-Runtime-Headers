/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary, NSArray, NSString, CKService, CKMessage, NSMutableArray;



@interface CKConversation : NSObject 
{
    NSMutableArray *_messages;
    NSString *_name;
    NSInteger _unreadCount;
    NSMutableArray *_failedMessages;
    NSMutableArray *_pendingMessages;
    CKMessage *_latestIncomingMessage;
    BOOL _hasPlaceholder;
    CKMessage *_placeholderMessage;
    NSArray *_names;
    NSArray *_recipients;
    NSInteger _groupID;
    NSMutableDictionary *_groupMessages;
    NSMutableArray *_queuedGroupMessages;
    NSInteger _groupAddStack;
    BOOL _moreMessagesToLoad;
    NSInteger _limitToLoad;
    CKService *_service;
    BOOL _updatesDisabled;
}

@property(retain) CKMessageComposition *unsentComposition;
@property(readonly) NSMutableArray *failedMessages;
@property BOOL updatesDisabled;
@property(readonly) CKService *service;


- (id)recipient;
- (void)resetCaches;
- (NSInteger)propertyType;
- (id)service;
- (id)messages;
- (void)setUnreadCount:(NSInteger)arg1;
- (NSInteger)unreadCount;
- (NSInteger)identifier;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)isEmpty;
- (id)date;
- (void)dealloc;
- (void)_recalculateUnreadCounts;
- (id)placeholderMessage;
- (void)_setPlaceholderMessage:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)_beginGroupAdd;
- (void)_addGroupMessage:(id)arg1;
- (NSInteger)_endGroupAdd:(BOOL)arg1;
- (void)resetPendingMessages;
- (void)removeAllMessages;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1;
- (void)_postUpdate;
- (void)_reloadMessagesToLimit;
- (id)pendingMessages;
- (id)latestIncomingMessage;
- (id)_trulyLatestMessage;
- (id)groupMessageWithAssociationID:(NSInteger)arg1;
- (void)pendingMessagesTotalMessages:(NSInteger*)arg1 percentComplete:(float*)arg2;
- (id)failedMessages;
- (BOOL)updatesDisabled;
- (BOOL)hasUnreadMessages;
- (id)initWithGroupID:(NSInteger)arg1 service:(id)arg2;
- (void)setUpdatesDisabled:(BOOL)arg1;
- (NSInteger)compareByDateDescending:(id)arg1;
- (void)loadLastMessage;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)markAllMessagesAsRead;
- (void)setUnsentComposition:(id)arg1;
- (id)unsentComposition;
- (NSInteger)groupID;
- (id)latestMessage;
- (void)removeMessage:(id)arg1;
- (NSInteger)addMessage:(id)arg1 incrementUnreadCount:(BOOL)arg2;
- (void*)abRecord;
- (BOOL)moreMessagesToLoad;
- (void)loadAllMessages;
- (void)loadMoreMessages;
- (void)deleteAllMessages;
- (BOOL)isPlaceholder;
- (id)recipients;
- (void)setRecipients:(id)arg1;

@end