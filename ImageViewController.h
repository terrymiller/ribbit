//
//  ImageViewController.h
//  Lanter
//
//  Created by Thomas Macready-Bryan on 12/10/13.
//  Copyright (c) 2013 Thomas Macready-Bryan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
