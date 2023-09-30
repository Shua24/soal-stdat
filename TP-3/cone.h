#ifndef CONE_H_DEFINED /*DEFINE CONE_H*/
#define CONE_H_DEFINED

#define Pi 3.14159

struct Cone
{
    int rad, height;
};

float volume(Cone cn);
float base(Cone cn);

#endif /*CONE_H_DEFINED*/
