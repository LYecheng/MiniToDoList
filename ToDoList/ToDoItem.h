//
//  ToDoItem.h
//  ToDoList
//
//  Created by Yecheng Li on 01/24/15.
//  Copyright (c) 2015 Yecheng Li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
