// Guessthenumb.cpp : 这是一个让玩家猜数字的小游戏，程序中包含 "main" 函数 和 "guess"函数。主函数是程序执行的起点，
// 进入主函数后会生产一个20以内的随机数待玩家猜，然后调用"guess"函数判断玩家输入的数字是否符合刚才生成的随机数。

#include <iostream>
#include <string>
#include <time.h>
using namespace std;
bool guess(int );

int main()
{
    while (true) {
        cout << "Guess the secret number in the magician's hat (from 1 to 20).\n" <<
            "You have 5 chances in each round. If your guess is too high or too low, you'll get a hint. " << endl;
        srand((int)time(0));
        int number = rand() % 20 + 1;
        bool youguess = guess(number);
        if (youguess == true) {
            return (0);
        }
        else if(youguess == false) {
            cout << "You lost, try agian." << endl;
            cout << "" << endl;
        }
    }
}

bool guess(int innumber)
{   
    int thenumber = innumber;
    bool success = false;
    for (int i = 0; i < 5; i++)
    {
        cout << "You guess:" << flush;
        int numberGuess;
        cin >> numberGuess;
        if (numberGuess > thenumber) {
            cout << "too high." << endl;
        }else if (numberGuess == thenumber) {
            cout << "You guessed it." << endl;
            success = true;
            break ;
        }else {
            cout << "too low." << endl;
        }
    }
    return success ;
}
