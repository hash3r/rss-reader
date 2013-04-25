//
//  FilmTableViewCell.h
//  Reader
//
//  Created by Andrew on 16.10.12.
//  Copyright (c) 2012 Andrew. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Film.h"

@interface FilmTableViewCell : UITableViewCell
{
    Film *film;
}

@property (strong, nonatomic) Film *film;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblPubDate;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
