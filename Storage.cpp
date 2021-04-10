//
// Created by Anton Karpov on 31.03.2021.
//

#include "Storage.h"

namespace sr
{
    Storage::~Storage()
    {
        for (GameObject* obj_pointer : _objects)
        {
            delete obj_pointer;
        }
    }
}