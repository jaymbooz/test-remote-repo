
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Mon, 23 Dec 2024 16:17:25 GMT


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
#007ac2ff,
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
