//
//  YZSingleton.h
//  CDM
//
//  Created by jonzhang on 2020/1/17.
//  Copyright © 2020 Alibaba. All rights reserved.
//

#ifndef YZSingleton_h
#define YZSingleton_h


// .h文件
#define YZSingletonH(name) + (instancetype)shared##name;


// .m文件
#define YZSingletonM(name) \
static id _instance; \
 \
+ (instancetype)allocWithZone:(struct _NSZone *)zone \
{ \
    static dispatch_once_t onceToken; \
    dispatch_once(&onceToken, ^{ \
        _instance = [super allocWithZone:zone]; \
    }); \
    return _instance; \
} \
 \
+ (instancetype)shared##name \
{ \
    static dispatch_once_t onceToken; \
    dispatch_once(&onceToken, ^{ \
        _instance = [[self alloc] init]; \
    }); \
    return _instance; \
} \
 \
- (id)copyWithZone:(NSZone *)zone \
{ \
    return _instance; \
}




#endif /* YZSingleton_h */
