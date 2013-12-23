//
//  SessionManager.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 18.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Session.h"

@interface SessionManager : NSObject

+ (Session *) currentSession;
+ (BOOL) newSession;
+ (BOOL) save;
+ (BOOL) draft;


@end
