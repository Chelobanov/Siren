//
// Created by Anton Karpov on 31.03.2021.
//

#include "GraphicsManager.h"

namespace sr
{
    GraphicsManager::GraphicsManager()
    {
        _window.create(sf::VideoMode(2000, 1500), "Game");
    }

    GraphicsManager::~GraphicsManager()
    {
        for (GameObject* objPtr : _drawables)
        {
            delete objPtr;
        }
    }

    void GraphicsManager::Draw()
    {
        for (GameObject* obj : _drawables)
        {
            _window.draw(obj->GetComponent<Renderer>()->_sprite);
        }
    }
}