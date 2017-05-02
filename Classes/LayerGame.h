#pragma once

#include <cocos2d.h>
#include "LayerStart.h"
#include "Define.h"
#include "vector"
#include "CardItem.h"
using namespace std;

class LayerGame:public Layer
{
public:
	PointArray *allPoints;
	vector<int> aPontVector;

	//CREATE_FUNC(LayerStart);
	static Scene *scene(GameState);

	static LayerGame* create(int degree);

	bool init(int);

	CC_SYNTHESIZE(int, _degere, Degree);

	void LayerGame::getAllPoint();

	void LayerGame::getAvailablePoint();

	void initCardPos();

private:

};



