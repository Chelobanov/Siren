//
// Created by Anton Karpov on 30.03.2021.
//

#ifndef GAME_GAMEOBJECT_H
#define GAME_GAMEOBJECT_H

#include "Component.h"
#include <map>
#include <string>
#include <typeinfo>
#include "Log.h"

namespace sr
{
    class GameObject
    {
    private:
        std::map<std::string, Component*> _components;

    public:
        GameObject () = default;
        ~GameObject ();

        friend std::ostream& operator<< (std::ostream &os, GameObject &obj);

        template<class T>
        void AddComponent()
        {
            _components[typeid(T).name()] = new T(this);
        }

        template<class T>
        T* GetComponent()
        {
            if (_components.count(typeid(T).name()))
            {
                return static_cast<T*>(_components[typeid(T).name()]);
            }

            else
            {
                Log::Error(__FILE__, __LINE__, __FUNCTION__, "component not found");
                return nullptr;
            }
        }

        template<class T>
        void RemoveComponent()
        {
            _components.erase(typeid(T).name());
        }
    };

}
#endif //GAME_GAMEOBJECT_H
