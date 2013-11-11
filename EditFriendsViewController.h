//
//  EditFriendsViewController.h
//  Lanter
//
//  Created by Thomas Macready-Bryan on 11/10/13.
//  Copyright (c) 2013 Thomas Macready-Bryan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

-(BOOL)isFriend:(PFUser *)user;

@end
