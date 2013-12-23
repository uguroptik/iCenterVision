//
//  Patient.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 21.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ContactInfo;

@interface Patient : NSManagedObject

@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * identityNo;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSString * photoPath;
@property (nonatomic, retain) ContactInfo *contactInfo;

@end
