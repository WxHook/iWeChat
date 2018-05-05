//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactInfoViewControllerDelegate-Protocol.h"
#import "ContactsItemViewDelegate-Protocol.h"
#import "IAddressBookFriendMgrExt-Protocol.h"
#import "SendVerifyMsgViewControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VerifyPhoneDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class AddressBookFriend, CContactVerifyLogic, ContactInfoViewController, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UITextField;

@interface AddressBookFriendViewController : MMSearchBarDisplayController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, IAddressBookFriendMgrExt, contactInfoDelegate, VerifyPhoneDelegate, ContactInfoViewControllerDelegate, ContactsItemViewDelegate, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate>
{
    MMTableView *m_tableView;
    UITextField *m_searchTextField;
    UIButton *m_searchBtn;
    AddressBookFriend *m_oCurrentFriendWrap;
    NSMutableArray *m_arrAddressBookFriendList;
    NSMutableDictionary *m_dicNicknameToFriends;
    NSMutableArray *m_arrFilteredFriendList;
    ContactInfoViewController *m_CurrentFriendItemView;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrKey;
    NSMutableDictionary *m_dicFriendList;
}

@property(retain, nonatomic) ContactInfoViewController *m_CurrentFriendItemView; // @synthesize m_CurrentFriendItemView;
@property(retain, nonatomic) AddressBookFriend *m_oCurrentFriendWrap; // @synthesize m_oCurrentFriendWrap;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)bindPhoneReturn;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)onUpdateContact:(id)arg1;
- (void)onRemoveContact;
- (void)onAddContact;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)verifyContactWithOpCode:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onSendVerifyMsgCancel;
- (void)onSendVerifyMsgOK;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)onContactVerifyFail;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeAddressBookFriendCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned long long)arg3 tableView:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)newAddressBookFriendArrived;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)loadData:(_Bool)arg1;
- (void)trySyncAddressBook;
- (void)sortFriendList;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)canSyncAddressBook;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
