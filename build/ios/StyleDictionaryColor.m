
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Fri, 13 Dec 2024 21:09:50 GMT


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
#ffffffff,
#ddddddff,
#efefefff,
#000000ff,
#000000ff,
#ffffffff,
#007ac2ff,
#e4002bff,
#007ac2ff,
#000000ff,
#007ac2ff,
#e4002bff,
#ffd659ff,
#6138f5ff,
#007ac2ff,
#de1e26ff,
#ffffffff,
#ffffffb3,
#000000ff,
#007ac2ff,
#007ac2ff,
#ffffffff
    ];
  });

  return colorArray;
}

@end
