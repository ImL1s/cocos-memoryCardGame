#pragma once
#include "cocos2d.h"
USING_NS_CC;

class CardItem :public Sprite
{
public:
	LabelTTF *ttf;
	Sprite *bg;

	static CardItem* create(int idx);

	bool init(int);

	CC_SYNTHESIZE(int, _index, Idx);

	void showWhite();

	void showText();
};
