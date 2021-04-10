//
// Created by Anton Karpov on 03.04.2021.
//

#ifndef GAME_PHYSICSMANAGER_H
#define GAME_PHYSICSMANAGER_H

#include <vector>
#include "GameObject.h"

namespace sr
{
    class PhysicsManager
    {
    private:
        const double DT = 1. / 60.;
        static std::vector<Physics*> _objects;
        static double _gForce;

    public:
        PhysicsManager() = default;

        void UpdateFalling();
        void Collide();
    };
}


#endif //GAME_PHYSICSMANAGER_H
