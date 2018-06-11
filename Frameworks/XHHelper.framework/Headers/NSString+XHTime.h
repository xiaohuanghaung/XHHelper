//
//  NSString+XHTime.h
//  XHEasy
//
//  Created by 黄成瑞 on 2015/8/13.
//  Copyright © 2018年 XiaoHuangHuang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (XHTime)

// 获取当前时间
+ (NSString *)xh_getCurrentTime;

// 获取当前时间戳
+ (NSString *)xh_getCurrentTimestamp;

// 时间戳转时间
+ (NSString *)xh_getTimeWithTimestamp:(NSString *)timestamp;

// 时间转时间戳
+ (NSString *)xh_getTimestampWithTime:(NSString *)time;

// 秒转换时间
+ (NSString *)xh_getTimeWithSeconds:(NSString *)seconds;

// 时间转换为刚刚、几分钟前、等等～
+ (NSString *)xh_getStateWithTime:(NSString *)time;

// 秒转换月时分秒
+ (NSString *)xh_getDateWithSecondstime:(NSString *)secondstime;

// 天时分转换秒
+ (NSString *)xh_getSecondsWithDate:(NSString *)date;

// 秒转换天时分
+ (NSString *)xh_getDateWithSeconds:(long long)seconds;

@end
