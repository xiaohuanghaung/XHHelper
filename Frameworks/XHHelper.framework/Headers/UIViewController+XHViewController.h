//
//  UIViewController+XHViewController.h
//  XHTestFramework
//
//  Created by 小黄黄 on 2015/5/18.
//  Copyright © 2015年 XiaoHuangHuang. All rights reserved.
//

/*
 小黄引导：
 
 一、Navigation的一些常用设置
 二、状态栏的设置
 三、Push控制器和Pop控制器
 四、指示器
 */

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#define XHSuccessImageName  @"XH_HUD_Success"
#define XHFailImageName     @"XH_HUD_Error"

@interface UIViewController (XHViewController)

#pragma mark - 1.设置title标题
- (void)setXHNavBarTitle:(NSString *)title;

#pragma mark - 2.设置NavBar的颜色 和 标题title文字颜色
- (void)setXHNavBarTintColor:(UIColor *)tintColor titleColor:(UIColor *)titleColor;

#pragma mark - 3.设置BackgroundImage
- (void)setXHNavBarBackgroundImage:(UIImage *)image;

#pragma mark - 4.设置系统返回按钮的显示和隐藏
- (void)setXHNavBackBtnHidden:(BOOL)hidden;

#pragma mark - 5.设置左按钮
- (void)setXHNavLeftBarButtonItemWithFrame:(CGRect)frame title:(NSString *)title titleColor:(UIColor *)titleColor image:(NSString *)image highImage:(NSString *)highImage action:(SEL)action target:(id)target;

#pragma mark - 6.设置右按钮
- (void)setXHNavRigthBarButtonItemWithFrame:(CGRect)frame title:(NSString *)title titleColor:(UIColor *)titleColor image:(NSString *)image highImage:(NSString *)highImage action:(SEL)action target:(id)target;

#pragma mark - 7.设置NavBar的显示和隐藏
- (void)setXHNavBarHidden:(BOOL)hidden;

#pragma mark - 8.设置NavBar下面的线的显示和隐藏
- (void)setXHNavShadowImageHidden:(BOOL)hidden;

#pragma mark - 9.自定义NavBar
- (void)setXHNavBarWithCustomView:(UIView *)customView;

#pragma mark - 10.设置NavBar下面线条的背景图
- (void)setXHNavShadowImage:(NSInteger)type;


/*
 1.设置状态栏的隐藏和显示
 2.设置状态栏的风格(白色 黑色)
 */
#pragma mark - 设置状态栏的隐藏和显示
- (void)setXHNavStatusBarHidden:(BOOL)hidden;

#pragma mark - 设置状态栏的风格(白色 黑色)
- (void)setXHNavStatusBarStyle:(UIStatusBarStyle)style animated:(BOOL)animated;


/*
 1.推出控制器
 2.返回控制器
 3.返回多个控制器
 */
#pragma mark - 推出控制器
- (void)pushViewController:(UIViewController *)controller;

#pragma mark - 返回控制器
- (void)popViewControllerAnimation:(BOOL)animation;

#pragma mark - 返回多个控制器
- (void)popViewControllerWithLevel:(NSInteger)level animation:(BOOL)animation;


/*
 指示器
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
