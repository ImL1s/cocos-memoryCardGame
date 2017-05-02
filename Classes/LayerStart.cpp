//#include<cocos2d.h>
#include "LayerStart.h"


Scene * LayerStart::scene()
{
	Scene *scene = Scene::create();
	scene->addChild(LayerStart::create());
	return scene;
}

bool LayerStart::init()
{
	Layer::init();

	MenuItem *easyItem = MenuItemFont::create("EASY", this, menu_selector(LayerStart::easy));
	MenuItem *hardItem = MenuItemFont::create("HARD", this, menu_selector(LayerStart::hard));
	MenuItem *hellItem = MenuItemFont::create("HELL", this, menu_selector(LayerStart::Hell));
	MenuItem *quitItem = MenuItemFont::create("QUIT", this, menu_selector(LayerStart::Quit));

	CCMenu *menu = CCMenu::create(easyItem, hardItem, hellItem, quitItem, NULL);
	menu->alignItemsVerticallyWithPadding(30);
	addChild(menu);
	return true;
}

void LayerStart::easy(Object* obj)
{
	log("on easy click");
	Scene *scene = LayerGame::scene(Easy);
	Director::sharedDirector()->pushScene(scene);
}

void LayerStart::hard(Object *obj)
{
	log("on hard click");
}

void LayerStart::Hell(Object *obj)
{
	log("on Hell click");
}

void LayerStart::Quit(Object *obj)
{
	log("on Quit click");
}

