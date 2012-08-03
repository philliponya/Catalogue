//
//  CDs.h
//  Catalogue
//
//  Created by Phillip Reed on 8/3/12.
//  Copyright (c) 2012 Phillip Reed. All rights reserved.
//

#import "Item.h"

@interface CDs : Item

@property (nonatomic, strong) NSString *artist;
@property (nonatomic, strong) NSString *label;

+ (CDs *)cdWithArtist:(NSString*) artist label: (NSString *)label price:(float) price identificationNumber: (float)idNum;

                                                              

@end
