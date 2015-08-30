#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

	Node *rootNode = CSLoader::createNode("MainScene.csb");
	scene->addChild(rootNode);

	Sprite *sprite = (Sprite *)rootNode->getChildByName("cell_6_1_1");

	sprite->setTexture("1.png");

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto rootNode = CSLoader::createNode("MainScene.csb");

    addChild(rootNode);

    return true;
}

void  HelloWorld::onTouchEnded(Touch *touch, Event *unused_event)
{
	int i = 1;
}

//void onTouchesEnded(const std::vector< Touch * > &  touches,
//	Event *  unused_event
//	)
//{
//	int i = 1;
//}