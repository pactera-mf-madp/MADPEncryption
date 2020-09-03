//
//  PacteraSMUtils.h
//  SMtest
//
//  Created by BruceHu on 2019/11/26.
//  Copyright © 2019 BruceHu. All rights reserved.
//
/**
* 加解密可能用到的工具
*/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraSMUtils : NSObject

///MARK: - Hex 编码

/// 字符串 16 进制编码。返回值：16 进制编码的字符串
/// @param str 待编码的字符串
+ (nullable NSString *)stringToHex:(NSString *)str;

/// NSData 16 进制编码。返回值：16 进制编码的字符串
/// @param data 原数据（NSData 格式）
+ (nullable NSString *)dataToHex:(NSData *)data;

///MARK: - Hex 解码

/// 16 进制字符串解码。返回值：解码后的原文
/// @param hexStr 16 编码进制字符串
+ (nullable NSString *)hexToString:(NSString *)hexStr;

/// 16 进制字符串解码为 NSData。返回值：解码后的 NSData 对象
/// @param hexStr 16 编码进制字符串
+ (nullable NSData *)hexToData:(NSString *)hexStr;


/// base 64 转 data
/// @param string 待转base64字符串
+ (NSData *)base64DataFromString:(NSString *)string;


/// data 转 base64
/// @param data 待转data
/// @param length data长度
+ (NSString *)base64StringFromData:(NSData *)data length:(NSUInteger)length;

/// 16进制 转 base64
+ (NSString *)base64FromHex:(NSString *)hexStr;


///  base64转16进制
+ (NSString *)HexFromBase64:(NSString *)base64Str;
@end

NS_ASSUME_NONNULL_END
