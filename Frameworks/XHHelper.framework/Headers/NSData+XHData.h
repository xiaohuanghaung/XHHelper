//
//  NSData+XHData.h
//  XHEasy
//
//  Created by 小黄黄 on 2015/5/13.
//  Copyright © 2015年 XiaoHuangHuang. All rights reserved.
//

/*
 小黄引导：
 
 一、本地图片名称 转换 NSData数据
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSData (XHData)

// 通过图片名称获取NSData数据
+ (NSData *)xh_getDataWithImageName:(NSString *)imageName;

@end
