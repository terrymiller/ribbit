//
//  LoginViewController.h
//  Lanter
//
//  Created by Thomas Macready-Bryan on 7/10/13.
//  Copyright (c) 2013 Thomas Macready-Bryan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end
