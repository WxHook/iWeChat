//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBBottle : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _localId;
    unsigned int _serverId;
    long long lastInsertedRowID;
    NSString *_encryptUserName;
    NSString *_bottleId;
    NSString *_ext;
}

+ (const struct WCTProperty *)ext;
+ (const struct WCTProperty *)bottleId;
+ (const struct WCTProperty *)encryptUserName;
+ (const struct WCTProperty *)serverId;
+ (const struct WCTProperty *)localId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *bottleId; // @synthesize bottleId=_bottleId;
@property(retain, nonatomic) NSString *encryptUserName; // @synthesize encryptUserName=_encryptUserName;
@property(nonatomic) unsigned int serverId; // @synthesize serverId=_serverId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end

