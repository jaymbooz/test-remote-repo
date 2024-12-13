
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Fri, 13 Dec 2024 21:17:40 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
#f6cf3fff,
#ea002aff,
#0063a7ff,
#4f38f5ff,
#de1e26ff,
#00000dff,
#ffffffff,
#00000dff,
#00000dff,
#ffffffff,
#0063a7ff,
#ffffffff,
#00000dff
    ];
  });

  return colorArray;
}

@end
