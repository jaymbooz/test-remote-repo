
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 13 Dec 2024 21:17:40 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
PrimitivesColorPrimarySecondary,
PrimitivesColorPrimaryTertiary,
PrimitivesColorPrimaryPrimary,
PrimitivesColorPrimarySeries1,
PrimitivesColorPrimarySeries2,
PrimitivesColorNeutralBlack,
PrimitivesColorNeutralWhite,
SemanticBorderDefault,
SemanticTextBodyText,
SemanticSurfaceBase,
SemanticSurfacePrimary,
SemanticPrimary,
SemanticBorderDefault
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
