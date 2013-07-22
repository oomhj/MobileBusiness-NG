//
//  HDModel.h
//  MobileBusiness NG
//
//  Created by Hero Ma on 13-7-22.
//  Copyright (c) 2013年 Hand. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol HDModel <NSObject>

- (NSMutableArray*)delegates;

- (BOOL)isLoaded;

- (BOOL)isLoading;

- (BOOL)isLoadingMore;

-(BOOL)isOutdated;

- (void)load:(BOOL)more;

- (void)cancel;

- (void)invalidate:(BOOL)erase;

@end

@interface HDModel : NSObject<HDModel>


@end
