//
//  ContactsViewController.h
//  SQLiteExamplePart2
//
//  Created by chris warner on 3/19/14.
//  Copyright (c) 2014 conedogers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddContactViewController.h"
#import "ViewContactViewController.h"

@interface ContactsViewController : UITableViewController <AddContactViewControllerDelegate, ViewContactViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *contactList;
@property (nonatomic, assign) sqlite3 *database;

-(IBAction)deleteAction:(id)sender;
@end
