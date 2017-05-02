#include "CardItem.h"

CardItem * CardItem::create(int idx)
{
	CardItem *pRet = new CardItem;
	if (pRet && pRet->init(idx))
	{
		pRet->autorelease();
	}
	else
	{
		delete pRet;
		pRet = NULL;
	}
	return pRet;
}

bool CardItem::init(int idx)
{
	Sprite::init();
	setIdx(idx);

	setContentSize(CCSizeMake(80, 80));
	setAnchorPoint(Vec2(0, 0));

	String *str = String::createWithFormat("%d", _index);
	ttf = LabelTTF::create(str->getCString(), "Courier New", 50);
	ttf->setPosition(Vec2(40, 40));
	this->addChild(ttf);

	return true;
}

void CardItem::showWhite()
{
	ttf->setVisible(false);
	//bg->setVisible(true);
}

void CardItem::showText()
{
	ttf->setVisible(true);
	//bg->setVisible(false);
}


