#include <headers/map.hpp>
void Map::changeMap(int *mapNum){
  _currentMap=mapNum;
};
int Map::currentMapNum(){
  return *_currentMap;
};
