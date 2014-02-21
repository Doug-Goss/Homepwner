//
//  DetailViewController.h
//  Homepwner
//
//  Created by Doug Goss on 2/19/14.
//  Copyright (c) 2014 Doug Goss. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface DetailViewController : UIViewController:
    UIViewController{

    _weak IBOutlet UITextField *nameField;
    _weak IBOutlet UITextField *serialnumber;
    _weak IBOutlet uiTextField *valueField;
    _weak IBOutlet UILabel *dataLabel;
}

property (nonatomic, strong) BNRItem *item;

@end
