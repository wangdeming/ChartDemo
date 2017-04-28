//
//  JHPieChart.h
//  JHCALayer
//
//  Created by SDC201 on 2016/4/28.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JHChart.h"
@interface JHPieChart : JHChart


@property (nonatomic,strong) NSArray * valueArr;

@property (nonatomic,strong) NSArray * descArr;


@property (nonatomic,strong) NSArray * colorArr;

@property (assign , nonatomic) CGFloat  positionChangeLengthWhenClick ;




@end
