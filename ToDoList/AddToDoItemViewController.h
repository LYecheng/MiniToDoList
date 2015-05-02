//
//  AddToDoItemViewController.h
//  ToDoList
//
//  Created by Yecheng Li on 01/24/15.
//  Copyright (c) 2015 Yecheng Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoItem.h"

@interface AddToDoItemViewController : UIViewController <UITextFieldDelegate>

@property ToDoItem *toDoItem;

@end
