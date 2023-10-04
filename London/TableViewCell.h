//
//  TableViewCell.h
//  London App
//
//  Created by Yamini on 10/3/22.
//  Copyright © 2023 Yamini. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *cellImageView;
@property (weak, nonatomic) IBOutlet UILabel *cellTitle;
@property (weak, nonatomic) IBOutlet UILabel *cellDescription;


@end
