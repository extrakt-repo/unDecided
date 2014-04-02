//
//  MainViewController.h
//  unDecided
//
//  Created by Patrick Hart on 4/2/14.
//  Copyright (c) 2014 exTrakt. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
