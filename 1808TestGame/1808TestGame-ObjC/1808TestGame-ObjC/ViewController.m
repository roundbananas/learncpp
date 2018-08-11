//
//  ViewController.m
//  1808TestGame-ObjC
//
//  Created by Carl Turner on 7/8/18.
//  Copyright © 2018 Carl Turner. All rights reserved.
//

#import "ViewController.h"
#import "GameScene.h"

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // Load 'GameScene.sks' as a GKScene. This provides gameplay related content
    // including entities and graphs.
    GKScene *scene = [GKScene sceneWithFileNamed:@"GameScene"];
    
    // Get the SKScene from the loaded GKScene
    GameScene *sceneNode = (GameScene *)scene.rootNode;
    
    // Copy gameplay related content over to the scene
    sceneNode.entities = [scene.entities mutableCopy];
    sceneNode.graphs = [scene.graphs mutableCopy];
    
    // Set the scale mode to scale to fit the window
    sceneNode.scaleMode = SKSceneScaleModeAspectFill;
    
    // Present the scene
    [self.skView presentScene:sceneNode];
    
    self.skView.showsFPS = YES;
    self.skView.showsNodeCount = YES;
}

@end
