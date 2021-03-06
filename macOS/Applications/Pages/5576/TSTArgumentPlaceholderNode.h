//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTExpressionNode.h"

@class NSMenu, NSString;

@interface TSTArgumentPlaceholderNode : TSTExpressionNode
{
    NSMenu *mMenu;
    short mMode;
    NSString *mDetokenizedText;
}

+ (id)argumentSpecForFunctionIndex:(int)arg1 argumentIndex:(int)arg2;
@property(nonatomic) short mode; // @synthesize mode=mMode;
- (void)saveToArchive:(struct ArgumentPlaceholderNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ArgumentPlaceholderNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)hasMenu;
- (id)initialMenuItem;
- (id)menu;
- (void)modeMenuItemChosen:(id)arg1;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (id)detokenizedText;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (int)tokenType;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)bakedValue;
- (void)setArgumentSpec:(id)arg1;
- (id)argumentName;
- (id)modes;
- (void)p_invalidate;
- (id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2 children:(id)arg3;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 argumentSpec:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;

@end

