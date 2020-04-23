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

#import "Class.h"
#import "GlobalNotificationConstant.h"
#import "GlobalThirdConfiguration.h"
#import "MacroDefinition.h"
#import "MGCommonConstants.h"
#import "NSArray+Extension.h"
#import "NSDictionary+Extension.h"
#import "NSString+Extension.h"
#import "UIColor+Hex.h"
#import "UIView+Extension.h"

FOUNDATION_EXPORT double MGCategoryKitVersionNumber;
FOUNDATION_EXPORT const unsigned char MGCategoryKitVersionString[];

