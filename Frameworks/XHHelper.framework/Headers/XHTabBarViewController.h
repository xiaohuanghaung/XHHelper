//
//  XHTabBarViewController.h
//  XHTest
//
//  Created by 黄成瑞 on 2018/7/19.
//  Copyright © 2018年 XiaoHuangHuang. All rights reserved.
//

/*
 特别提醒：使用时一定要先初始化完成并设置完RootVC后，再设置其属性值
 */


/*
 使用Demo:
 
 1. 初始化子控制器
 UIViewController *vc1 = [UIViewController new];
 vc1.view.backgroundColor = [UIColor yellowColor];
 UIViewController *vc2 = [UIViewController new];
 vc2.view.backgroundColor = [UIColor orangeColor];
 UIViewController *vc3 = [UIViewController new];
 vc3.view.backgroundColor = [UIColor blueColor];
 
 2. 初始化TabBarViewController 并 设置为rootViewControler
 XHTabBarViewController *tabBarVC = [XHTabBarViewController new];
 [NSObject xh_getCurrentWindow].rootViewController = tabBarVC;
 
 3. 添加子控制器数组、设置是否使用自定义TabBar还是系统TabBar、添加事件回调Block、设置图片文字等、当前选中的Index
 tabBarVC.viewControllerSArray = @[vc1, vc2, vc3];
 tabBarVC.isUseCustom = YES;
 [tabBarVC setCmdBlock:^(NSInteger selectFrom, NSInteger selectTo) {
 
 }];
 [tabBarVC xhTabBarButtonTitleArray:@[@"我1", @"我2", @"我3", @"我4", @"我5", @"我6"] imageArray:@[@"TabBar1", @"TabBar2", @"TabBar3", @"TabBar3", @"TabBar3", @"TabBar3"] selectImageArray:@[@"TabBarSel1", @"TabBarSel2", @"TabBarSel3", @"TabBarSel3", @"TabBarSel3", @"TabBarSel3"] Font:[UIFont fontWithName:XH_Font_PingFangSCLight size:15] titleColor:[UIColor blackColor] selectTitleColor:[UIColor greenColor]];
 tabBarVC.xhTabBarSelectIndex = 0;
 */

#import <UIKit/UIKit.h>

@class XHTabBar;


@interface XHTabBarViewController : UITabBarController

/*
 子控制器数组（传入即可）
 */
@property (nonatomic, strong) NSArray *viewControllerSArray;


#pragma mark - **************  当使用系统TabBar时可使用这些属性来设置  ****************
/*
 TabBar背景色
 */
@property (nonatomic, strong) UIColor *tabBarBackgroundColor;

/*
 TabBar顶部线条的颜色(需要先设置tabBarBackgroundColor属性才能生效)
 */
@property (nonatomic, strong) UIColor *tabBarLineColor;

/*
 TabBar顶部线条的颜色(需要先设置tabBarBackgroundColor属性才能生效)
 */
@property (nonatomic, assign) CGFloat tabBarLineHeight;


#pragma mark - **************  当使用自定义TabBar时可使用这些属性来设置  ****************
/*
 是否使用自定义的TabBar
 */
@property (nonatomic, assign) BOOL isUseCustom;

/*
 自定义的TabBar
 */
@property (nonatomic, strong) XHTabBar *xhTabBar;

/*
 TabBar按钮选择回调事件
 */
@property (nonatomic, strong) void (^cmdBlock)(NSInteger selectFrom, NSInteger selectTo);

/*
 TabBar当前选中的index
 */
@property (nonatomic, assign) NSInteger xhTabBarSelectIndex;

/*
 标题、图片、选中图片（数组）、TabBarButton中字体的设置
 */
- (void)xhTabBarButtonTitleArray:(NSArray *)titleArray
                      imageArray:(NSArray *)imageArray
                selectImageArray:(NSArray *)selectImageArray
                            Font:(UIFont *)font
                      titleColor:(UIColor *)titleColor
                selectTitleColor:(UIColor *)selectTitleColor;


@end
