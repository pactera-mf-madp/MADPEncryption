//
//  PacteraSM3Tool.h
//  SMtest
//
//  Created by BruceHu on 2019/11/27.
//  Copyright © 2019 BruceHu. All rights reserved.
//
/**
* SM3 摘要算法，提取数据摘要
* 摘要长度为 32 字节，转为 base64 格式
*/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraSM3Tool : NSObject


/// sm3摘要（签名）
/// @param signString 待签名字符串
/// 返回base64字符串
+ (nullable NSString *)sm3SignWithString:(NSString *)signString;

@end

NS_ASSUME_NONNULL_END
