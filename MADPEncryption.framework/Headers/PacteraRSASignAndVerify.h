//
//  PacteraRSASignAndVerify.h
//  AuthTest
//
//  Created by BruceHu on 2019/10/22.
//  Copyright © 2019 BruceHu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraRSASignAndVerify : NSObject


/// sha256摘要
/// @param input 待摘要字符串
/// 返回16进制格式的摘要字符串（目前是小写）
+ (NSString *)signSHA256HashFor:(NSString *)input;

/// 使用私钥进行签名
/// @param content 需要签名的字符串
/// @param priKey 私钥字符串
+ (NSString *)sign:(NSString *)content withPriKey:(NSString *)priKey;


/// 使用公钥进行验签
/// @param content 签名的原始字符串
/// @param signature 签名后的字符串
/// @param publicKey 公钥字符串
+ (BOOL)verify:(NSString *)content signature:(NSString *)signature withPublivKey:(NSString *)publicKey;

@end

NS_ASSUME_NONNULL_END
