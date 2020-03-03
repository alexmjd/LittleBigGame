#include "Bullet.h"

Bullet::Bullet(Coordinate const& p_position) :
SpaceElement("ressources/missile.png")
{
    position = p_position;
    speed = Vecteur{VITESSE, 0.1f};
    type = ElementType::BULLET;
} 

void Bullet::crashReaction(ElementType otherType)
{
    if (otherType == type)
        destruct = true;
}