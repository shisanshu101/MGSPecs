//
//  GlobalThirdConfiguration.h
//  YuLin
//
//  Created by 梁羽 on 2017/4/26.
//  Copyright © 2017年 zhishi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GlobalThirdConfiguration : NSObject


extern NSString * const LiveShareCover; /** 分享缩略图 */

extern NSString * const ShareSDK_Key; //appid appkey 已换

//新浪
extern NSString * const SinaSDK_AppId;
extern NSString * const SinaSDK_Secret;

//qq分享
extern NSString * const QQApplication;
extern NSString * const QQSDK_AppId;
extern NSString * const QQSDK_Secret;

//微信分享
extern NSString * const WXApplication;
extern NSString * const JdApplication;
extern NSString * const WeiXinSDK_AppId;
extern NSString * const WeiXinSDK_Secret;

//钉钉
extern NSString *const DingTalkSDK_AppId;
extern NSString *const DingTalkSDK_Secret;

//app分享出去的回调地址
extern NSString * const SDKredirectUri;
extern NSString * const SDKredirectUri1;

//微信支付,不需要可以不配置
extern NSString * const WxGetTokenUrl;
extern NSString * const WXPartnerId;
extern NSString * const PartnerKey;
extern NSString * const PaySignKey;
extern NSString * const WxNotifyUrl;



@end
