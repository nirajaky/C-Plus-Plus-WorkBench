#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

bool gameOver = false;
const int width = 40;
const int height =20;
int x, y, FruitX, FruitY, score;

enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    FruitX = rand() % width;
    FruitY = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls"); // system("clear");
    for(int i = 0; i <= width ; i++)
    {
        cout << "@";
    }
    cout << endl;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j< width; j++)
        {
            if(j == 0 || j == (width - 1)){
                cout << "@";
            }
            if(i == y && j == x) {
                cout << "O";
            }
            else if(i == FruitY && j == FruitX) {
                cout << "F";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }


    for(int i = 0; i <= width ; i++)
    {
        cout << "@";
    }
    cout << endl;
    cout << " SCORE : " << score << endl;
}
void Input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
        case 'a' :
            dir = LEFT;
            break;

        case 'd' :
            dir = RIGHT;
            break;

        case 'w' :
            dir = UP;
            break;

        case 's' :
            dir = DOWN;
            break;

        case 'x' :
            gameOver = true;
            break;
        }
    }
}
void Logic()
{
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
    if(x > width || x < 0 || y > height || y < 0)
        gameOver = true;
    if(x == FruitX && y == FruitY)
    {
        score +=10;
        FruitX = rand() % width;
        FruitY = rand() % height;
    }

}
int main()
{

    Setup();
    while(!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(10);

    }
    return 0;
}
