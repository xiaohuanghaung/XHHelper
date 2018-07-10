//
//  UIColor+XHColor.h
//  XHEasy
//
//  Created by 小黄黄 on 2015/5/13.
//  Copyright © 2015年 XiaoHuangHuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (XHColor)

#pragma mark ==================  十六进制颜色转换 ==================

/**
 十六进制颜色转换

 @param hex 十六进制颜色值
 @return 十六进制颜色对应的UIColor值
 */
+(UIColor *)xh_colorWithHex:(NSString *)hex;

@end
