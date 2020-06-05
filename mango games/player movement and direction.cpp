#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
bool gameOver;
int tailx[60], taily[60];
int nTail;

const int width = 20;
const int height = 20;

int x, y, fruitx, fruity, score;
enum eDirection {STOP=0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Settings()
{
    gameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitx = rand() % width;
    fruity = rand() % height;
    score = 0;
}
void visual()
{
  system("cls");
  for(int i = 0; i< width+2; i++)
  {
      cout<<"#";
  }
  cout<<endl;

   for(int i = 0; i< height; i++)
   {
       for(int j = 0; j< width+2; j++)
       {
            if (j==0)
            cout<<"#";
            if(i == y && j == x)
                cout<<"O";
            else if(i ==fruity && j == fruitx)
                cout<<"*";
            else
            {
                bool printtail = false;
                for(int k = 0; k<nTail; k++)
                {
                    if(tailx[k] == j && taily[k] == i)
                    {
                        cout<<"o";
                        printtail = true;
                    }
                }
                if(!printtail)
                cout<<" ";
            }


            if (j == width - 1)
              cout<<"#";
       }
        cout<<endl;
   }
  for(int i = 0; i< width+2; i++)
  {
      cout<<"#";
  }
  cout<<endl;
  cout<<"score: "<<score<<endl;
}

void logic()
{
    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x, prev2y;
    tailx[0] = x;
    taily[0] = y;

    for (int i = 1; i < nTail; i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prev2x = prevx;
        prev2y = prevy;
    }
//
  switch(dir)
  {
  case LEFT:
    x--;
    break;
  case RIGHT:
    x++;
    break;
  case UP:
    y--;
    break;
  case DOWN:
    y++;
    break;
  default:
    break;
  }

  if(x>=width)
    x=0;
  else if (x<0)
    x=width-1;
  if(y>=height)
    y=0;
  else if (y<0)
    y=height - 1;

  if(x == fruitx && y == fruity)
  {
      score ++;
      fruitx = rand() % width;
      fruity = rand() % height;
      nTail++;
  }
}
void input()
{
   if(_kbhit())
   {
       switch(_getch())
       {
       case 'a':
        dir = LEFT;
        break;
        case 'd':
        dir = RIGHT;
        break;
        case 'w':
        dir = UP;
        break;
        case 's':
        dir = DOWN;
        break;
        case 'x':
        gameOver = true;
        break;
       }
   }
}
int main()
{
    Settings();
    while(!gameOver)
    {
        visual();
        input();
        logic();
        Sleep(10);
    }
    return 0;
}

