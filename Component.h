#ifndef GAME_COMPONENT_H
#define GAME_COMPONENT_H

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

namespace sr
{
    class ScriptManager;
    class GraphicsManager;
    class GraphicsManager;

    class GameObject;

    class Component
    {
    public:
        std::string _name;
        GameObject* _obj;

    public:
        explicit Component (GameObject* objPtr);

        friend std::ostream& operator<< (std::ostream &os, Component &component);

        GameObject* GetObject();
    };

    class Collider : public Component
    {
    public:
        std::vector<sf::Vector2f> _vertices;
        sf::Color _color = sf::Color::Red;

    public:
        explicit Collider (GameObject* objPtr);

        void SetColor (sf::Color color);
    };

    class Renderer : public Component
    {
    public:
        sf::Sprite _sprite;

    public:
        explicit Renderer(GameObject* objPtr);
    };

    class Script : public Component    // add later
    {
    public:
        explicit Script(GameObject* objPtr);
    };

    class Physics : public Component
    {
    public:
        bool _gravity = false;
        bool _momentumCollision = false;
        double _mass = 1.; ///????

    public:
        explicit Physics(GameObject* objPtr, bool gravity = false, bool momentumCollision = false);
    };
}

#endif //GAME_COMPONENT_H