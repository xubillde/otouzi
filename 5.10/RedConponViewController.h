//
//  RedConponViewController.h
//  555
//
//  Created by otouzi on 16/4/13.
//  Copyright © 2016年 李浩宇. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RFSegmentView.h"
#import "ExprienceView.h"
#import "CashCouponView.h"
#import "IncreaseCouponView.h"
#import "ExchangeConponController.h"
#import "MBProgressHUD.h"
@interface RedConponViewController : UIViewController<RFSegmentViewDelegate,ChangeIndexDelegate,MBProgressHUDDelegate>{
    
    
    
}
@property (nonatomic, strong) ExprienceView *exprienceView; //体验券
@property (nonatomic, strong) CashCouponView *cashCouponView; //现金
@property (nonatomic, strong) IncreaseCouponView *increaseCouponView; //加息
@property (nonatomic, strong)NSMutableArray *data;
@property (nonatomic, strong)NSMutableArray *cashData;
@property (nonatomic, strong)NSMutableArray *increaseData;

@end