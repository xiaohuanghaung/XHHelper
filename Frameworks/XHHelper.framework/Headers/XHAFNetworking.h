//
//  XHAFNetworking.h
//  XHHelper
//
//  Created by 小黄黄 on 2018/5/10.
//  Copyright © 2018年 XiaoHuangHuang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define XHGet  @"GET"
#define XHPost @"POST"

@interface XHResponseModel : NSObject

// AFN请求状态（是否成功）
@property (nonatomic, assign) BOOL state;

// AFN请求下来的数据
@property (nonatomic, strong) NSDictionary *dataDict;

// AFN请求失败错误信息
@property (nonatomic, copy) NSString *message;

// AFN请求失败时，返回的Error信息（用于调试）
@property (nonatomic, strong) NSError *error;

@end

@interface XHAFNetworking : NSObject

+ (instancetype)defaultManager;

// 超时时间
@property (nonatomic, assign) CGFloat timeoutInterval;

/*
 网络检测 - 只需在AppDelegate中监测一次即可
 
 1  没有检测到网络
 2  不知道监测的是什么
 3  蜂窝网
 4  WIFI
 5  不知道是什么鬼
 */
@property (nonatomic, strong) void(^reachabilityBlock)(NSInteger status);

#pragma mark - 通用网络请求
/*
 通用网络请求
 
 method：请求方式（POST、GET）
 host：根域名
 api：接口名称
 parameters：请求参数（必须NSDictionary）
 callBack：请求回调
 */
- (void)xh_requestDataWithMethod:(NSString *)method
                         host:(NSString *)host
                          api:(NSString *)api
                   parameters:(NSDictionary *)parameters
                     callBack:(void (^)(XHResponseModel *response))callBack;

@end
