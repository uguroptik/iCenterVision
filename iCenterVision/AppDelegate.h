//
//  iCVAppDelegate.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 13.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, retain, readonly) UIColor *tintColor;

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@end
