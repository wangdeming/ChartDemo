# ChartDemo


//第一象限折线图
- (void)showFirstQuardrant{
    JHLineChart *lineChart = [[JHLineChart alloc] initWithFrame:CGRectMake(10, 100, k_MainBoundsWidth-20, 300) andLineChartType:JHChartLineValueNotForEveryX];
    
    /* X轴的刻度值 可以传入NSString或NSNumber类型  并且数据结构随折线图类型变化而变化 详情看文档或其他象限X轴数据源示例*/
    lineChart.xLineDataArr = @[@"0",@"1",@"2",@3,@4,@5,@6,@7];
    
    /* 折线图的不同类型  按照象限划分 不同象限对应不同X轴刻度数据源和不同的值数据源 */
    lineChart.lineChartQuadrantType = JHLineChartQuadrantTypeFirstQuardrant;
    
    /* 数据源 */
    lineChart.valueArr = @[@[@"1",@"2",@"1",@6,@4,@9,@6,@7]];
    
    /* 值折线的折线颜色 默认暗黑色*/
    lineChart.valueLineColorArr =@[ [UIColor purpleColor], [UIColor brownColor]];
    
    /* 值点的颜色 默认橘黄色*/
    lineChart.pointColorArr = @[[UIColor orangeColor],[UIColor yellowColor]];
    
    /* X和Y轴的颜色 默认暗黑色 */
    lineChart.xAndYLineColor = [UIColor greenColor];
    
    /* XY轴的刻度颜色 m */
    lineChart.xAndYNumberColor = [UIColor blueColor];
    
    /* 坐标点的虚线颜色 */
    lineChart.positionLineColorArr = @[[UIColor blueColor],[UIColor greenColor]];
    [self.view addSubview:lineChart];
    [lineChart showAnimation];
}


//第一二象限折线图
- (void)showFirstAndSecondQuardrant{
    JHLineChart *lineChart = [[JHLineChart alloc] initWithFrame:CGRectMake(10, 100, k_MainBoundsWidth-20, 300) andLineChartType:JHChartLineValueNotForEveryX];
    lineChart.xLineDataArr = @[@[@"-3",@"-2",@"-1"],@[@0,@1,@2,@3]];
    lineChart.lineChartQuadrantType = JHLineChartQuadrantTypeFirstAndSecondQuardrant;
    lineChart.valueArr = @[@[@"5",@"2",@"7",@4,@25,@15,@6],@[@"1",@"2",@"1",@6,@4,@9,@7]];
    /* 值折线的折线颜色 默认暗黑色*/
    lineChart.valueLineColorArr =@[ [UIColor purpleColor], [UIColor brownColor]];
    
    /* 值点的颜色 默认橘黄色*/
    lineChart.pointColorArr = @[[UIColor orangeColor],[UIColor yellowColor]];
    
    /* X和Y轴的颜色 默认暗黑色 */
    lineChart.xAndYLineColor = [UIColor greenColor];
    
    /* XY轴的刻度颜色 m */
    lineChart.xAndYNumberColor = [UIColor blueColor];
 
    [self.view addSubview:lineChart];
    
    [lineChart showAnimation];
    
    /* 清除折线图内容 */
//    [lineChart clear];
}

//第一四象限折线图
- (void)showFirstAndFouthQuardrant{
    JHLineChart *lineChart = [[JHLineChart alloc] initWithFrame:CGRectMake(10, 100, k_MainBoundsWidth-20, 300) andLineChartType:JHChartLineValueNotForEveryX];
    lineChart.xLineDataArr = @[@"0",@"1",@"2",@3,@4,@5,@6,@7];
    lineChart.lineChartQuadrantType = JHLineChartQuadrantTypeFirstAndFouthQuardrant;
    lineChart.valueArr = @[@[@"5",@"-22",@"7",@(-4),@25,@15,@6,@9],@[@"1",@"-12",@"1",@6,@4,@(-8),@6,@7]];
    /* 值折线的折线颜色 默认暗黑色*/
    lineChart.valueLineColorArr =@[ [UIColor purpleColor], [UIColor brownColor]];
    
    /* 值点的颜色 默认橘黄色*/
    lineChart.pointColorArr = @[[UIColor orangeColor],[UIColor yellowColor]];
    
    /* X和Y轴的颜色 默认暗黑色 */
    lineChart.xAndYLineColor = [UIColor greenColor];
    
    /* XY轴的刻度颜色 m */
    lineChart.xAndYNumberColor = [UIColor blueColor];

    [self.view addSubview:lineChart];
    [lineChart showAnimation];
}

//四个象限折线图
- (void)showAllQuardrant{
    
    JHLineChart *lineChart = [[JHLineChart alloc] initWithFrame:CGRectMake(10, 100, k_MainBoundsWidth-20, 300) andLineChartType:JHChartLineValueNotForEveryX];
    
    lineChart.xLineDataArr = @[@[@"-3",@"-2",@"-1"],@[@0,@1,@2,@3]];
    lineChart.lineChartQuadrantType = JHLineChartQuadrantTypeAllQuardrant;
      lineChart.valueArr = @[@[@"5",@"-22",@"7",@(-4),@25,@15,@6,@9],@[@"1",@"-12",@"1",@6,@4,@(-8),@6,@7]];    /* 值折线的折线颜色 默认暗黑色*/
    lineChart.valueLineColorArr =@[ [UIColor purpleColor], [UIColor brownColor]];
    
    /* 值点的颜色 默认橘黄色*/
    lineChart.pointColorArr = @[[UIColor orangeColor],[UIColor yellowColor]];
    
    /* X和Y轴的颜色 默认暗黑色 */
    lineChart.xAndYLineColor = [UIColor greenColor];
    
    /* XY轴的刻度颜色 m */
    lineChart.xAndYNumberColor = [UIColor blueColor];

    [self.view addSubview:lineChart];
    [lineChart showAnimation];
}
//饼状图
- (void)showWaveChartUpView{
    

    JHPieChart *pie = [[JHPieChart alloc] initWithFrame:CGRectMake(0, 100, 321, 421)];
    pie.center = CGPointMake(CGRectGetMaxX(self.view.frame)/2, CGRectGetMaxY(self.view.frame)/2);
    pie.valueArr = @[@18,@10,@25,@40,@18,@10,@25,@40,@18,@10,@25,@40,@25,@21];
    pie.descArr = @[@"1",@"2",@"3",@"4",@"5",@"6",@"7",@"8",@"9",@"10",@"11",@"12",@"13",@"14"];
    pie.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:pie];
    pie.positionChangeLengthWhenClick = 15;
    [pie showAnimation];
}

示例图如下：


![]()
