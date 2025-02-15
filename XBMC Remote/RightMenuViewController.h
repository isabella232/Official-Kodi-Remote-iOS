//
//  RightMenuViewController.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 9/11/12.
//  Copyright (c) 2012 joethefox inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECSlidingViewController.h"
#import "DSJSONRPC.h"
#import "RemoteController.h"
#import "VolumeSliderView.h"
#import "MessagesView.h"

@interface RightMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *menuTableView;
    IBOutlet UITableViewCell *rightMenuCell;
    NSMutableArray *tableData;
    UILabel *infoLabel;
    VolumeSliderView *volumeSliderView;
    RemoteController *remoteControllerView;
    BOOL torchIsOn;
    MessagesView *messagesView;
    NSUInteger editableRowStartAt;
    UIButton *editTableButton;
    UIButton *moreButton;
    NSDictionary *infoCustomButton;
}

@property (strong, nonatomic) NSMutableArray *rightMenuItems;

@end
