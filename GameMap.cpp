#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
  PlayerCell = NULL;
  LoadMap();
  isGameOver = false;
}
void GameMap::Draw()
{
  for(int i = 0; i < 21; i = i + 1)
    {
      for(int p = 0; p < 51; p = p + 1)
        {
          cout << Cells[i][p].id;
        }
        cout << endl;
    }
}

bool GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
  if(Cells[PlayerX][PlayerY].IsBlocked() == false)
  {   
      if(Cells[PlayerX][PlayerY].id == '$')
      {
        DrawVictory();
        isGameOver = true;
        return true;
      }
      else 
      {
        if(PlayerCell != NULL)
          {
              PlayerCell->id= ' ';
          }
        PlayerCell = &Cells[PlayerX][PlayerY];
        PlayerCell->id = '3';
      }
      
    
      return true;
  }
  else
  {
      return false;
  }
}

void GameMap::DrawIntro()
{
    string line;
    ifstream MyFile("Intro.txt");

    if(MyFile.is_open())
    {
        while(getline(MyFile, line))
          {
            cout << line << endl;
          }
      cin >> line;
          //cout << "final prueba de dibujado." << endl;
    }    
    else{
        cout << "Fatal error" << endl;
    } 
}

void GameMap::DrawVictory()
{
    string line;
    ifstream MyFile("Victory.txt");

    if(MyFile.is_open())
    {
        while(getline(MyFile, line))
          {
            cout << line << endl;
          }
      cin >> line;
          //cout << "final prueba de dibujado." << endl;
    }    
    else{
        cout << "Fatal error" << endl;
    } 
}

void GameMap::LoadMap()
{
    /* string line;
    ifstream MyMap("MyMap.txt");
    if(MyMap.is_open()) 
    {
      for(int i = 0; i < 21; i++)
      {
        getline(MyMap,line);
        for(int p = 0; p < 51; p ++)
        {
          Cells[i][p].id = line[p];
        }
      }
      MyMap.close();
    }
    else
    {
      cout << " Map file couldn´t be read" << endl;
    } */
  
  string line;
  int row = 0;
  ifstream MyFile("MyMap.txt");

  if(MyFile.is_open())
  {
      while(getline(MyFile, line))
        {
          for(int p = 0; p < line.length(); p = p + 1 )
            { 
              if(line[p] == '0')
                  Cells[row][p].id = line[p];
              else{
                Cells[row][p].id = line[p];
              }
            }

            row++;
        }
        //cout << "final prueba de dibujado." << endl;
  }    
  else{
      cout << "Fatal error" << endl;
  } 
  
}