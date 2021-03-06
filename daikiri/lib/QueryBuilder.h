//
//  QueryBuilder.h
//  daikiri
//
//  Created by Badchoice on 18/4/16.
//  Copyright © 2016 revo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QueryBuilder : NSObject{
    NSMutableArray* _predicates;
    NSMutableArray* _sortPredicates;
    NSString*       _model;
    
    NSNumber*       skip;
    NSNumber*       take;
}

+(QueryBuilder*)query:(NSString*)model;

-(QueryBuilder*)where:(NSString*)field is:(id)value;
-(QueryBuilder*)where:(NSString*)field operator:(NSString*)operator value:(id)value;
-(QueryBuilder*)where:(NSString*)field in:(NSArray*)values;
-(QueryBuilder*)whereAny:(NSArray*)fields like:(id)value;
-(QueryBuilder*)whereAny:(NSArray*)fields is:(id)value;

-(QueryBuilder*)orderBy:(NSString*)key;
-(QueryBuilder*)orderBy:(NSString*)key ascendig:(BOOL)ascending;

-(QueryBuilder*)raw:(NSString*)raw;
-(QueryBuilder*)addPredicate:(NSPredicate*)predicate;

-(QueryBuilder*)skip:(int)count;
-(QueryBuilder*)take:(int)count;


-(NSArray*)get;
-(id)first;
@end
