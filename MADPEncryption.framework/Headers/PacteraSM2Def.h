//
//  PacteraSM2Def.h
//  SMtest
//
//  Created by BruceHu on 2019/11/26.
//  Copyright © 2019 BruceHu. All rights reserved.
//
/**
* Sm2 加密后密文为 ASN1 编码，此处编解码所用结构体
*/

#ifndef PacteraSM2Def_h
#define PacteraSM2Def_h

#import <openssl/asn1t.h>

// 定义 ASN1 编解码存储数据的结构体
typedef struct SM2_Ciphertext_st_1 SM2_Ciphertext_1;
DECLARE_ASN1_FUNCTIONS(SM2_Ciphertext_1)

struct SM2_Ciphertext_st_1 {
    BIGNUM *C1x;
    BIGNUM *C1y;
    ASN1_OCTET_STRING *C3;
    ASN1_OCTET_STRING *C2;
};

ASN1_SEQUENCE(SM2_Ciphertext_1) = {
    ASN1_SIMPLE(SM2_Ciphertext_1, C1x, BIGNUM),
    ASN1_SIMPLE(SM2_Ciphertext_1, C1y, BIGNUM),
    ASN1_SIMPLE(SM2_Ciphertext_1, C3, ASN1_OCTET_STRING),
    ASN1_SIMPLE(SM2_Ciphertext_1, C2, ASN1_OCTET_STRING),
} ASN1_SEQUENCE_END(SM2_Ciphertext_1)

IMPLEMENT_ASN1_FUNCTIONS(SM2_Ciphertext_1)

#endif /* PacteraSM2Def_h */
