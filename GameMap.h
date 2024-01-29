#include <iostream>
#include "Map.h"

class GameMap
{
    public:
        GameMap();

        Map* PlayerCell;
        Map Cells[21][51];

        void DrawIntro();
        void DrawVictory();
        void Draw();

        //esta funcion obtiene coordenadas de player y actualiza el mapa
        bool SetPlayerCell(int PlayerX, int PlayerY);

        bool isGameOver = false;

    protected:
        void LoadMap();
        
};