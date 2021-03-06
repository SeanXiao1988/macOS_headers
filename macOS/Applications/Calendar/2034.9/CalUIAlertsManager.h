//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalUIAlertsManager : NSObject
{
}

+ (BOOL)noMeCardAlertWithTitle:(id)arg1 subtext:(id)arg2;
+ (void)noMeCardValidEmailSet:(id)arg1;
+ (void)noMeCardEmailSet;
+ (void)noMeCardSet;
+ (void)readOnlyAlertWithEvent:(id)arg1 calendar:(id)arg2;
+ (BOOL)shouldDeleteGroupWithTitle:(id)arg1;
+ (BOOL)shouldDeleteCalendarWithTitleContainingMeetings:(id)arg1 isDualType:(BOOL)arg2;
+ (int)shouldDeleteCalendarWithTitleContainingMeetingsWithInvitations:(id)arg1 isDualType:(BOOL)arg2 dontNotifyOption:(BOOL)arg3;
+ (BOOL)shouldDeleteSharedToMeCalendarWithTitle:(id)arg1;
+ (BOOL)warningRemainingCalendarCannotBeDefaultSchedulingCalendar;
+ (BOOL)shouldDeleteDefaultSchedulingCalendar;
+ (BOOL)shouldDeleteCalendarFromUnwriteableAccount;
+ (BOOL)shouldMoveEventToNonSchedulingCalendar:(id)arg1;
+ (BOOL)shouldMoveFromLocalAccountToServerAccountWithTitle:(id)arg1;
+ (BOOL)shouldMoveFromServerAccountWithTitleToLocalAccount:(id)arg1;
+ (BOOL)shouldMoveFromServerAccountWithTitle:(id)arg1 toServerAccountWithTitle:(id)arg2;
+ (BOOL)shouldMoveFromLocalAccountToExchangeAccountWithTitle:(id)arg1;
+ (BOOL)shouldMoveMultipleEventsToNonDistinguishedExchangeCalendar;
+ (BOOL)shouldMoveAttendeeSideEventToNonDistinguishedExchangeCalendar;
+ (BOOL)shouldMoveOrganizerSideEventToNonDistinguishedExchangeCalendar;
+ (BOOL)shouldMoveEventWithOverlappingOccurrencesToExchangeCalendar;
+ (BOOL)shouldMoveIncompatibleEventsToExchangeCalendarWithNumEvents:(long long)arg1;
+ (int)spanDecisionForDuplicateMultipleEventsInRecurringSeries;
+ (int)spanDecisionForDuplicateSingleEventInRecurringSeries;
+ (int)spanDecisionForCopyMultipleEventsInRecurringSeries;
+ (int)spanDecisionForCopySingleEventInRecurringSeries;
+ (int)spanDecisionForCutMultipleEventsInRecurringSeries;
+ (int)spanDecisionForCutSingleEventInRecurringSeries;
+ (int)commitDecisionForSendingInvitationFromNonDistinguishedExchangeCalendar;
+ (int)commitDecisionForSendInvitationForEventTitle:(id)arg1 withUserOption:(int)arg2;
+ (int)commitDecisionForSendChangesForEventTitle:(id)arg1 withUserOption:(int)arg2;
+ (int)_sendSaveWithAlertTitle:(id)arg1 eventTitle:(id)arg2 userOption:(int)arg3;
+ (unsigned long long)conflictDecisionForEventTitle:(id)arg1 withConflictCount:(unsigned long long)arg2 outOfTotalCount:(unsigned long long)arg3;
+ (int)spanDecisionForSaveRecurringEventProposeFuture:(BOOL)arg1;
+ (int)spanDecisionForTimeChangeOnOnlyThisEvent;
+ (int)spanDecisionForRecurrenceRulesAppliesToEntireSeries;
+ (int)spanDecisionForRecurrenceRulesAppliesToAllFuture;
+ (int)spanDecisionForPrivacyAppliesToEntireSeries;
+ (int)spanDecisionForAllDayAppliesToEntireSeries;
+ (BOOL)shouldSaveEventsWithRecurrenceIntervalShorterThanDuration;
+ (BOOL)shouldSaveExchangeEventsWithOverlappingAlarms;
+ (BOOL)shouldSaveOverlappingExchangeEvents;
+ (int)spanDecisionForRespondingToRepeatingEventInvitation;
+ (int)commitDecisionForDeclineMultipleEventsWithDontNotifyOption:(BOOL)arg1;
+ (int)commitDecisionForDeclineWithDontNotifyOption:(BOOL)arg1;
+ (int)commitDecisionForDeleteMultipleEventsAsOrganizerAndAttendeeWithDontNotifyOption:(BOOL)arg1;
+ (int)commitDecisionForDeleteMultipleEventsAsOrganizer;
+ (int)commitDecisionForDeleteSingleEventAsOrganizerWithDontNotifyOption:(BOOL)arg1;
+ (BOOL)shouldDeleteMultipleAttachmentsWithCount:(unsigned long long)arg1;
+ (BOOL)shouldDeleteSingleAttachmentWithFilename:(id)arg1;
+ (BOOL)shouldDeleteAlreadyDeclinedEvent;
+ (BOOL)shouldDeleteEventWithAttachment;
+ (int)_commitDecisionWithTitle:(id)arg1 subtext:(id)arg2 commitAndNotify:(id)arg3 commitAndDontNotify:(id)arg4;
+ (id)onlyThisEvent;
+ (id)allFutureEvents;
+ (id)allEvents;
+ (id)youreChangingARepeatingEvent;
+ (id)deleteAndDontNotifyButtonTitle;
+ (id)deleteAndNotifyButtonTitle;
+ (id)declineAndDontNotifyButtonTitle;
+ (id)declineAndNotifyButtonTitle;
+ (id)areYouSureYouWantToDeleteTheseEvents;
+ (id)areYouSureYouWantToDeleteThisEvent;
+ (int)spanDecisionForChangedStartDate:(id)arg1 proposeFuture:(BOOL)arg2;
+ (int)spanDecisionForChangedStartTime:(id)arg1 proposeFuture:(BOOL)arg2;
+ (int)spanDecisionForDurationChangeProposeFuture:(BOOL)arg1;
+ (int)spanDecisionForTimeZoneChangeProposeFuture:(BOOL)arg1;
+ (int)spanDecisionForDeleteMultipleEventsProposeFuture:(BOOL)arg1 allAreRecurring:(BOOL)arg2;
+ (int)spanDecisionForDeleteSingleEventProposeFuture:(BOOL)arg1;
+ (int)_spanDecisionWithTitle:(id)arg1 subtext:(id)arg2 spanThis:(id)arg3 spanFuture:(id)arg4 spanAll:(id)arg5;
+ (int)cancelOrSpanThisAlertWithTitle:(id)arg1 subtext:(id)arg2 spanThisButton:(id)arg3;
+ (int)cancelOrSpanDecisionAlertWithTitle:(id)arg1 subtext:(id)arg2 span:(int)arg3 spanButton:(id)arg4;
+ (BOOL)cancelAlertWithTitle:(id)arg1 subtext:(id)arg2;
+ (BOOL)YesOrNoAlertWithTitle:(id)arg1 subtext:(id)arg2 yesButton:(id)arg3 noButton:(id)arg4;
+ (BOOL)noAlertWithTitle:(id)arg1 subtext:(id)arg2 noButton:(id)arg3;
+ (id)genericAlertWithTitle:(id)arg1 subtext:(id)arg2;
+ (id)removeButton;
+ (id)moveButton;
+ (id)deleteButton;
+ (id)okButton;
+ (id)cancelButton;
+ (id)continueButton;

@end

