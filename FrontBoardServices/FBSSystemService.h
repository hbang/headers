#include <sys/cdefs.h>

typedef void (^FBSSystemServiceResultCallback)(NSError *error);

__BEGIN_DECLS

extern NSString *const FBSOpenApplicationOptionKeyUnlockDevice;
extern NSString *const FBSOpenApplicationOptionKeyActivateSuspended;

__END_DECLS

@class BSAction;

@interface FBSSystemService : NSObject

+ (instancetype)sharedService;

- (mach_port_t)createClientPort;

- (void)sendActions:(NSSet<BSAction *> *)actions withResult:(FBSSystemServiceResultCallback)result;
- (void)openURL:(NSURL *)url application:(NSString *)bundleIdentifier options:(NSDictionary <NSString *, id> *)options clientPort:(mach_port_t)clientPort withResult:(FBSSystemServiceResultCallback)callback;
- (void)openApplication:(NSString *)app options:(NSDictionary *)options withResult:(void (^)(void))result;

@end
