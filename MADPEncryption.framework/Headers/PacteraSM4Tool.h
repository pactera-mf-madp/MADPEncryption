//
//  PacteraSM4Tool.h
//  SMtest
//
//  Created by BruceHu on 2019/11/27.
//  Copyright © 2019 BruceHu. All rights reserved.
//
/**
* CBC 密文分组链接模式，前一个分组的密文和当前分组的明文异或或操作后再加密。
* SM4 加密需要 16 位对齐，若原文长度不是 16 的倍数，则需补齐 Padding。
* Padding 规则：采用 PKCS7Padding 补码方式，末位肯定是填充的长度。
* 填充长度为 1-16 位，加密字符长度 len，填充长度 = 16 - len % 16。
* base64 代表 base64 格式
* 秘钥、加密后结果都是base64 格式
*/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraSM4Tool : NSObject


/// SM4加密
/// @param message 待加密明文
/// @param key 秘钥（base64格式）
/// @param iv 偏移量 【16位长度，不传则自动以0补足】
/// 返回加密的base64格式字符串
+ (NSString *)encryptSM4CBCWithString:(NSString *)message key:(NSString *)key iv:(nullable NSString *)iv;

/// SM4解密
/// @param base64EncodedString 待解密的base64字符串
/// @param key 秘钥（base64格式）
/// @param iv 偏移量 【16位长度，不传则自动以0补足】
/// 返回明文
+ (NSString *)decryptSM4CBCWithString:(NSString *)base64EncodedString key:(NSString *)key iv:(nullable NSString *)iv;

@end

NS_ASSUME_NONNULL_END
