//
//  LXBaseNetworking.h
//  LXTeacher
//
//  Created by apple on 11/3/15.
//  Copyright © 2015 mawei. All rights reserved.
//

#import <Foundation/Foundation.h>

// 数据请求成功后返回
typedef void(^Complete)(BOOL successed, id result);

// 数据请求失败后返回
typedef void(^fail)(NSError *error);


@interface LXTBaseNetworking : NSObject



/**
 初始化参数
 */
+(NSMutableDictionary *)paramsBase;



/**
 判断是否成功
 */
+ (BOOL)isSuccessful:(NSString *)message;



@end
