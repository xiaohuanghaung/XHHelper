//
//  Created by 黄成瑞 on 16/12/28.
//  Copyright © 2016年 XiaoHuangHuang. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (XHH)

#pragma mark - HUD（菊花）
+ (void)showHUD_JH_WithView:(UIView *)view title:(NSString *)title detail:(NSString *)detail;

#pragma mark - HUD（圆圈）
+ (MBProgressHUD *)showHUD_YQ1_WithView:(UIView *)view title:(NSString *)title detail:(NSString *)detatil;

#pragma mark - HUD（圆圈）
+ (MBProgressHUD *)showHUD_YQ2_WithView:(UIView *)view title:(NSString *)title detail:(NSString *)detatil;

#pragma mark - HUD（横线）
+ (void)showHUD_HX_WithView:(UIView *)view title:(NSString *)title detail:(NSString *)detatil;

#pragma mark - HUD（图片）
+ (void)showHUD_IM_WithView:(UIView *)view title:(NSString *)title detail:(NSString *)detatil se:(BOOL)se;

#pragma mark - 隐藏HUD
+ (void)hiddenHUDForView:(UIView *)view;


@end
