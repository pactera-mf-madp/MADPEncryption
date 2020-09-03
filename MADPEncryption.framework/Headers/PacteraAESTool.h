//
//  PacteraAESTool.h
//  PacteraEncryptionMethod
//
//  Created by BruceHu on 2019/11/21.
//  Copyright © 2019 BruceHu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraAESTool : NSObject

/// 对字符串加密
/// @param message 待加密字符串（普通字符串）
/// @param password 秘钥 [密钥32位长度，不足则在末尾自动填充'\0'补足]
/// @param iv 向量 [16位长度，不足则在末尾自动填充'\0'补足]，也可为空
/// 返回加密后的字符串（base64格式）
+ (NSString *)encryptAES256:(NSString *)message password:(NSString *)password iv:(nullable NSString *)iv;

/// 对字符串解密
/// @param base64EncodedString 待解密字符串（base64格式）
/// @param password 秘钥 [密钥32位长度，不足则在末尾自动填充'\0'补足]
/// @param iv 向量 [16位长度，不足则在末尾自动填充'\0'补足]，也可为空
/// 返回解密后的字符串（普通字符串）
+ (NSString *)decryptAES256:(NSString *)base64EncodedString password:(NSString *)password iv:(nullable NSString *)iv;

@end

NS_ASSUME_NONNULL_END
