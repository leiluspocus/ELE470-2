//
//  BIDViewController.h
//  ButtonFun
//
//  Created by Laïla Atrmouh on 17/09/12.
//  Copyright (c) 2012 URI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController

// Empty label
@property (weak, nonatomic) IBOutlet UILabel *statusText;

// Handler event
- (IBAction)buttonPressed:(UIButton *)sender;

@end
