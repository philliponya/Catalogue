//
//  ViewController.h
//  Catalogue
//
//  Created by Phillip Reed on 8/3/12.
//  Copyright (c) 2012 Phillip Reed. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *itermsTAbleView;


@end
