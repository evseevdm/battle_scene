#include "cell.h"


cell::cell()
{
}

cell::cell(Node *rootnode, int tag)
{
	this->sprite = (Sprite *) rootnode->getChildByTag(tag + SPRITE_TAG_SHIFT);
	this->xPosition = tag % 10 + 1;
	this->yPosition = tag / 10 + 1;

	if ((this->xPosition == 6) && (this->yPosition == 9))
	{
		this->sprite->setTexture("ship.png");
	}
}

cell::~cell()
{
}

