//
//  AIRequestEntity.h
//  ApiAI
//
//  Created by Kuragin Dmitriy on 22/05/15.
//  Copyright (c) 2015 Kuragin Dmitriy. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AIRequestEntry.h"

#import "NullabilityDefines.h"

@interface AIRequestEntity : NSObject

@property(nonatomic, copy, readonly, AI_NONNULL) NSString *name;
@property(nonatomic, copy, readonly, AI_NONNULL) NSArray *entries;

- (nonnull instancetype)initWithName:(NSString * __AI_NONNULL)name
                          andEntries:(NSArray * __AI_NONNULL)entries;

@end
