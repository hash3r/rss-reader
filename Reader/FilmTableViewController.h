//
//  MainViewController.h
//  Reader
//
//  Created by Andrew on 16.10.12.
//  Copyright (c) 2012 Andrew. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Film.h"

extern NSString *url;

@class FilmTableViewCell;

@interface FilmTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
@private
    NSFetchedResultsController *_fetchedResultsController;
    NSManagedObjectContext *_managedObjectContext;
}
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSMutableArray *parseResult;

- (void)configureCell:(FilmTableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;



@end
