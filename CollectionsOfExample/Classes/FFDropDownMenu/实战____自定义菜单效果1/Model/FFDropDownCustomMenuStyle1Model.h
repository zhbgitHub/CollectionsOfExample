//
//  FFDropDownCustomMenuStyle1Model.h
//  CollectionsOfExample
//
//  Created by mac on 16/8/12.
//  Copyright © 2016年 chenfanfang. All rights reserved.
//

#import <FFDropDownMenuBasedModel.h>

@interface FFDropDownCustomMenuStyle1Model : FFDropDownMenuBasedModel

/** 主标题的背景颜色 */
@property (nonatomic, strong) UIColor *mainTitleBgColor;

/** 主标题 */
@property (nonatomic, copy) NSString *mainTitle;

/** 副标题 */
@property (nonatomic, copy) NSString *subTitle;


//菜单模型创建的属性用于自定义菜单cell，所以需要什么属性，自己定义

@end
