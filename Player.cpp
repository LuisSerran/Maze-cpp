#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}
// declaramos su funcionalidad que es regresarnos el entero
int Player::XAxis()
{
    return x;
}
int Player::YAxis()
{
    return y ;
}

void Player::CallInput()
{
  char UserInput = ' ';
  
  cin >> UserInput;
  
  lastX = x;
  lastY = y;
  switch(UserInput)
    {
      case 'w':
          x = x - 1;
          //cout << "Arriba" << endl;
        break;
      case 's':
          x = x + 1;
          //cout << "Abajo" << endl;
      break;
      case 'd':
          y = y + 1;
          //cout << "Derecha" << endl;
      break;
      case 'a':
          y = y - 1;
          //cout << "Izquierda" << endl;
      break;
    }
      //cout << " Mi jugador está en las coorednadas :" << x << " , " << y << endl;
}

void Player::ResetToSafety()
{
  x = lastX;
  y = lastY;
}