//
//  Film.h
//  Reader
//
//  Created by Andrew on 16.10.12.
//  Copyright (c) 2012 Andrew. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ImageToDataTransformer : NSValueTransformer {
}
@end


@interface Film : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * pubDate;
@property (nonatomic, retain) UIImage  * image;
@property (nonatomic, retain) NSString * link;

@end
