#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "SpaceElement.h"


class Explosion : public SpaceElement
{
    public:
        Explosion(Coordinate const& p_position);

        virtual void crashReaction() override;

    protected:
        virtual void update(float time) override;

    private:
        float age{};
        static constexpr float LIFETIME{0.5f};
};

#endif // EXPLOSION_H
