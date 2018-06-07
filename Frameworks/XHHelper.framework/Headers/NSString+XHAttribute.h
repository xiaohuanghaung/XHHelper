//
//  NSString+XHAttribute.h
//  XHEasy
//
//  Created by 黄成瑞 on 2015/8/3.
//  Copyright © 2018年 XiaoHuangHuang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface NSString (XHAttribute)

// 计算字符串的高度
+ (float)heightForStr:(NSString *)str font:(UIFont *)font width:(float)width;

// 获取字符串的宽度
+ (CGFloat)widthForStr:(NSString *)str fontWidth:(CGFloat)fontWidth;

@end
