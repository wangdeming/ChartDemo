//
//  JHShowInfoView.h
//  JHChartDemo
//
//  Created by SDC201 on 2016/4/28.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JHShowInfoView : UIView



@property (copy, nonatomic) NSString * showContentString;


- (void)updateFrameTo:(CGRect)frame andBGColor:(UIColor *)bgColor andShowContentString:(NSString *)contentString;

@end
