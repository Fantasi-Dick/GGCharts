//
//  PieDataSet.h
//  GGCharts
//
//  Created by 黄舜 on 17/9/20.
//  Copyright © 2017年 I really is a farmer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PieDrawAbstract.h"
#import "PieData.h"
#import "CenterData.h"

@interface PieDataSet : NSObject <PieCanvasAbstract>

/**
 * 扇形图数组
 */
@property (nonatomic, strong) NSArray <PieData *> * pieAry;

/**
 * 是否显示中心标签
 */
@property (nonatomic, assign) BOOL showCenterLable;

/**
 * 中心点
 */
@property (nonatomic, strong) CenterData * centerLable;

/**
 * 扇形图边框宽度
 */
@property (nonatomic, assign) CGFloat pieBorderWidth;

/**
 * 环形间距
 */
@property (nonatomic, assign) CGFloat borderRadius;

/**
 * 扇形图边框颜色
 */
@property (nonatomic, strong) UIColor * pieBorderColor;

/**
 * 扇形图动画
 */
@property (nonatomic, assign) PieAnimationType pieAnimationType;

/**
 * 折线图更新数据, 绘制前配置
 */
- (void)updateChartConfigs:(CGRect)rect;

@end