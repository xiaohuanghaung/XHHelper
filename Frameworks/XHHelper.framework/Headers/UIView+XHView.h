//
//  UIView+XHView.h
//  XHEasy
//
//  Created by 小黄黄 on 2015/5/13.
//  Copyright © 2015年 XiaoHuangHuang. All rights reserved.
//

/*
 小黄引导：
 
 一、快速设置圆角、边框、阴影
 二、指示器
 */

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#define XHSuccessImageName  @"XH_HUD_Success"
#define XHFailImageName     @"XH_HUD_Error"

@interface UIView (XHView)

/*
 视图的一些快速设置
 */
#pragma mark - 设置视图圆角
- (void)xh_layerCornerRadius:(float)cornerRadius;

#pragma mark - 设置边框
- (void)xh_layerBoderWidth:(CGFloat)boderWidth boderColor:(UIColor *)boderColor;

#pragma narj - 设置阴影
- (void)xh_layerShadowColor:(UIColor *)shadowColor alpha:(CGFloat)alpha shadowOffset:(CGSize)shadowOffset shadowOpacity:(CGFloat)shadowOpacity shadowRadius:(CGFloat)shadowRadius;

/*
 MBProgressHUD指示器
 */
#pragma mark - 菊花
- (void)showHUD;

#pragma mark - 菊花+文字
- (void)showHUDWithTitle:(NSString *)title;

#pragma mark - 菊花+文字＋副标题
- (void)showHUDWithTitle:(NSString *)title detail:(NSString *)detail;

#pragma mark - 圆圈1
- (id)showHUDYQ1;

#pragma mark - 圆圈1+文字
- (id)showHUDYQ1WithTitle:(NSString *)title;

#pragma mark - 圆圈2
- (id)showHUDYQ2;

#pragma mark - 圆圈2+文字
- (id)showHUDYQ2WithTitle:(NSString *)title;

#pragma mark - 横线
- (void)showHUDHX;

#pragma mark - 横线＋文字
- (void)showHUDHXWithTitle:(NSString *)title;

#pragma mark - 图片成功
- (void)showHUDSuccess;

#pragma mark - 图片成功+文字
- (void)showHUDSuccessWithTitle:(NSString *)title;

#pragma mark - 图片失败
- (void)showHUDError;

#pragma mark - 图片失败+文字
- (void)showHUDErrorWithTitle:(NSString *)title;

#pragma mark - 隐藏HUD
- (void)hiddenHUD;

#pragma mark - 显示自定义HUD
- (MBProgressHUD *)xh_showCustomHUD;

@end
