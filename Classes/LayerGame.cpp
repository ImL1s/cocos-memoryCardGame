#include "LayerGame.h"

Scene * LayerGame::scene(GameState state)
{
	Scene *scene = Scene::create();

	scene->addChild(create(state));
	return scene;
}

LayerGame * LayerGame::create(int degree)
{
	LayerGame *pRet = new LayerGame;
	if (pRet && pRet->init(degree))
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

bool LayerGame::init(int degree)
{
	Layer::init();

	setDegree(degree);
	//getAllPoint();
	//getAvailablePoint();
	initCardPos();

	return true;
}


void LayerGame::getAllPoint()
{
	allPoints = CCPointArray::create(60);
	//allPoints->retain();
	for (int  i = 0; i < 10; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			allPoints->addControlPoint(Vec2(80 * i, 80 * j));
		}
	}
}

void LayerGame::getAvailablePoint()
{
	srand(time(NULL));
	while (1)
	{
		int idx = rand() % 60;
		vector<int>::iterator itr = aPontVector.begin();
		for (; itr != aPontVector.end(); ++itr)
		{
			if (*itr == idx)
				break;
		}
		if (itr == aPontVector.end())
		{
			aPontVector.push_back(idx);
			if (aPontVector.size() == getDegree())
			{
				break;
			}
		}
	}
}

void LayerGame::initCardPos()
{
	CardItem *cardItem1 = CardItem::create(1);
	this->addChild(cardItem1);
	cardItem1->setPosition(Vec2(537, 384));
}



