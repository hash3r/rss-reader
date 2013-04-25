//
//  FilmTableViewCell.m
//  Reader
//
//  Created by Andrew on 16.10.12.
//  Copyright (c) 2012 Andrew. All rights reserved.
//

#import "FilmTableViewCell.h"

@implementation FilmTableViewCell

@synthesize film,  lblTitle, lblPubDate;
@synthesize imageView;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self){
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)setFilm:(Film *)newfilm
{
    if (film != newfilm)
	{
        imageView.image = newfilm.image;
        lblTitle.text = newfilm.title;
        lblPubDate.text = newfilm.pubDate;
    }
}



@end
