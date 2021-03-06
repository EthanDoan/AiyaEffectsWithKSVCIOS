//
//  AiyaGPUImageSmoothSkinFilter.h
//  KSYFaceunityKitDemo
//
//  Created by 汪洋 on 2017/6/16.
//  Copyright © 2017年 孙健. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GPUImage/GPUImage.h>
#import <AiyaCameraSDK/AiyaCameraSDK.h>

@interface KSYAiyaGPUImageSmoothSkinFilter : GPUImageFilter

@property (nonatomic, assign) CGFloat intensity;

@property (nonatomic, assign) AIYA_SMOOTH_SKIN_TYPE type;

- (id)initWithAiyaCameraEffect:(AiyaCameraEffect *)cameraEffect;

@end
