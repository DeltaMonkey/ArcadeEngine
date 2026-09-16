#pragma once

#include <SFML/Window/Event.hpp>

class Engine;

struct EngineVisitor
{
    Engine& engine;

    void operator()(const sf::Event::Closed&);
    void operator()(const auto&) {}
};