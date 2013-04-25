//
//  WebViewController.h
//  Reader
//
//  Created by Andrew on 16.10.12.
//  Copyright (c) 2012 Andrew. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) UIWebView *webView;

@end
