//
//  Film.m
//  Reader
//
//  Created by Andrew on 16.10.12.
//  Copyright (c) 2012 Andrew. All rights reserved.
//

#import "Film.h"

@implementation Film

@dynamic title;
@dynamic pubDate;
@dynamic image;
@dynamic link;

@end

@implementation ImageToDataTransformer

+ (BOOL)allowsReverseTransformation {
	return YES;
}

+ (Class)transformedValueClass {
	return [NSData class];
}

- (id)transformedValue:(id)value {
	NSData *data = UIImagePNGRepresentation(value);
	return data;
}

- (id)reverseTransformedValue:(id)value {
	UIImage *uiImage = [[UIImage alloc] initWithData:value];
	return uiImage ;
}

@end