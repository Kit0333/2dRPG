#ifndef __MAP_HPP__
  #define __MAP_HPP__
  
  class Map{
  public:
     void changeMap(int *mapNum);
     int currentMapNum();
  private:
     int _dimensionX;
     int _dimensionY;
     int *_currentMap;
     int *_listMap;

   };

#endif 
