//
//  Books.h
//  Catalogue
//
//  Created by Phillip Reed on 8/3/12.
//  Copyright (c) 2012 Phillip Reed. All rights reserved.
//

#import "Item.h"

@interface Books : Item
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;

@end
