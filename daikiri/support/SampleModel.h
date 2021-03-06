//
//  SampleModel.h
//  daikiri
//
//  Created by Badchoice on 20/4/16.
//  Copyright © 2016 revo. All rights reserved.
//

#import "Daikiri.h"
#import "NonDaikiri.h"

@interface SampleModel : Daikiri

@property (strong,nonatomic) NSString* name;
@property (strong,nonatomic) NSArray* numbers;
@property (strong,nonatomic) NonDaikiri * nonDaikiri;
@property (strong,nonatomic) NSString* toBeIgnored;

@end
