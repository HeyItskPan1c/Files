//
//  AppDelegate.h
//  Files
//
//  Created by Carl Hayes on 1/6/19.
//  Copyright © 2019 Carl Hayes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

