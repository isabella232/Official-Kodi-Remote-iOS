//
//  RemoteController.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 24/3/12.
//  Copyright (c) 2012 joethefox inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DSJSONRPC.h"

typedef enum {
    remoteTop,
    remoteBottom
} RemotePositionType;

@interface RemoteController : UIViewController <UIGestureRecognizerDelegate> {
    IBOutlet UIView *remoteControlView;
    IBOutlet UILabel *subsInfoLabel;
    IBOutlet UIView *quickHelpView;
    IBOutlet UIImageView *quickHelpImageView;
    IBOutlet UIView *gestureZoneView;
    IBOutlet UIView *buttonZoneView;
    IBOutlet UIImageView *panFallbackImageView;
    int audioVolume;
    CGFloat lastRotation;
    RemotePositionType positionMode;
    UIView *remoteToolbar;
    UIButton *positionButton;
    CGFloat embeddedShift;
    CGFloat topRemoteOffset;
    __weak IBOutlet UIView *TransitionalView;
    __weak IBOutlet UIImageView *gestureZoneImageView;
    UIImage* gestureImage;
    BOOL torchIsOn;
    BOOL isEmbeddedMode;
    BOOL isGestureViewActive;
    NSDictionary *subsDictionary;
    NSDictionary *audiostreamsDictionary;
}

- (IBAction)startVibrate:(id)sender;
- (void)setEmbeddedView;
- (void)resetRemote;
- (id)initWithNibName:(NSString*)nibNameOrNil withEmbedded:(BOOL)withEmbedded bundle:(NSBundle*)nibBundleOrNil;
@property (strong, nonatomic) id detailItem;
@property (nonatomic, strong) NSTimer* holdVolumeTimer;
@property (strong, nonatomic) UIImageView *panFallbackImageView;

@end
