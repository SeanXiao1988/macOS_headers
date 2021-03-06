//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class GQDPageInfo, GQDSStyle, GQDTGlobalID, GQDWPHeaderFooterStorage, NSString;

@interface GQDLSWorkspace : NSObject <ICExportable, GQDNameMappable>
{
    struct __CFString *mName;
    unsigned int mTableNameCounter;
    unsigned int mChartNameCounter;
    GQDPageInfo *mPageInfo;
    GQDSStyle *mStyle;
    GQDWPHeaderFooterStorage *mHeaderStorage;
    GQDWPHeaderFooterStorage *mFooterStorage;
    struct __CFArray *mDrawablesZOrder;
    GQDTGlobalID *mGlobalID;
    struct __CFArray *mConnections;
    struct __CFArray *mHiddenStickyNotes;
}

+ (const struct StateSpec *)stateForReading;
@property(retain, nonatomic) GQDWPHeaderFooterStorage *footerStorage; // @synthesize footerStorage=mFooterStorage;
@property(retain, nonatomic) GQDWPHeaderFooterStorage *headerStorage; // @synthesize headerStorage=mHeaderStorage;
@property(retain, nonatomic) GQDSStyle *style; // @synthesize style=mStyle;
@property(retain, nonatomic) GQDPageInfo *pageInfo; // @synthesize pageInfo=mPageInfo;
@property(nonatomic) unsigned int chartNameCounter; // @synthesize chartNameCounter=mChartNameCounter;
@property(nonatomic) unsigned int tableNameCounter; // @synthesize tableNameCounter=mTableNameCounter;
- (struct __CFString *)name;
- (void)setName:(struct __CFString *)arg1;
- (struct __CFArray *)hiddenStickyNotes;
- (void)setHiddenStickyNotes:(struct __CFArray *)arg1;
- (struct __CFArray *)connections;
- (void)setConnections:(struct __CFArray *)arg1;
- (struct __CFArray *)drawablesZOrder;
- (void)setDrawablesZOrder:(struct __CFArray *)arg1;
- (void)dealloc;
- (void)p_addVariantsOfStyle:(id)arg1 fromNativeSheet:(id)arg2 toPropertyMap:(struct GQDSMap *)arg3;
- (id)p_workspaceStyleFromNativeSheet:(id)arg1;
- (id)initFromNativeSheet:(id)arg1 inDocumentRoot:(id)arg2 exporter:(id)arg3;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

