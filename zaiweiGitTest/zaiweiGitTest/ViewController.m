//
//  ViewController.m
//  zaiweiGitTest
//
//  Created by zaiwei on 16/3/3.
//  Copyright © 2016年 zaiwei. All rights reserved.
//

#import "ViewController.h"
#import "ZWViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self presentViewController:[ZWViewController new] animated:YES completion:nil];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
