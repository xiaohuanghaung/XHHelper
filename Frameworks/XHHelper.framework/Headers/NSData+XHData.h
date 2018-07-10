//
//  NSData+XHData.h
//  XHEasy
//
//  Created by 小黄黄 on 2015/5/13.
//  Copyright © 2015年 XiaoHuangHuang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSData (XHData)

// 通过图片名称获取NSData数据
+ (NSData *)xh_getDataWithImageName:(NSString *)imageName;

@end
