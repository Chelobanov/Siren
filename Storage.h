//
// Created by Anton Karpov on 31.03.2021.
//

#ifndef GAME_STORAGE_H
#define GAME_STORAGE_H

#include "GameObject.h"
#include <vector>

namespace sr
{
    class Storage
    {
    private:
        std::vector<GameObject*> _objects;

    public:
        Storage() = default;
        ~Storage();
    };

}

#endif //GAME_STORAGE_H
