#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__
#include <iostream>
#include <string>
#include <entity.hpp>


class Player:public Entity{
public:
    Player();
    Player(char name[]);
    void attack(bool entityForward);
    void stats();




};

#endif
