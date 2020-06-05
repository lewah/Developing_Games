#include <iostream>
using namespace std;
bool gameOver;

void Settings()
{
    gameOver = false;
}
void visual()
{

}
void logic()
{

}
void input()
{

}
int main()
{
    Settings();
    while(!gameOver)
    {
        visual();
        input();
        logic();
    }
    return 0;
}
