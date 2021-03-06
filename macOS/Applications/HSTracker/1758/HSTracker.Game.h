//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MirrorGameServerInfo, NSDate, NSDictionary;

@interface HSTracker.Game : NSObject
{
    // Error parsing type: , name: windowManager
    // Error parsing type: , name: turnTimer
    // Error parsing type: , name: hearthstoneRunState
    // Error parsing type: , name: selfAppActive
    // Error parsing type: , name: guiNeedsUpdate
    // Error parsing type: , name: guiUpdateResets
    // Error parsing type: , name: _queue
    // Error parsing type: , name: startTime
    // Error parsing type: , name: currentTurn
    // Error parsing type: , name: lastId
    // Error parsing type: , name: gameTriggerCount
    // Error parsing type: , name: playerDeckAutodetected
    // Error parsing type: , name: powerLog
    // Error parsing type: , name: playedCards
    // Error parsing type: , name: player
    // Error parsing type: , name: opponent
    // Error parsing type: , name: currentMode
    // Error parsing type: , name: previousMode
    // Error parsing type: , name: gameResult
    // Error parsing type: , name: wasConceded
    // Error parsing type: , name: _spectator
    // Error parsing type: , name: _currentGameMode
    // Error parsing type: , name: _currentGameType
    // Error parsing type: , name: _serverInfo
    // Error parsing type: , name: entities
    // Error parsing type: , name: tmpEntities
    // Error parsing type: , name: knownCardIds
    // Error parsing type: , name: joustReveals
    // Error parsing type: , name: lastCardPlayed
    // Error parsing type: , name: gameEnded
    // Error parsing type: , name: currentDeck
    // Error parsing type: , name: currentEntityHasCardId
    // Error parsing type: , name: playerUsedHeroPower
    // Error parsing type: , name: hasCoin
    // Error parsing type: , name: currentEntityZone
    // Error parsing type: , name: opponentUsedHeroPower
    // Error parsing type: , name: wasInProgress
    // Error parsing type: , name: setupDone
    // Error parsing type: , name: opponentSecrets
    // Error parsing type: , name: defendingEntity
    // Error parsing type: , name: attackingEntity
    // Error parsing type: , name: avengeDeathRattleCount
    // Error parsing type: , name: opponentSecretCount
    // Error parsing type: , name: awaitingAvenge
    // Error parsing type: , name: isInMenu
    // Error parsing type: , name: handledGameEnd
    // Error parsing type: , name: enqueueTime
    // Error parsing type: , name: lastCompetitiveSpiritCheck
    // Error parsing type: , name: lastTurnStart
    // Error parsing type: , name: turnQueue
    // Error parsing type: , name: lastGameStartTimestamp
    // Error parsing type: , name: _matchInfo
    // Error parsing type: , name: currentFormat
    // Error parsing type: , name: lastGameStart
}

+ (double)guiUpdateDelay;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)avengeAsyncWithDeathRattleCount:(long long)arg1;
- (void)playerMinionPlayed;
- (void)opponentHeroPowerWithCardId:(id)arg1 turn:(long long)arg2;
- (void)opponentFatigueWithValue:(long long)arg1;
- (void)setWithOpponentName:(id)arg1;
- (void)setWithOpponentHero:(id)arg1;
- (void)playerHeroPowerWithCardId:(id)arg1 turn:(long long)arg2;
- (void)playerFatigueWithValue:(long long)arg1;
- (void)setWithPlayerName:(id)arg1;
- (void)setWithPlayerHero:(id)arg1;
- (void)handleThaurissanCostReduction;
- (BOOL)isMulliganDone;
- (void)tied;
- (void)loss;
- (void)win;
- (void)concede;
- (long long)turnNumber;
- (void)handleEndGame;
- (void)inMenu;
- (void)gameEnd;
- (void)removeActiveDeck;
- (void)setWithActiveDeckId:(id)arg1 autoDetected:(BOOL)arg2;
- (void)reset;
@property(nonatomic, readonly) long long opponentHandCount;
@property(nonatomic, readonly) long long playerMinionCount;
@property(nonatomic, readonly) long long opponentMinionCount;
@property(nonatomic, readonly) BOOL isOpponentMinionInPlay;
@property(nonatomic, readonly) BOOL isMinionInPlay;
@property(nonatomic) BOOL isInMenu; // @synthesize isInMenu;
@property(nonatomic) BOOL setupDone; // @synthesize setupDone;
@property(nonatomic) BOOL wasInProgress; // @synthesize wasInProgress;
@property(nonatomic) BOOL opponentUsedHeroPower; // @synthesize opponentUsedHeroPower;
@property(nonatomic) BOOL playerUsedHeroPower; // @synthesize playerUsedHeroPower;
@property(nonatomic) BOOL currentEntityHasCardId; // @synthesize currentEntityHasCardId;
@property(nonatomic) BOOL gameEnded; // @synthesize gameEnded;
@property(nonatomic) long long joustReveals; // @synthesize joustReveals;
@property(nonatomic, copy) NSDictionary *knownCardIds; // @synthesize knownCardIds;
@property(nonatomic, readonly) MirrorGameServerInfo *serverInfo;
@property(nonatomic, readonly) BOOL spectator;
@property(nonatomic) BOOL wasConceded; // @synthesize wasConceded;
@property(nonatomic) long long gameTriggerCount; // @synthesize gameTriggerCount;
@property(nonatomic) long long lastId; // @synthesize lastId;
@property(nonatomic) long long currentTurn; // @synthesize currentTurn;
@property(nonatomic, copy) NSDate *startTime; // @synthesize startTime;
- (void)updateArenaHelper;
- (void)updateBoardStateTrackers;
- (void)updateCardHud;
- (void)updateSecretTracker;
- (void)updateTurnTimer;
- (void)updatePlayerTrackerWithReset:(BOOL)arg1;
- (void)updateOpponentTrackerWithReset:(BOOL)arg1;
- (void)updateTrackersWithReset:(BOOL)arg1;
- (BOOL)determinedPlayers;
- (void)setWithCurrentEntity:(long long)arg1;
- (void)setSelfActivatedWithFlag:(BOOL)arg1;
- (void)setHearthstoneActivedWithFlag:(BOOL)arg1;
- (void)setHearthstoneRunningWithFlag:(BOOL)arg1;
@property(nonatomic, readonly) BOOL showOpponentCthunCounter;
@property(nonatomic, readonly) BOOL showOpponentJadeCounter;
@property(nonatomic, readonly) BOOL showPlayerJadeCounter;
@property(nonatomic, readonly) BOOL showPlayerDeathrattleCounter;
@property(nonatomic, readonly) BOOL showPlayerSpellsCounter;
@property(nonatomic, readonly) BOOL showPlayerCthunCounter;
@property(nonatomic, readonly) BOOL nzothInDeck;
@property(nonatomic, readonly) BOOL arcaneGiantInDeck;
@property(nonatomic, readonly) BOOL yoggInDeck;
@property(nonatomic, readonly) BOOL cthunInDeck;
@property(nonatomic, readonly) long long opponentNextJadeGolem;
@property(nonatomic, readonly) BOOL opponentSeenJade;
@property(nonatomic, readonly) long long playerNextJadeGolem;
@property(nonatomic, readonly) BOOL playerSeenJade;
@property(nonatomic, readonly) BOOL opponentSeenCthun;
@property(nonatomic, readonly) BOOL playerSeenCthun;

@end

