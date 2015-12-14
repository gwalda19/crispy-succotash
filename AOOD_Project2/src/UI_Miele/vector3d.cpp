#include "vector3d.h"

vector3D::vector3D()
{
    init();
}

vector3D::vector3D(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void vector3D::init()
{
    memset( this, 0, sizeof(*this) );
}
