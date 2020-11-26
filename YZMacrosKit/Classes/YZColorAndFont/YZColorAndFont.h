//
//  YZColorAndFont.h
//  CDM
//
//  Created by jonzhang on 2019/11/7.
//  Copyright © 2019 Alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 颜色
#define YZColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#define YZColorAlpha(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define YZColorHex(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define YZColorHexAlpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]
// 随机色
#define YZRandomColor YZColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))

#define YZHex(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define YZHexAlpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

// 跳转button 的颜色

#define  TMBtnColor YZColor(0,197,188)
#define  TMBtnDisableColor YZColor(222,222,222)


//字体
#define YZFont(f) [UIFont systemFontOfSize:f] 
// 根据屏幕大小适配字体
#define  YZFontAdapter(f)  YZFont(Adapter(f))


// 常用颜色
// 主题色
#define YZThemeColor  YZColor(0, 197, 188)

#define YZColor109108112     YZColor(109, 108, 112)
#define YZColor393844 YZColor(39, 38, 44)
#define YZColor158ss YZColor(158, 158, 158)


static inline NSInteger Adapter (float x){
    
    // 根据 屏幕宽度按比例适配
    CGFloat scale = 414 / [[UIScreen mainScreen ] bounds].size.width;
    return (NSInteger)x /scale;
}



@interface YZColorAndFont : NSObject

@end

NS_ASSUME_NONNULL_END
