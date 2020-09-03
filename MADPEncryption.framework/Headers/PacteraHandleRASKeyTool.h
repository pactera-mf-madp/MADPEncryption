//
//  PacteraHandleRASKeyTool.h
//  AuthTest
//
//  Created by BruceHu on 2019/10/23.
//  Copyright © 2019 BruceHu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraHandleRASKeyTool : NSObject

/// 获取私钥
/// @param filePath ‘.p12’格式的私钥文件路径
/// @param password 私钥文件的密码
+ (SecKeyRef)getPrivateKeyRefWithContentsOfFile:(NSString *)filePath password:(NSString*)password;

/// 获取公钥
/// @param filePath ‘.der’格式的公钥文件路径
+ (SecKeyRef)getPublicKeyRefWithContentsOfFile:(NSString *)filePath;



/// 根据私钥字符串，获取私钥内容
/// @param key 私钥字符串
+ (SecKeyRef)addPrivateKey:(NSString *)key;


/// 根据公钥字符串，获取公钥内容
/// @param key 公钥字符串
+ (SecKeyRef)addPublicKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
