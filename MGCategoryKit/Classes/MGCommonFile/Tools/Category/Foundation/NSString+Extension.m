//
//  NSString+Extension.m
//  MGPackageProject
//
//  Created by 一只狗 on 2020/4/20.
//  Copyright © 2020 nw. All rights reserved.
//

#import "NSString+Extension.h"

@implementation NSString (Extension)


+(BOOL)isNotEmptyString:(id)objc {
    if (((![objc isKindOfClass:[NSNull class]]) && objc) && [objc isKindOfClass:[self class]] && [((NSString*)objc) length]) {
        return YES;
    }
    return NO;
}

@end
