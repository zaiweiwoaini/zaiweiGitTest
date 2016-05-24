//
//  ZWImagePickerNav.h
//  CamereImagePickerTest
//
//  Created by maple on 16/4/18.
//  Copyright © 2016年 maple. All rights reserved.
//



/******************************/
/*
 1、请引入: AssetsLibrary.framework.
 
 2、请模态Present使用.
 
 3、handle中返回值 使用方法:
 ALAssetMode *mode = senderArr.firstObject;
 UIImage *image = [UIImage imageWithCGImage:mode.result.defaultRepresentation.fullScreenImage];
 
 */
/******************************/

#import <UIKit/UIKit.h>
#import "ZWImagePickerViewController.h"
typedef void(^ZWImagePickerSendHandle)(NSArray *senderArr);


@protocol ZWImagePickerNavDelegate

@optional
-(void)finshSelectWithImageArr:(NSArray<__kindof UIImage *> *)imageArr;

@end


@interface PAHCImagePickerNavigationController : UINavigationController
@property (nonatomic, copy) ZWImagePickerSendHandle handle;
@property (nonatomic, weak) id <ZWImagePickerNavDelegate>imagePickerDelegate;


///handle返回为ALAssetMode 数组
-(id)initWithHandle:(void(^)(NSArray<__kindof UIImage *>*senderArr))handle;
- (instancetype)init;

+(id)zWImagePickerNavWithHandle:(void(^)(NSArray<__kindof UIImage *>*senderArr))handle;
@end
