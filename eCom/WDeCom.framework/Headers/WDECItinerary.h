//
//  WDECItinerary.h
//  WDeCom
//
//  Created by Vrana, Jozef on 20/09/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDECSegment.h"

@interface WDECItinerary : NSObject

@property (strong, nonatomic) WDECSegment *segment;

@end
