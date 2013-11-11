//
//  SignUpViewController.h
//  Lanter
//
//  Created by Thomas Macready-Bryan on 7/10/13.
//  Copyright (c) 2013 Thomas Macready-Bryan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signUp:(id)sender;
- (IBAction)dismiss:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;


@end
