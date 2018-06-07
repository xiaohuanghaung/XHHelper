//
//  NSData+XHData.h
//  XHEasy
//
//  Created by 黄成瑞 on 2015/8/3.
//  Copyright © 2018年 XiaoHuangHuang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSData (XHData)

// 通过图片名称获取NSData数据
+ (NSData *)xh_getDataWithImageName:(NSString *)imageName;

@end
