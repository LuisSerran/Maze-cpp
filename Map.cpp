#include "Map.h"
#include <iostream>


using namespace std;

Map::Map()
{
  id = 0;
}

bool Map::IsBlocked()
{
  if(id == '1') // simbolo que representa la pared
  {
    return true;
  }
  else{
    return false;
  }
}