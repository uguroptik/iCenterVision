//
//  ContactInfo.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 21.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Patient;

@interface ContactInfo : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * cell;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * homePhone;
@property (nonatomic, retain) NSString * workPhone;
@property (nonatomic, retain) Patient *patient;

@end
