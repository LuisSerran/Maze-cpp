#include <iostream>
#include "Player.h"
#include "GameMap.h"
using namespace std;

int main() 
{
    
    GameMap Map;
    Player Hero;

    Map.DrawIntro();
    Map.Draw();
  
    cout << "---------------" << endl;
    cout << "Inicia el juego" << endl;

  while(Map.isGameOver == false)
        {
            //Aquí es el loop de nuestro juego
            cout << "Introduce el comando para moverte: 'w''a''s''d'" << endl;
            Hero.CallInput();

            //Actualizado de informacion heroe a mapa
            if(Map.SetPlayerCell(Hero.XAxis(), Hero.YAxis()))
            {
                Map.Draw(); 
            } 
            else
            {
              Hero.ResetToSafety();
                Map.Draw();
            }


            //Aqui dibujamos el mapa
            Map.Draw();





        }


      return 0;
  }