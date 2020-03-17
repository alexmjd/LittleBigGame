#include "EnnemyFactory.h"
#include "Ennemy.h"

EnnemyFactory EnnemyFactory::_instance = EnnemyFactory();

EnnemyFactory::EnnemyFactory() {}
EnnemyFactory::~EnnemyFactory() {}

EnnemyFactory &EnnemyFactory::GetInstance() {
    return _instance;
}

std::unique_ptr<Ennemy> EnnemyFactory::Create(Space &space, float y) {

    // space.add(std::make_unique<Ennemy>(space));
    // space.add(std::unique_ptr<Ennemy>());
    return std::make_unique<Ennemy>(space, y);
    // return std::unique_ptr<Ennemy>();
    // return std::make_unique<Ennemy>(space);
}