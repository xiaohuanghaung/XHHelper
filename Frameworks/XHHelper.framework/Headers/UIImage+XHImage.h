//
//  UIImage+XHImage.h
//  XHEasy
//
//  Created by 黄成瑞 on 2015/8/3.
//  Copyright © 2018年 XiaoHuangHuang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface UIImage (XHImage)

/*
 压: 指文件体积变小，但是像素数不变，长宽尺寸不变，那么质量可能下降。
 缩: 指文件的尺寸变小，也就是像素数减少，而长宽尺寸变小，文件体积同样会减小。
 
 */

// 压缩图片质量(图片体积减小,像素不变)---减小图片、百分比
+ (UIImage *)xh_reduceImage:(UIImage *)image percent:(float)percent;

// 图片压缩到指定尺寸
+ (UIImage *)xh_scaleImage:(UIImage *)image withNewSize:(CGSize)newSize;

// 压缩到指定尺寸
+ (UIImage *)xh_imageCompressForSize:(UIImage *)sourceImage targetSize:(CGSize)size;

// 等比例压缩
+ (UIImage *)xh_imageCompressForWidth:(UIImage *)sourceImage targetWidth:(CGFloat)defineWidth;

// UIImage转换JPG(写入路径保存到沙盒)
+ (void)xh_imageChangeJpgWithImage:(UIImage *)image path:(NSString *)path;

// UIImage转换PNG(写入路径保存到沙盒)
+ (void)xh_imageChangePngWithImage:(UIImage *)image path:(NSString *)path;

// 修理图片方向
+ (UIImage *)xh_fixOrientation:(UIImage *)aImage;

// 创建带颜色的图片（通过颜色）
+ (UIImage *)xh_createImageWithColor:(UIColor *)color;

// 调整图片(通过图片的名称)－－－图片拉伸
+ (UIImage *)xh_resizebleImageWithName:(NSString *)imageName;

// 指定图片中的哪一个部分不被拉伸（iOS5.0之前的端盖）注意使用这个方法只会拉伸图片中间1x1的区域，并不会影响到边缘和角落
+ (UIImage *)xh_stretchImageWithImage:(UIImage *)image leftCapWidth:(NSInteger)leftCapWidth topCapHeight:(NSInteger)topCapHeight;

// 图片比例裁剪 目标大小
- (UIImage*)xh_imageByScalingAndCroppingForSize:(CGSize)targetSize;

// 将某个视图保存为图片
+ (UIImage *)xh_imageFromView: (UIView *)theView;

// 生成二维码
+ (UIImage *)xh_generateQRCodeWithUrl:(NSString *)url;

// 根据视频URL获取第一贞图片
+ (UIImage*)xh_thumbnailImageForVideo:(NSURL *)videoURL atTime:(NSTimeInterval)time;

@end
