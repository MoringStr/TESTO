//
//  AppDelegate.h
//  TESTO
//
//  Created by MoringStar on 2020/1/19.
//  Copyright © 2020 MoringStar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

