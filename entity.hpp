#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__
#include <iostream>
class Entity{
  public:
     virtual void stats()=0;
     virtual void attack(bool entityForward)=0;
  
  
  private:
     char* _name;
     float _defense;
     float _hp;
     float _mp;
     float _damage;
  
  
  
};


#endif
