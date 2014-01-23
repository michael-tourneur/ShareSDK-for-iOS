//
//  Created by ShareSDK.cn on 13-1-14.
//  Website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <UIKit/UIKit.h>

/**
 *	@brief	UIColor Category.
 */
@interface UIColor (Common)


/**
 *	@brief	Get color object.
 *
 *	@param 	rgb 	RGB color value.
 *
 *	@return	Color object.
 */
+ (UIColor *)colorWithRGB:(NSUInteger)rgb;

/**
 *	@brief	Get color object.
 *
 *	@param 	argb 	ARGB color value.
 *
 *	@return	Color object.
 */
+ (UIColor *)colorWithARGB:(NSUInteger)argb;

/**
 *	@brief	Get color object
 *
 *	@param 	string 	Color description string beginning with "#"
 *
 *	@return	Color object.
 */
+ (UIColor *)colorWithString:(NSString *)string;



@end
