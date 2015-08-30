#pragma once

#define SPRITE_TAG_SHIFT      123

#include "cocos2d.h"
#include "math.h"

using namespace cocos2d;
class cell
{
public:
	char xPosition;
	char yPosition;
	char type;
	Sprite *sprite;
public:
	cell();
	cell(Node *rootnode, int tag);
	~cell();
};

