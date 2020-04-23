//
//  NSArray+Extension.m
//  农网365商家
//
//  Created by 初光夫 on 2019/6/19.
//  Copyright © 2019 Shanxi Etwod Network Technology Co.,Ltd. All rights reserved.
//

#import "NSArray+Extension.h"

@implementation NSArray (Extension)

- (id)objectOrNilAtIndex:(NSUInteger)index {
    return index < self.count ? self[index] : nil;
}

+ (BOOL)isNotEmptyArray:(id)objc {
    if (((![objc isKindOfClass:[NSNull class]]) && objc) && [objc isKindOfClass:[self class]] && [objc count]) {
        return YES;
    }
    return NO;
}

@end
