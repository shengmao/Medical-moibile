//
//  TESingleDocumentListViewController.h
//  AlHami@Mobile
//
//  Created by Sandra Möller on 21.06.12.
//  Copyright (c) 2012 Techedge. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuickLook/QuickLook.h>

@interface TESingleDocumentListViewController : UITableViewController <UITableViewDelegate,UITableViewDataSource, QLPreviewControllerDataSource, QLPreviewControllerDelegate>
{
    NSArray *fileNameList;
<<<<<<< HEAD
    IBOutlet UITableView *FileListTableView;
=======
    //IBOutlet UITableView *FileListTableView;
>>>>>>> add internal pdf files
    NSURL *fileURL;
}

@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) UITableView *FileListTableView;
@end
