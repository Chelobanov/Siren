//
// Created by Anton Karpov on 28.03.2021.
//

#include "Component.h"

namespace sr
{
    std::ostream& operator<< (std::ostream& os, Component &component)
    {
        os << component._name;
        return os;
    }

    Component::Component(GameObject *objPtr)
    {
        _obj = objPtr;
        _name = "";
    }

    GameObject* Component::GetObject()
    {
        return _obj;
    }


    Collider::Collider(GameObject* objPtr) : Component(objPtr)
    {
        _name = "collider";
    }

    void Collider::SetColor(sf::Color color)
    {
        _color = color;
    }

    Renderer::Renderer(GameObject* objPtr) : Component(objPtr)
    {
        _name = "renderer";
    }

    Script::Script(GameObject *objPtr) : Component(objPtr)
    {
        _name = "script";
        // add : add object to ScriptManager internal storage
    }

    Physics::Physics(GameObject *objPtr, bool gravity, bool momentumCollision) : Component(objPtr)
    {
        _name = "physics";
        _gravity = gravity;
        _momentumCollision = momentumCollision;
        // add : add object to PhysicsManager internal storage
    }
}


