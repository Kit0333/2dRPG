#include<iostream>
#include <headers/player.hpp>

Player::Player(){
    _name="Player";
    _hp=20;
    _mp=20;
    _damage=1;
    _defense=1;
};

Player::Player(char name[]){
    _name=&name[0];
    _hp=20;
    _mp=20;
    _damage=1;
    _defense=1;
};


void Player::stats(){
    std::cout<<"Name : "<<_name<<"\n";
    std::cout<<"Hp : "<<_hp<<"\n";
    std::cout<<"Mp : "<<_mp<<"\n";
    std::cout<<"Damage : "<<_damage<<"\n";
    std::cout<<"Defense : "<<_defense<<"\n";

};
