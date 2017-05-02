#pragma once

#include "cocos2d.h"
#include "LayerGame.h"
#include "Define.h"
USING_NS_CC;

class LayerStart : public CCLayer
{
public:
	CREATE_FUNC(LayerStart);
	static Scene *scene();
	bool init();

	void easy(Object *obj);

	void hard(Object * obj);

	void Hell(Object * obj);

	void Quit(Object * obj);

private:

};



