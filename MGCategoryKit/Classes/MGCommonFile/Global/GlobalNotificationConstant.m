//
//  GlobalNotificationConstant.m
//  NongWang365
//
//  Created by 一只狗 on 2019/10/24.
//  Copyright © 2019 nw. All rights reserved.
//

#import "GlobalNotificationConstant.h"

@implementation GlobalNotificationConstant

/// 登录成功通知
NSString *const NWLoginSuccessNotify = @"NWLoginSuccessNotify";
/// 微信登录成功通知
NSString *const NWWeChatLoginSuccessNotify = @"NWWeChatLoginSuccessNotify";
/// 退出登录成功通知
NSString *const NWAppLogoutSuccessNotify = @"NWAppLogoutSuccessNotify";
/// 切换卖家和买家通知
NSString *const NWSwitchBuyerAndSellerNotify = @"NWSwitchBuyerAndSellerNoty";
/// 定位成功后的刷新（用于产品地域的保护）
NSString *const NWLocationSuccessNotify = @"NWLocationSuccessNotify";
/// 发布或编辑商品成功
NSString *const NWPublishGoodsSuccessNotify = @"NWPublishGoodsSuccessNotify";
/// 刷新我的页面数据
NSString *const NWRefreshMineNotify = @"NWRefreshMineNotify";
/// 刷新账户管理页面数据
NSString *const NWRefreshAccountManagerNotify = @"NWRefreshAccountManagerNotify";
/// 刷新店铺订单数据
NSString *const NWRefreshSellerOrderNotify = @"NWRefreshSellerOrderNotify";
/// 刷新采购订单数据
NSString *const NWRefreshBuyerOrderNotify = @"NWRefreshBuyerOrderNotify";
/// 刷新店铺订单详情数据
NSString *const NWRefreshOrderDetailNotify = @"NWRefreshOrderDetailNotify";
/// 刷新买家售后数据
NSString *const NWRefreshBuyerAfterSalesNotify = @"NWRefreshBuyerAfterSalesNotify";
/// 刷新卖家售后数据
NSString *const NWRefreshSellerAfterSalesNotify = @"NWRefreshSellerAfterSalesNotify";

/// 店铺申请成功通知
NSString *const NWMarketApplySuccessNotify = @"NWMarketApplySuccessNotify";
/// 刷新店铺编辑的数据
NSString *const RefreshMarketStoreEditNotify = @"RefreshMarketStoreEditNotify";

/// 刷新采购订单数据---申请发票成功（只刷新已完成页面）
NSString *const NWRefreshBuyerOrder_ApplyInvoiceSuccess_Notify= @"NWRefreshBuyerOrder_ApplyInvoiceSuccess_Notify";


@end
