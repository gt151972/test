//
//  AppDelegate.h
//  GTtest
//
//  Created by 高天的Mac on 2018/5/22.
//  Copyright © 2018年 高天的Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

