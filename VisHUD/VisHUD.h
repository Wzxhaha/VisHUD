//
//  EasyHUD.h
//  Example
//
//  Created by WzxJiang on 16/11/10.
//  Copyright © 2016年 WzxJiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol VisHUDDelegate <NSObject>

- (void)visHUDDismiss;

@end

@interface VisHUD : UIView <VisHUDDelegate>

+ (void)show:(NSString *)text userInteraction:(BOOL)userInteractionEnabled afterDelay:(CGFloat)second;

+ (void)show:(NSString *)text userInteraction:(BOOL)userInteractionEnabled;

+ (void)show:(NSString *)text afterDelay:(CGFloat)second;

+ (void)show:(NSString *)text;

+ (void)show;

+ (void)dismiss;

@end


@interface VisHUDView : UIView

@property (nonatomic, weak) id <VisHUDDelegate> delegate;

@end
