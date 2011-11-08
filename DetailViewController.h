//
//  DetailViewController.h
//  TestApp
//
//  Created by Jeff Bice on 11/8/11.
//  Copyright (c) 2011 Pursuit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
