
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Mon, 23 Dec 2024 16:17:25 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
PrimitivesColorPrimarySecondary,
PrimitivesColorPrimaryTertiary,
PrimitivesColorPrimaryPrimary,
PrimitivesColorPrimarySeries1,
PrimitivesColorPrimarySeries2,
PrimitivesColorPrimarySeries4,
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
