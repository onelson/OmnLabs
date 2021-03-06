#pragma once

#include "cocos2d.h"
#include "EntityEngine.h"


class HelloWorld : public cocos2d::Layer {
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

    void update(float) override;

    EntityEngine entityEngine;

};
