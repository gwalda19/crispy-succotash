#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <stdio.h>
#include <string.h>

struct vector3D
{
public:
    vector3D();
    vector3D(float x, float y, float z = 0);
    void init();

    float x;
    float y;
    float z;
};

#endif // VECTOR3D_H
