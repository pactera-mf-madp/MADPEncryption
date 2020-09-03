//
//  PacteraSM2Tool.h
//  SMtest
//
//  Created by BruceHu on 2019/11/27.
//  Copyright © 2019 BruceHu. All rights reserved.
//
/**
* SM2 加解密的 OC 封装
* base64 代表 base64 格式
* 秘钥、加密后结果都是base64 格式
*/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraSM2Tool : NSObject


/// SM2 加密
/// @param message 待加密明文（普通字符串）
/// @param pubKey 公钥（base64字符串）
/// 返回SM2加密结果（base64字符串）
+ (nullable NSString *)encryptSM2WithString:(NSString *)message publicKey:(NSString *)pubKey;


/// SM2 解密
/// @param base64EncodedString 待解密字符串（base64字符串）
/// @param privateKey 私钥（base64字符串）
/// 返回SM2解密明文（普通字符串）
+ (nullable NSString *)decryptSM2WithString:(NSString *)base64EncodedString privateKey:(NSString *)privateKey;

@end

NS_ASSUME_NONNULL_END
