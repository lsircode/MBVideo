//
//  UIViewController+MBCategory.h
//  shopProchase
//
//  Created by hi  kobe on 2019/8/29.
//  Copyright © 2019 hi  kobe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (MBCategory)
/**
 * 返回显示的控制器
 */
- (UIViewController *)mb_visibleViewControllerIfExist;

@end

NS_ASSUME_NONNULL_END