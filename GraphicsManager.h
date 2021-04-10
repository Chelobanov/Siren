//
// Created by Anton Karpov on 31.03.2021.
//

#ifndef GAME_GRAPHICSMANAGER_H
#define GAME_GRAPHICSMANAGER_H

#include "GameObject.h"
#include <vector>

namespace sr
{
    class GraphicsManager
    {
    private:
        static std::vector<GameObject*> _drawables;
        static sf::RenderWindow _window;

    public:
        GraphicsManager();
        ~GraphicsManager();

        static void Draw();
    };
}
#endif //GAME_GRAPHICSMANAGER_H
