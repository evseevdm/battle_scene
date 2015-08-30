#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"


USING_NS_CC;

using namespace cocostudio::timeline;

std::vector<cell> field;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

	/*Node *rootNode = CSLoader::createNode("MainScene.csb");
	scene->addChild(rootNode);*/

	

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

	/*Sprite *sprite = (Sprite *)rootNode->getChildByName("cell_6_1_1");

	sprite->setTexture("1.png");*/

	for (int i = 0; i < 100; i++)
	{
		cell _cell = cell(rootNode, i);
		field.push_back(_cell);
	}

	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);

	listener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
	listener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);
	
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

	return true;
}

bool  HelloWorld::onTouchBegan(Touch *touch, Event *unused_event)
{
	//int j = 0;
	return true;
}

void  HelloWorld::onTouchEnded(Touch *touch, Event *unused_event)
{
	Rect *spriteRect;
	Vec2 info = touch->getLocation();
	/*char x = 0;
	char y = 0;*/
	for (int i = 0; i < 11; i++)
	{
		spriteRect = (Rect *) field.at(i)->sprite.getTextureRect();
		//if (info.x < )
	}
}

//void onTouchesEnded(const std::vector< Touch * > &  touches,
//	Event *  unused_event
//	)
//{
//	int i = 1;
//}