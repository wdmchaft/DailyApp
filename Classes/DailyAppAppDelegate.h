//
//  DailyAppAppDelegate.h
//  DailyApp
//
//  Created by Kyle Crow on 10/2/10.
//  Copyright 2010 Student. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface DailyAppAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate, UIScrollViewDelegate, UITabBarDelegate> {
    UIWindow *window;
	UIScrollView *scrollView;
	UIPageControl *pageControl;
    NSMutableArray *viewControllers;
	BOOL pageControlUsed;
	UITabBar *tabBar;
	
	// Database variables
	NSString *databaseName;
	NSString *databasePath;
	
	// Array to store the animal objects
	NSMutableArray *randomFacts;
	NSMutableArray *challenges;
	NSMutableArray *quotes;
	NSMutableArray *records;
	NSMutableArray *historicals;
	NSMutableArray *words;
	int count;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIPageControl *pageControl;
@property (nonatomic, retain) NSMutableArray *viewControllers;
@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, retain) IBOutlet UITabBar *tabBar;

@property (nonatomic, retain) IBOutlet UIButton *btnPage1;
@property (nonatomic, retain) IBOutlet UIButton *btnPage2;
@property (nonatomic, retain) IBOutlet UIButton *btnPage3;
@property (nonatomic, retain) IBOutlet UIButton *btnPage4;
@property (nonatomic, retain) IBOutlet UIButton *btnPage5;
@property (nonatomic, retain) IBOutlet UIButton *btnPage6;

@property (nonatomic, retain) NSMutableArray *randomFacts;
@property (nonatomic, retain) NSMutableArray *challenges;
@property (nonatomic, retain) NSMutableArray *quotes;
@property (nonatomic, retain) NSMutableArray *words;
@property (nonatomic, retain) NSMutableArray *historicals;
@property (nonatomic, retain) NSMutableArray *records;

@property (readwrite) int count;

- (IBAction)changePage:(id)sender;
- (IBAction)gotoPageOne:(id)sender;
- (IBAction)gotoPageTwo:(id)sender;
- (IBAction)gotoPageThree:(id)sender;
- (IBAction)gotoPageFour:(id)sender;
- (IBAction)gotoPageFive:(id)sender;
- (IBAction)gotoPageSix:(id)sender;

@end
