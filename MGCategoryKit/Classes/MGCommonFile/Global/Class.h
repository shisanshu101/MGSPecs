//
//  Class.h
//  农网365商家
//
//  Created by Coder_ZhaiQiang on 2019/5/28.
//  Copyright © 2019 Shanxi Etwod Network Technology Co.,Ltd. All rights reserved.
//

#ifndef Class_h
#define Class_h

#import "UIColor+Hex.h"
#import "UIView+Extension.h"
#ifdef DEBUG

//#define NSLog(...) NSLog(__VA_ARGS__)

#define NSLog(FORMAT, ...) fprintf(stderr, "%s:%d\t%s\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);

#else

#define NSLog(...)

#endif


#endif /* Class_h */




// 日志打印
#ifdef DEBUG

#ifndef DebugLog
#define DebugLog(fmt, ...) NSLog((@"[%s Line %d] \n" fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#else

#ifndef DebugLog
#define DebugLog(fmt, ...)
#endif

#endif
