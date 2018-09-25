//
//  NSString+XHString.h
//  XHTestFramework
//
//  Created by 小黄黄 on 2015/5/13.
//  Copyright © 2015年 XiaoHuangHuang. All rights reserved.
//

/*
 小黄引导：
 
 一、字符串MD5加密
 二、常用正则表达式
 三、时间戳、时间相互转换
 四、获取字符串高度、宽度
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (XHString)

#pragma mark ================== 字符串 MD5加密 ==================

/**
 字符串 MD5加密

 @param string 需加密的字符串
 @return 加密好的字符串
 */
+ (NSString *)xh_md5WithString:(NSString *)string;



#pragma mark ================== 正则表达式 ==================

/**
 判断手机号
 
 @return 是否为手机号
 */
- (BOOL)xh_matchingPhoneNumber;


/**
 判断数字
 
 @return 是否为数字
 */
- (BOOL)xh_matchingNumber;


/**
 判断身份证(简单匹配)
 
 @return 是否为身份证
 */
- (BOOL)xh_matchingIDCard;


/**
 判断邮箱
 
 @return 是否为邮箱
 */
- (BOOL)xh_matchingEmail;


/**
 判断网址
 
 @return 是否为网址
 */
- (BOOL)xh_matchingUrl;


/**
 判断邮政编码
 
 @return 是否为邮政编码
 */
- (BOOL)xh_matchingPostalcode;


/**
 判断特殊符号
 
 @return 是否有特殊符号
 */
- (BOOL)xh_matchingSpecificSymbol;


/**
 判断中文字符
 
 @return 是否为中文字符
 */
- (BOOL)xh_matchingChineseCharacter;


/**
 判断字母开头，5-16字节，允许字母数字下划线
 
 @return 是否为以上格式
 */
- (BOOL)xh_matchingLegal;



#pragma mark ================== 时间戳、时间 ==================
/*
 注意：时间戳是13位的时候是精确到毫秒，10位是精确到秒，以下*1000就是精确到毫秒
 */

/**
 获取当前时间
 
 @return 当前时间字符串
 */
+ (NSString *)xh_getCurrentTime;


/**
 获取当前时间戳
 
 @return 当前时间戳字符串
 */
+ (NSString *)xh_getCurrentTimestamp;


/**
 时间戳转时间
 
 @return 时间字符串
 */
+ (NSString *)xh_getTimeWithTimestamp:(NSString *)timestamp;


/**
 时间转时间戳
 
 @return 时间戳字符串
 */
+ (NSString *)xh_getTimestampWithTime:(NSString *)time;


/**
 秒转换时间
 
 @return 时间字符串
 */
+ (NSString *)xh_getTimeWithSeconds:(NSString *)seconds;


/**
 时间转换为刚刚、几分钟前、等等～
 
 @return 时间文字
 */
+ (NSString *)xh_getStateWithTime:(NSString *)time;


/**
 秒转换月时分秒
 
 @return 时间文字
 */
+ (NSString *)xh_getDateWithSecondstime:(NSString *)secondstime;


/**
 天时分转换秒
 
 @return 时间文字
 */
+ (NSString *)xh_getSecondsWithDate:(NSString *)date;


/**
 秒转换天时分
 
 @return 时间文字
 */
+ (NSString *)xh_getDateWithSeconds:(long long)seconds;



#pragma mark ================== 字符串属性 ==================

/**
 计算字符串的高度
 
 @return 字符串的高度
 */
+ (float)xh_heightForStr:(NSString *)str font:(UIFont *)font width:(float)width;


/**
 获取字符串的宽度
 
 @return 字符串的宽度
 */
+ (CGFloat)xh_widthForStr:(NSString *)str fontWidth:(CGFloat)fontWidth;


@end
