//
//  XHRuntimeKit.h
//  XHEasy
//
//  Created by 小黄黄 on 2015/5/13.
//  Copyright © 2015年 XiaoHuangHuang. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface XHRuntimeKit : NSObject

// 获取类名
+ (NSString *)xh_fetchClassName:(Class)class;

// 获取成员变量
+ (NSArray *)xh_fetchIvarList:(Class)class;

// 获取类的属性列表（私有和公有属性和延展中的属性）
+ (NSArray *)xh_fetchPropertyList:(Class)class;

// 获取类的实例方法列表（getter、setter、对象方法）
+ (NSArray *)xh_fetchInstanceMethodList:(Class)class;

// 获取协议列表
+ (NSArray *)xh_fetchProtocolList:(Class)class;

// 向类上添加新的方法以及实现
+ (void)xh_addMethod:(Class)class method:(SEL)method methodIMP:(SEL)methodIMP;

// 方法交换
+ (void)xh_methodExchangeWithClass:(Class)class method1:(SEL)method1 method2:(SEL)method2;

@end
