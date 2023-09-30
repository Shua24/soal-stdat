#include "cone.h"
float volume(Cone cn)
{
    // error handling
    if(cn.height > 0)
    {
        return Pi * cn.rad * cn.rad * (cn.height / 3.0);
    }
    else
    {
        return 0.0;
    }
}

float base(Cone cn)
{
    // error handling
    if(cn.rad > 0)
    {
        return Pi * cn.rad * cn.rad;
    }
    else
    {
        return 0.0;
    }
}
