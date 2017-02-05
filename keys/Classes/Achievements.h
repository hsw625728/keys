//
//  Achievements.h
//  Skeleton Key
//
//  Created by micah on 12/30/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h> 

// the achievements
typedef enum {
	AchievementBeginTheHunt = 0,
	AchievementKnockKnock = 1,
	AchievementTheDoorman = 2,
	AchievementTheDoorToKnowhere = 3,
	AchievementPerfectionist = 4,
	AchievementProfessionalPerfectionist = 5,
	AchievementEnterTheDarkness = 6,
	AchievementEnjoyTheSun = 7,
	AchievementArrrgh = 8,
	AchievementTreasureHunter = 9,
	AchievementAnAdventurerIsYou = 10,
	AchievementIntrepidExplorer = 11,
	AchievementMastermind = 12
} AchievementNames;

#define ACHIEVEMENT0_NAME @"开始寻宝"
#define ACHIEVEMENT0_DESC @"完成前10个关卡"
#define ACHIEVEMENT1_NAME @"咚咚咚！"
#define ACHIEVEMENT1_DESC @"用钥匙开启一扇门"
#define ACHIEVEMENT2_NAME @"开门人"
#define ACHIEVEMENT2_DESC @"用钥匙开启50扇门"
#define ACHIEVEMENT3_NAME @"无用之门"
#define ACHIEVEMENT3_DESC @"你能找到它吗?"
#define ACHIEVEMENT4_NAME @"完美主义者"
#define ACHIEVEMENT4_DESC @"完美地通过10个关卡"
#define ACHIEVEMENT5_NAME @"专业的完美主义者"
#define ACHIEVEMENT5_DESC @"完美地通过30个关卡"
#define ACHIEVEMENT6_NAME @"步入黑暗"
#define ACHIEVEMENT6_DESC @"步入山洞地图"
#define ACHIEVEMENT7_NAME @"享受阳光"
#define ACHIEVEMENT7_DESC @"开启沙滩地图"
#define ACHIEVEMENT8_NAME @"啊!"
#define ACHIEVEMENT8_DESC @"开启海盗船地图"
#define ACHIEVEMENT9_NAME @"宝藏猎人"
#define ACHIEVEMENT9_DESC @"得到所有简单模式的宝藏"
#define ACHIEVEMENT10_NAME @"你就是冒险家"
#define ACHIEVEMENT10_DESC @"得到所有中等难度的宝藏"
#define ACHIEVEMENT11_NAME @"勇敢的探险者"
#define ACHIEVEMENT11_DESC @"得到所有高难度的宝藏"
#define ACHIEVEMENT12_NAME @"宝藏大师！"
#define ACHIEVEMENT12_DESC @"获取所有难度下的宝藏"

#define ACHIEVEMENT_NUM 13

@interface Achievements : NSObject {
	NSMutableArray* achievements;
	NSUInteger doorsOpened;
	NSMutableArray* achieved;
	
	NSUInteger numAchievements;
}

@property (nonatomic,retain) NSMutableArray* achievements;
@property (readwrite) NSUInteger doorsOpened;
@property (nonatomic,retain) NSMutableArray* achieved;
@property (readwrite) NSUInteger numAchievements;

- (NSString*)getFilePath;
- (void) load;
- (void) save;
- (void) reset;
- (bool) unlock:(int)achievementId;

- (NSString*) getName:(int)i;
- (NSString*) getDescription:(int)i;

@end
