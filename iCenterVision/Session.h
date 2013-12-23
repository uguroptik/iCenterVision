//
//  Session.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 18.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Patient.h"

typedef NS_ENUM(NSUInteger, SessionStatus) {

    DRAFT = 1,
    CLOSED = 2
    
};

@interface Session : NSObject

- (NSDate *) date;
- (NSString *) day;
- (NSString *) time;
- (Patient *) patient;
- (SessionStatus) status;

@end
