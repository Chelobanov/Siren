//
// Created by Anton Karpov on 03.04.2021.
//

#ifndef GAME_SCENEMANAGER_H
#define GAME_SCENEMANAGER_H

#include "Scene.h"
#include <memory>
#include <stack>

namespace sr
{
    typedef std::unique_ptr<Scene> SceneRef;

    class SceneManager
    {
    private:
        static std::stack<SceneRef> _scenes;
        static SceneRef _newScene;

        static bool _isRemoving, _isAdding, _isReplacing;

    public:
        SceneManager () = default;

        static void AddScene(SceneRef newScene, bool isReplacing = true);
        static void RemoveScene();

        static void ProcessSceneChanges();

        static SceneRef& GetActiveScene();
    };
}

#endif //GAME_SCENEMANAGER_H
