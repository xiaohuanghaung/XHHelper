//
//  NSString+XHRegular.h
//  XHEasy
//
//  Created by 黄成瑞 on 2015/8/3.
//  Copyright © 2018年 XiaoHuangHuang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (XHRegular)

// 手机号
- (BOOL)xh_matchingPhoneNumber;

// 数字
- (BOOL)xh_matchingNumber;

// 身份证(简单匹配)
- (BOOL)xh_matchingIDCard;

// 邮箱
- (BOOL)xh_matchingEmail;

// 网址
- (BOOL)xh_matchingUrl;

// 邮政编码
- (BOOL)xh_matchingPostalcode;

// 是否有特殊符号
- (BOOL)xh_matchingSpecificSymbol;

// 匹配中文字符
- (BOOL)xh_matchingChineseCharacter;

// 匹配字母开头，5-16字节，允许字母数字下划线
- (BOOL)xh_matchingLegal;

@end
