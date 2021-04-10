//
// Created by Anton Karpov on 30.03.2021.
//

#ifndef GAME_LOG_H
#define GAME_LOG_H

#include <iostream>

class Log
{
public:
    static void Warning(std::string &file, int line, std::string &function, std::string &message)
    {
        std::cout << ("\x1b[35m") << "Warning! " << ("\x1b[0m") << "in file: " << file
                  << ", line " << line << ", " << function << " -> " << message << std::endl;
    }

    static void Error(std::string &file, int line, std::string &function, std::string &message)
    {
        std::cout << ("\x1b[31m") << "Error! " << ("\x1b[0m") << "in file: " << file
                  << ", line " << line << ", " << function << " -> " << message << std::endl;
    }
};


#endif //GAME_LOG_H
