//
//  NSDictionary+Extension.m
//  农网365商家
//
//  Created by 初光夫 on 2019/6/19.
//  Copyright © 2019 Shanxi Etwod Network Technology Co.,Ltd. All rights reserved.
//

#import "NSDictionary+Extension.h"

@implementation NSDictionary (Extension)

- (BOOL)containsObjectForKey:(id)key {
    if (!key) return NO;
    return self[key] != nil;
}

+ (BOOL)isNotEmptyDictionary:(id)objc {
    if (((![objc isKindOfClass:[NSNull class]]) && objc) && [objc isKindOfClass:[self class]] && [[objc allKeys] count]) {
        return YES;
    }
    return NO;
}

@end
