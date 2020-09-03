//
//  NSData+AES.h
//  PacteraEncryptionMethod
//
//  Created by BruceHu on 2019/11/25.
//  Copyright © 2019 BruceHu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (AES)


/// 对data加密
/// @param data 待加密的data
/// @param key 秘钥 [密钥32位长度，不足则在末尾自动填充'\0'补足]
/// @param iv 向量 [16位长度，不足则在末尾自动填充'\0'补足]，也可为空
/// 返回加密的data
+ (NSData *)encryptDataAES256WithData:(NSData *)data Key:(NSString *)key iv:(nullable NSString *)iv;


/// 对data解密
/// @param data 待解密的data
/// @param key 秘钥 [密钥32位长度，不足则在末尾自动填充'\0'补足]
/// @param iv 向量 [16位长度，不足则在末尾自动填充'\0'补足]，也可为空
/// 返回解密的data
+ (NSData *)decryptDataAES256WithData:(NSData *)data andKey:(NSString *)key iv:(nullable NSString *)iv;

@end

NS_ASSUME_NONNULL_END
