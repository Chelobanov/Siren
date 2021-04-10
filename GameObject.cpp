//
// Created by Anton Karpov on 30.03.2021.
//

#include "GameObject.h"

namespace sr
{
    GameObject::~GameObject()
    {
        // std::cout << "destructor is called" << std::endl;    ///

        std::map<std::string, Component*>::iterator it;

        for (it = _components.begin(); it != _components.end(); it++)
        {
            delete it->second;
        }
    }

    std::ostream &operator<<(std::ostream &os, GameObject &obj)
    {
        std::map<std::string, Component*>::iterator it;

        for (it = obj._components.begin(); it != obj._components.end(); it++)
        {
            os << it->first << ' ' << *(it->second) << std::endl;
        }

        return os;
    }
}