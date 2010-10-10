//
//  yaiaAppDelegate.h
//  yaia
//
//  Created by Kevin Munc on 10/10/10.
//  Copyright 2010. Creative Commons Attribution Non-Commercial.
//

#import <UIKit/UIKit.h>

@interface yaiaAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
