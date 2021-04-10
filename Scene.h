//
// Created by Anton Karpov on 03.04.2021.
//

#ifndef GAME_SCENE_H
#define GAME_SCENE_H

namespace sr
{
    class Scene
        {
        public:
            virtual void Init() = 0;

            virtual void HandleInput() = 0;
            virtual void Update(float dt) = 0;
            virtual void Draw(float dt) = 0;

            virtual void Pause() { }
            virtual void Resume() { }
        };
    }
}
#endif //GAME_SCENE_H
