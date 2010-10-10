//
//  FirstViewController.h
//  yaia
//
//  Created by Kevin Munc on 10/10/10.
//  Copyright 2010. Creative Commons Attribution Non-Commercial.
//

#import <UIKit/UIKit.h>


@interface DeviceViewController : UIViewController {
    
    UILabel *_udid;

}

@property (nonatomic, retain) IBOutlet UILabel *udid;

@end
