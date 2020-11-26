//
//  YZScreen.h
//  CDM
//
//  Created by jonzhang on 2019/11/6.
//  Copyright © 2019 Alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//  是否是竖屏
#define IS_LANDSCAPE (UIInterfaceOrientationIsLandscape([[UIApplication sharedApplication] statusBarOrientation]))

// 屏幕宽高
#define SCREEN_WIDTH (IS_LANDSCAPE ? [[UIScreen mainScreen ] bounds].size.height : [[UIScreen mainScreen ] bounds].size.width)
#define SCREEN_HEIGHT (IS_LANDSCAPE ? [[UIScreen mainScreen ] bounds].size.width : [[UIScreen mainScreen ] bounds].size.height)

#define  kScreenWith SCREEN_WIDTH
#define  kScreenHeight SCREEN_HEIGHT


// 全面屏的几个机型, 判断标准,宽,高,屏幕分辩率
#define IS_IPHONE_X (SCREEN_WIDTH == [YZScreen sizeFor58Inch].width && SCREEN_HEIGHT == [YZScreen sizeFor58Inch].height)
#define IS_IPHONE_XR (SCREEN_WIDTH == [YZScreen sizeFor61Inch].width && SCREEN_HEIGHT == [YZScreen sizeFor61Inch].height && [UIScreen mainScreen].scale == 2)
#define IS_IPHONE_XMAX (SCREEN_WIDTH == [YZScreen sizeFor65Inch].width && SCREEN_HEIGHT == [YZScreen sizeFor65Inch].height && [UIScreen mainScreen].scale == 3)

#define IS_IPHONE_12Min (SCREEN_WIDTH == [YZScreen sizeFor12MinInch].width && SCREEN_HEIGHT == [YZScreen sizeFor12MinInch].height && [UIScreen mainScreen].scale == 3)
#define IS_IPHONE_1212Pro (SCREEN_WIDTH == [YZScreen sizeFor1212proInch].width && SCREEN_HEIGHT == [YZScreen sizeFor1212proInch].height && [UIScreen mainScreen].scale == 3)
#define IS_IPHONE_12ProMax (SCREEN_WIDTH == [YZScreen sizeFor12proMaxInch].width && SCREEN_HEIGHT == [YZScreen sizeFor12proMaxInch].height && [UIScreen mainScreen].scale == 3)

// 状态栏被隐藏时,高度为0
# define IS_IPHONEXMore (([[UIApplication sharedApplication] statusBarFrame].size.height > 20)? YES : NO)

// 全面屏
#define IS_IPHONE_X_XR_MAX (IS_IPHONEXMore || IS_IPHONE_X || IS_IPHONE_XR || IS_IPHONE_XMAX ||IS_IPHONE_12Min|| IS_IPHONE_1212Pro|| IS_IPHONE_12ProMax )


// 导航栏 和标签栏,适配
#define STATUSBARHEIGHT (IS_IPHONE_X_XR_MAX ? 44 : 20)
#define KTabbarHeight (IS_IPHONE_X_XR_MAX ? 83.f : 49.f)
#define KNavbarHeight (IS_IPHONE_X_XR_MAX ? 88.f : 64)

#define KStatusBarHeight (IS_IPHONE_X_XR_MAX ? 44 : 20)
#define KMagrinBottom (IS_IPHONE_X_XR_MAX ? 34 : 0)

#define KadjustX (IS_IPHONE_X_XR_MAX ? 24 : 0)
//
#define UI(x) UIAdapter(x)
#define UIRect(x,y,width,height) UIRectAdapter(x,y,width,height)

// kwindow
#define kwindow [UIApplication sharedApplication].keyWindow


static inline NSInteger UIAdapter (float x){
    //1 - 分机型 特定的比例
    
    //2 - 屏幕宽度按比例适配
    CGFloat scale = 375 / SCREEN_WIDTH;
    return (NSInteger)x /scale;
}

static inline CGRect UIRectAdapter(x,y,width,height){
    return CGRectMake(UIAdapter(x), UIAdapter(y), UIAdapter(width), UIAdapter(height));
}


@interface YZScreen : NSObject





// iphone 12pr0Max
+ (CGSize)sizeFor12proMaxInch;


// iphone 1212pr0
+ (CGSize)sizeFor1212proInch;


// iphone 12 mini
+ (CGSize)sizeFor12MinInch;


//iphone xs max
+ (CGSize)sizeFor65Inch;

//iphone xr
+ (CGSize)sizeFor61Inch;

// iphonex
+ (CGSize)sizeFor58Inch;



@end

NS_ASSUME_NONNULL_END
