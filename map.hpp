#ifndef __MAP_HPP__
  #define __MAP_HPP__
class Map{
public:
  void changeMap(int mapNum);
private:
  int _dimensionX;
  int _dimensionY;
  int *currentMap;
  int *listMap;

};

#endif 
