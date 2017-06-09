@interface SBIcon : NSObject

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *leafIdentifier;
@property (nonatomic, assign) BOOL isFolderIcon;

- (NSInteger)badgeValue;

@end
