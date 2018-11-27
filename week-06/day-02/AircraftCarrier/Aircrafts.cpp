#include "Aircrafts.h"

Aircrafts::Aircrafts() {}

void Aircrafts::fight() {
    std::cout<<"Caused damage: "<< _ammo * _baseDamage<<std::endl;
    _ammo = 0;
    std::cout<<"Out of ammo"<<std::endl;
}

void Aircrafts::refill(int &reAmmo) {
    int x = 0;
    _maxAmmo - _ammo == x;
    _ammo = _maxAmmo;
    reAmmo -= x;
    std::cout<<"Refilled ammo to max("<<_maxAmmo<<") on aircraft"<<std::endl;
    std::cout<<"Remaining ammo: "<<reAmmo<<std::endl;
}

std::string Aircrafts::getType() {
    switch(_type){
        case (Type::F16):
            std::cout<<"F16"<<std::endl;
            return "F16";
        case (Type::F35):
            std::cout<<"F35"<<std::endl;
            return "F35";
    }
}

std::string Aircrafts::getStatus() {
    std::cout<<"Type "<<getType()<<", Ammo: "<<_ammo<<", Base damage: "<<_baseDamage<<", All damage: "<< _ammo * _baseDamage<<std::endl;
    return "Type " + getType() + ", Ammo: " + std::to_string(_ammo) + ", Base damage: " + std::to_string(_baseDamage) + ", All damage: " + std::to_string(_ammo * _baseDamage);
}

bool Aircrafts::isPriority() {
    return _priority;
}
