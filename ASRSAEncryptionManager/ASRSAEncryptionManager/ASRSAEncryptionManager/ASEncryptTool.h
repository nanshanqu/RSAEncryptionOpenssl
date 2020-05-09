//
//  EncryptTool.h
//  ASRSAEncryptionManager
//
//  Created by Mac on 2020/5/8.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, KeyType)
{
    eKeyTypePublic,//公钥
    eKeyTypePrivate,//私钥
};

NS_ASSUME_NONNULL_BEGIN

@interface ASEncryptTool : NSObject

+ (id)shareInstance;//单例
- (NSString *)encrypt:(NSString *)content type:(KeyType)type;//加密
- (NSString *)decrypt:(NSString *)content type:(KeyType)type;//解密

@end

@interface NSString (Encode)

- (NSData*) base64Encode;//base64编码
- (NSData*) base64Decode;//base64解码
- (NSString*) URLEncode;//URL编码
- (NSString*) URLDecode;//URL解码


@end



@interface NSData (Encode)

- (NSString*)base64Encode;//base64编码
- (NSString*)base64Decode;//base64解码

@end

NS_ASSUME_NONNULL_END
