/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <UIKit/UIView.h>

@protocol CyteTableViewCellDelegate;
@interface CyteTableViewCellContentView : UIView {

	id<CyteTableViewCellDelegate> delegate_;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

