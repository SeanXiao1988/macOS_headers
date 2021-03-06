//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMWorkflowPersonality, NSImage, NSString;

@interface AMPersonalityChooserItem : NSObject
{
    AMWorkflowPersonality *_workflowPersonality;
    NSImage *_image;
}

@property(retain) AMWorkflowPersonality *workflowPersonality; // @synthesize workflowPersonality=_workflowPersonality;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSelectable;
@property(readonly, nonatomic) NSString *imageTitle;
@property(readonly, nonatomic) struct CGSize imageInset;
@property(readonly, nonatomic) double imageDimension;
@property(readonly, nonatomic) NSString *templateDescription;
@property(readonly, nonatomic) NSImage *imageRepresentation;
- (id)description;

@end

