//
// Created by Anton Karpov on 03.04.2021.
//

#ifndef GAME_APP_H
#define GAME_APP_H

#include "GraphicsManager.h"
#include "Storage.h"
#include "ScriptManager.h"
#include "PhysicsManager.h"
#include "SceneManager.h"

namespace sr
{

    class App
    {
    public:
        App();

    private:
        void Run();
    };

}
#endif //GAME_APP_H
