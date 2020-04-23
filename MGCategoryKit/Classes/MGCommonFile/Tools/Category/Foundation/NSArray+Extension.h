//
//  NSArray+Extension.h
//  农网365商家
//
//  Created by 初光夫 on 2019/6/19.
//  Copyright © 2019 Shanxi Etwod Network Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Extension)

/**
 Returns the object located at index, or return nil when out of bounds.
 It's similar to `objectAtIndex:`, but it never throw exception.
 
 @param index The object located at index.
 */
- (id)objectOrNilAtIndex:(NSUInteger)index;

/**
 判断数组是否为空
 */
+ (BOOL)isNotEmptyArray:(id)objc;

@end

NS_ASSUME_NONNULL_END
