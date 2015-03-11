//
//  ViewController.h
//  Calculator
//
//  Created by enterpi on 04/12/12.
//  Copyright (c) 2012 enterpi. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    float result;
    IBOutlet UILabel *calculatorScreen;
    NSInteger currentOperaton;
    float currentNumber;
    
}
@property(nonatomic,strong)    IBOutlet UILabel *calculatorScreen;


-(IBAction)buttonDigitPressed:(id)sender;
-(IBAction)buttonOperationPressed:(id)sender;
-(IBAction)cancelInput;
-(IBAction)cancelOperation;

@end
