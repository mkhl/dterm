//  Copyright (c) 2007-2010 Decimus Software, Inc. All rights reserved.


@interface DSNumberFormatterTransformer : NSValueTransformer

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithNumberFormatter:(NSNumberFormatter*)inFormatter NS_DESIGNATED_INITIALIZER;

@end
