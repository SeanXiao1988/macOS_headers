//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAlert, NSString, NSTimer;

@interface AlertController : NSObject
{
    NSAlert *_alert;
    BOOL _isQuitEnabled;
    BOOL _doesCloseUponDismiss;
    double _timeoutInterval;
    int _returnCode;
    NSTimer *_autoDismissTimer;
    NSString *_autoDismissCountdownTextFormat;
}

+ (id)alertControllerWithAlert:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)terminate:(id)arg1;
- (BOOL)worksWhenModal;
- (void)_autoDismissTimerHasFired:(id)arg1;
- (void)abortModal;
- (int)runModal;
- (void)setClosesUponDismiss:(BOOL)arg1;
- (void)setTimeout:(double)arg1 countdownTextFormat:(id)arg2;
- (void)setQuitMenuItemEnabled:(BOOL)arg1;
- (id)window;
- (id)alert;
- (void)dealloc;
- (id)initWithAlert:(id)arg1;

@end

