/*
 
 Erica Sadun, http://ericasadun.com
 NSView BG Color Utilities
 
 */

@import Foundation;

// If you use in production code, please make sure to add
// namespace indicators to class category methods

#if TARGET_OS_IPHONE
#elif TARGET_OS_MAC
@interface NSView (OSXBGColorExtension)
@property (nonatomic, weak) NSColor *backgroundColor;
@end
#endif
