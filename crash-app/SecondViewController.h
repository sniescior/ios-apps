//
//  SecondViewController.h
//  crash-app
//
//  Created by Szymon N on 19/11/2022.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>

- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end

@interface SecondViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;

@property NSString *surname;

@end

NS_ASSUME_NONNULL_END
