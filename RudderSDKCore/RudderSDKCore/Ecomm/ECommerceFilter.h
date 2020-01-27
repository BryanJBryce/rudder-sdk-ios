//
//  ECommerceFilter.h
//  RudderSDKCore
//
//  Created by Arnab Pal on 22/01/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ECommerceFilter : NSObject

@property (nonatomic, strong) NSString* type;
@property (nonatomic, strong) NSString* value;

- (NSDictionary*) dict;

@end

NS_ASSUME_NONNULL_END
