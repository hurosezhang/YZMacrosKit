#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Config.h"
#import "YZColorAndFont.h"
#import "YZScreen.h"

FOUNDATION_EXPORT double YZMacrosKitVersionNumber;
FOUNDATION_EXPORT const unsigned char YZMacrosKitVersionString[];

