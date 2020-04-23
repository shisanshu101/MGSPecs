//
//  GlobalNotificationConstant.h
//  NongWang365
//
//  Created by 一只狗 on 2019/10/24.
//  Copyright © 2019 nw. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GlobalNotificationConstant : NSObject


/// 登录成功通知
extern NSString *const NWLoginSuccessNotify;
/// 微信登录成功通知
extern NSString *const NWWeChatLoginSuccessNotify;
/// 退出登录成功通知
extern NSString *const NWAppLogoutSuccessNotify;
/// 切换卖和买家通知
extern NSString *const NWSwitchBuyerAndSellerNotify;
/// 定位成功后的刷新（用于产品地域的保护）
extern NSString *const NWLocationSuccessNotify;
/// 发布或编辑商品成功
extern NSString *const NWPublishGoodsSuccessNotify;
/// 刷新我的页面数据
extern NSString *const NWRefreshMineNotify;
/// 刷新账户管理页面数据
extern NSString *const NWRefreshAccountManagerNotify;
/// 刷新店铺订单数据
extern NSString *const NWRefreshSellerOrderNotify;
/// 刷新采购订单数据
extern NSString *const NWRefreshBuyerOrderNotify;
/// 刷新店铺订单详情数据
extern NSString *const NWRefreshOrderDetailNotify;
/// 刷新买家售后数据
extern NSString *const NWRefreshBuyerAfterSalesNotify;
/// 刷新卖家售后数据
extern NSString *const NWRefreshSellerAfterSalesNotify;

/// 店铺申请成功通知
extern NSString *const NWMarketApplySuccessNotify;
/// 刷新店铺编辑的数据
extern NSString *const RefreshMarketStoreEditNotify;

/// 刷新采购订单数据---申请发票成功（只刷新已完成页面）
extern NSString *const NWRefreshBuyerOrder_ApplyInvoiceSuccess_Notify;

@end

NS_ASSUME_NONNULL_END
