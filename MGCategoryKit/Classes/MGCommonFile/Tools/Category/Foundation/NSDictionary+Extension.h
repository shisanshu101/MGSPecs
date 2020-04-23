//
//  NSDictionary+Extension.h
//  农网365商家
//
//  Created by 初光夫 on 2019/6/19.
//  Copyright © 2019 Shanxi Etwod Network Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (Extension)

/**
 Returns a BOOL value tells if the dictionary has an object for key.
 
 @param key The key.
 */
- (BOOL)containsObjectForKey:(id)key;

/**
 判断字典是否为空
 */
+ (BOOL)isNotEmptyDictionary:(id)objc;

@end

NS_ASSUME_NONNULL_END
