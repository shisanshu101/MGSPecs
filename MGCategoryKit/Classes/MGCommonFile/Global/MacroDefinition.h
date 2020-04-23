//
//  MacroDefinition.h
//  农网365商家
//
//  Created by Coder_ZhaiQiang on 2019/5/28.
//  Copyright © 2019 Shanxi Etwod Network Technology Co.,Ltd. All rights reserved.
//

#ifndef MacroDefinition_h
#define MacroDefinition_h

//获取版本号
#define KVersion [[[NSBundle mainBundle] infoDictionary]objectForKey:@"CFBundleShortVersionString"]

#define ScreenWidth [[UIScreen mainScreen] bounds].size.width
#define ScreenHeight [[UIScreen mainScreen] bounds].size.height

/*************************/
#define IS_IPHONE_X \
({BOOL IS_IPHONE_X = NO;\
if (@available(iOS 11.0, *)) {\
IS_IPHONE_X = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(IS_IPHONE_X);})
#define NaviHeight (IS_IPHONE_X ? 88.0 : 64.0)
//#define kNavgationBarH 44
#define kStatusBarH (IS_IPHONE_X ? 44 : 20 )
#define kTabbarH (IS_IPHONE_X ? 83 : 49 )
#define kTabBarArcHeight (IS_IPHONE_X?34.0:0.0)
typedef void(^MYActionVoid)(void);
typedef void(^MYActionStr)(NSString *str);
typedef void(^MYActionInt)(NSInteger index);
typedef void(^MYActionArgument)(id);
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromRGBF(rgbValue,f) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:f]
/*************************/

#define SetFrom6(x)  ([[UIScreen mainScreen] bounds].size.width / 375.0 * (x))

#define SetFromLandscape6(x) ([[UIScreen mainScreen] bounds].size.width / 667 * (x))
//一些缩写
#define kApplication        [UIApplication sharedApplication]
#define kKeyWindow          [UIApplication sharedApplication].keyWindow
#define userDefaults [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
//获取图片资源
#define GetImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]
// 是否空对象
#define IS_NULL_CLASS(OBJECT) [OBJECT isKindOfClass:[NSNull class]]
//是否是空对象
#define kObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))
//由角度转换弧度
#define kDegreesToRadian(x)      (M_PI * (x) / 180.0)
//由弧度转换角度
#define kRadianToDegrees(radian) (radian * 180.0) / (M_PI)

//获取一段时间间隔
#define kStartTime CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
#define kEndTime   NSLog(@"Time: %f", CFAbsoluteTimeGetCurrent() - start)

//在Main线程上运行
#define DISPATCH_ON_MAIN_THREAD(mainQueueBlock) dispatch_async(dispatch_get_main_queue(), mainQueueBlock);

//弱引用/强引用  可配对引用在外面用MPWeakSelf(self)，block用MPStrongSelf(self)  也可以单独引用在外面用MPWeakSelf(self) block里面用weakself
#define WeakSelf(type)  __weak typeof(type) weak##type = type;
#define StrongSelf(type)  __strong typeof(type) type = weak##type;
//主色调
#define YLMainColor            [UIColor colorWithHexString:@"#4A96FF"]


//农网背景主色调
#define NWBackgroundColor       [UIColor colorWithHexString:@"#F4F6F8"]

//农网文本主色调
#define NWTextGeneralColor       [UIColor colorWithHexString:@"#00C657"]

//农网文本主色调
#define NWBtnGradientUpColor       @"#70EA52"
//农网文本主色调
#define NWBtnGradientDownColor     @"#00C657"

//农网文本主色调
#define NWYellowBtnGradientUpColor       @"#FFD753"
//农网文本主色调
#define NWYellowBtnGradientDownColor     @"#FFB21D"

//农网分割线色调
#define NWSepLineColor   [UIColor colorWithHexString:@"#EAEDEF"]

#define NWListDefaultImg [UIImage imageNamed:@"未加载"]
#define NWHorListDefaultImg [UIImage imageNamed:@"Defalut_Icon_Hor"]
#define NWVerListDefaultImg [UIImage imageNamed:@"Defalut_Icon_Ver"]

#define NWArrowDefaultImg [UIImage imageNamed:@"icon_right_link"]
#define NWUserDefaultImg [UIImage imageNamed:@"头像默认"]
#define NWPinTuanUserDefaultImg [UIImage imageNamed:@"拼团默认头像"]

//辅助色
#define YLAuxiliaryColor       [UIColor colorWithHexString:@"#FE8E18"]
#define YL_3333                [UIColor colorWithHexString:@"#333333"]
#define YL_6666                [UIColor colorWithHexString:@"#666666"]
#define YL_9999                [UIColor colorWithHexString:@"#999999"]
#define YL_BBBB                [UIColor colorWithHexString:@"#BBBBBB"]
#define YLBtnColor             [UIColor colorWithHexString:@"#E4E4E4"]
#define YLLineColor            [UIColor colorWithHexString:@"#EAEDEF"]
#define YLBackGroundColor      [UIColor colorWithHexString:@"#F4F6F8"]
#define YLlayerColor           [UIColor colorWithHexString:@"#000000" alpha:0.4]
//渐变色
#define YLBlue                 [UIColor colorWithHexString:@"#4680FF"]
#define YLBlue1                [UIColor colorWithHexString:@"#55C2FF"]
#define YLYellowColor          [UIColor colorWithHexString:@"#FAD961"]
#define YLYellowColor1         [UIColor colorWithHexString:@"#F76B1C"]
#define YLWhiteColor           [UIColor colorWithHexString:@"#FFFFFF"]

#define YLFONT(X)              [UIFont fontWithName:@"PingFangSC-Regular" size:X]
#define YLMEdFONT(X)           [UIFont fontWithName:@"PingFangSC-Medium" size:X]
#define YLSemFONT(X)           [UIFont fontWithName:@"PingFangSC-Semibold" size:X]


#define IOS8                  [[[UIDevice currentDevice] systemVersion]floatValue]>=8.0
#define IOS9                  [[[UIDevice currentDevice] systemVersion]floatValue]>=9.0
#define NOTIOS9               [[[UIDevice currentDevice] systemVersion]floatValue]<9.0
#define IOS10                 [[[UIDevice currentDevice] systemVersion]floatValue]>=10.0
#define IOS11                 [[[UIDevice currentDevice] systemVersion]floatValue]>=11.0
#define isIOS9  ([[[UIDevice currentDevice] systemVersion] floatValue] < 10.0&&[[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)

//验证码4位
#define codeTextFieldLenght 4


#define NOTNULL(x) ((![x isKindOfClass:[NSNull class]])&&x)
#define SWNOTEmptyArr(X) (NOTNULL(X)&&[X isKindOfClass:[NSArray class]]&&[X count])
#define SWNOTEmptyDictionary(X) (NOTNULL(X)&&[X isKindOfClass:[NSDictionary class]]&&[[X allKeys]count])
#define SWNOTEmptyStr(X) (NOTNULL(X)&&[X isKindOfClass:[NSString class]]&&((NSString *)X).length)
#define SWToStr(X) [Utifity replaceNilStr:X nilStr:@""]

#endif /* MacroDefinition_h */
