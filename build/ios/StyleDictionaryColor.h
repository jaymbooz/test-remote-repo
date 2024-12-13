
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 13 Dec 2024 21:09:50 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
PrimaryBgColor,
SecondaryBgColor,
TertiaryBgColor,
PrimaryBgColorDark,
PrimaryTextColor,
PrimaryButtonFontColor,
PrimaryLinkColor,
SecondaryLinkColor,
PrimaryButtonBackgroundColor,
SecondaryButtonBackgroundColor,
NascarPrimaryBrandingColor,
NascarSecondaryBrandingColor,
NascarTertiaryBrandingColor,
Series2BrandingColor,
Series1BrandingColor,
Series3BrandingColor,
FooterLinkColor,
FooterLinkColorHover,
PrimaryButtonFontColorDark,
PrimaryButtonFontColorHover,
HighlightButtonFontColor,
ButtonOutlineStrokeColor
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
