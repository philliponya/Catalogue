//
//  CDs.m
//  Catalogue
//
//  Created by Phillip Reed on 8/3/12.
//  Copyright (c) 2012 Phillip Reed. All rights reserved.
//

#import "CDs.h"

@implementation CDs
@synthesize artist = _artist;
@synthesize label = _label;

+ (CDs *)cdWithArtist:(NSString*) artist label: (NSString *)label price:(float) price identificationNumber: (float)idNum
{



CDs*newCD = [[CDs alloc] init];
newCD.artist = artist;
newCD.label = label;
newCD.price = price;
newCD. identificationNumber = idNum;
    
}


@end
