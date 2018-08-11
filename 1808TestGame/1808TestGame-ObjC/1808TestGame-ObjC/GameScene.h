//
//  GameScene.h
//  1808TestGame-ObjC
//
//  Created by Carl Turner on 7/8/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <GameplayKit/GameplayKit.h>

@interface GameScene : SKScene

@property (nonatomic) NSMutableArray<GKEntity *> *entities;
@property (nonatomic) NSMutableDictionary<NSString*, GKGraph *> *graphs;

@end
