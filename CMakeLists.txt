cmake_minimum_required(VERSION 3.17)
project(Game)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(Game main.cpp Siren.h Component.h Component.cpp Component.h GameObject.cpp GameObject.h Log.h Storage.cpp Storage.h GraphicsManager.cpp GraphicsManager.h Scene.h SceneManager.cpp SceneManager.h App.cpp App.h ScriptManager.cpp ScriptManager.h PhysicsManager.cpp PhysicsManager.h)

target_link_libraries(Game sfml-graphics sfml-audio sfml-system sfml-window)

