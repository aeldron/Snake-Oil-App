//
//  Snake_Oil_AppAppDelegate.h
//  Snake Oil App
//
//  Created by Leandro Barreto on 24/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Snake_Oil_AppViewController;

@interface Snake_Oil_AppAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Snake_Oil_AppViewController *viewController;

@end
