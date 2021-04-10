//
// Created by Anton Karpov on 03.04.2021.
//

#include "SceneManager.h"

namespace sr
{

    void SceneManager::AddScene (SceneRef newScene, bool isReplacing)
    {
        _isAdding = true;
        _isReplacing = isReplacing;

        _newScene = std::move(newScene);
    }

    void SceneManager::RemoveScene ()
    {
        _isRemoving = true;
    }

    void SceneManager::ProcessSceneChanges ()
    {
        if (_isRemoving && !_scenes.empty())
        {
            _scenes.pop();

            if (!_scenes.empty())
            {
                _scenes.top()->Resume();
            }

            _isRemoving = false;
        }

        if (_isAdding)
        {
            if (!_scenes.empty())
            {
                if (_isReplacing)
                {
                    _scenes.pop();
                }
                else
                {
                    _scenes.top()->Pause();
                }
            }

            _scenes.push(std::move(_newScene));
            _scenes.top()->Init();
            _isAdding = false;
        }
    }

    SceneRef &SceneManager::GetActiveScene ()
    {
        return _scenes.top();
    }
}