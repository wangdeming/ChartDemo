//
//  JHPieForeBGView.h
//  JHCALayer
//
//  Created by SDC201 on 2016/4/28.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^selectBlock)(CGFloat angle,CGPoint p);
@interface JHPieForeBGView : UIView


@property (copy, nonatomic) selectBlock select;


@end
