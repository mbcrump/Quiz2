//
//  ViewController.h
//  Quiz2
//
//  Created by Michael Crump on 5/8/13.
//  Copyright (c) 2013 Michael Crump. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

{
    
    int currentQuestionIndex;
    NSMutableArray  *questions;
    NSMutableArray *answers;
    
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
