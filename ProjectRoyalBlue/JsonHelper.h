//
//  JsonHelper.h
//  ProjectRoyalBlue
//
//  Created by RaulStudio on 15/9/7.
//  Copyright © 2015年 RaulStudio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JsonHelper : NSObject

+ (NSString *)readeJsonFile:(NSString *)file;
+ (id)jsonToObject;

@end
