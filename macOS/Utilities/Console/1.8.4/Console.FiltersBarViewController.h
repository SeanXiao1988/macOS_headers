//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Console.ExtendedTitlebarAccessoryViewController.h"

@class NSButton, NSLayoutConstraint, NSMenu, _TtC7Console14ButtonsBarView, _TtC7Console29FiltersTouchBarViewController;

@interface Console.FiltersBarViewController : Console.ExtendedTitlebarAccessoryViewController
{
    // Error parsing type: , name: filtersBarView
    // Error parsing type: , name: filtersBarViewTrailingConstraint
    // Error parsing type: , name: filtersSkeletonMenu
    // Error parsing type: , name: saveButton
    // Error parsing type: , name: accessoryButton
    // Error parsing type: , name: touchBarViewController.storage
    // Error parsing type: , name: saveViewController
    // Error parsing type: , name: filtersBarViewLeadingConstraint
    // Error parsing type: , name: accessoryButtonTrailingConstraint
    // Error parsing type: , name: showsAccessoryButton
    // Error parsing type: , name: filters
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)filtersDidReorderNotification:(id)arg1;
- (void)filtersDidRemoveNotification:(id)arg1;
- (void)filtersDidAddNotification:(id)arg1;
- (void)saveButtonDidClick:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL showsAccessoryButton; // @synthesize showsAccessoryButton;
@property(nonatomic, retain) _TtC7Console29FiltersTouchBarViewController *touchBarViewController;
@property(nonatomic) __weak NSButton *accessoryButton; // @synthesize accessoryButton;
@property(nonatomic) __weak NSButton *saveButton; // @synthesize saveButton;
@property(nonatomic) __weak NSMenu *filtersSkeletonMenu; // @synthesize filtersSkeletonMenu;
@property(nonatomic) __weak NSLayoutConstraint *filtersBarViewTrailingConstraint; // @synthesize filtersBarViewTrailingConstraint;
@property(nonatomic) __weak _TtC7Console14ButtonsBarView *filtersBarView; // @synthesize filtersBarView;

@end

