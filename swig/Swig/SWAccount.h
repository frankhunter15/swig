//
//  SWAccount.h
//  swig
//
//  Created by Pierre-Marc Airoldi on 2014-08-14.
//  Copyright (c) 2014 PeteAppDesigns. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SWAccount : NSObject

+(SWAccount *)accountForId:(NSInteger)accountId;

@end