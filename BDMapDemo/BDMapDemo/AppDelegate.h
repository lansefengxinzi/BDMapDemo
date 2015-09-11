//
//  AppDelegate.h
//  BDMapDemo
//
//  Created by 孙菲 on 15/8/13.
//  Copyright (c) 2015年 孙菲. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI/BMapKit.h>
#import <BaiduMapAPI/BMKMapView.h>
@interface AppDelegate : NSObject <UIApplicationDelegate>
{
   
    UINavigationController *navigationController;
    BMKMapManager* _mapManager;
}
@property (nonatomic,strong) UIWindow *window;;




@end

