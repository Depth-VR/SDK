//
//  Distortion.h
//  Distortion
//
//  Created by Yao on 15/7/28.
//  Copyright (c) 2015年 Depth-VR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Distortion : NSObject

- init : (NSInteger)ScreenWidth : (NSInteger)ScreenHeight;
- (UIImage*)DistortLeft : (UIImage*) leftImage;
- (UIImage*)DistortRight : (UIImage*) rightImage;

@end
