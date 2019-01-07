//
//  DetailViewController.h
//  Files
//
//  Created by Carl Hayes on 1/6/19.
//  Copyright © 2019 Carl Hayes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Files+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

