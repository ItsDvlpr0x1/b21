#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#pragma comment(lib, "winmm.lib")
#pragma comment(lib,"kernel32.lib") 
#pragma comment(lib,"winmm.lib")
#include <process.h>
#include "irrKlang.h"
#include <conio.h>
#include "consolesize.h"
#define _USE_MATH_DEFINES

using namespace std;
using namespace irrklang;

HANDLE meConsole;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

int main(int argc, const char** argv)
{
    consolesize();
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISoundEngine* SoundEngine = createIrrKlangDevice(); //Старт музыки
    meConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Для цветного текста

    /////////////////////////// Вступление 
        irrklang::ISound* aboba = SoundEngine->play2D("aboba.wav", true, false, true); //Фоновая музыка

    
    std::string vstuplenie = "--------------------------------------------------------------------------------\n";
    for (auto letter : vstuplenie)
    {       
        
        std::cout << letter;
        std::this_thread::sleep_for(0.01s);
    }
    
    irrklang::ISound* print = SoundEngine->play2D("print.wav", true, false, true); //Принт

    std::string vstuplenie1 = "Приветствуем вас в альфе <Bunny21>!\n";
    for (auto letter : vstuplenie1)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
    }

    std::string vstuplenie2 = "Этот текст вы будете видеть каждый раз, как запускаете игру, но это временная мера :)\n";
    for (auto letter : vstuplenie2)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
    }

    std::string vstuplenie3 = "В разработке принимали участие:\n";
    for (auto letter : vstuplenie3)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
    }

    std::string vstuplenie4 = " ->";
    for (auto letter : vstuplenie4)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
    }

    std::string dvlpr = " Dvlpr_0x1\n";
    for (auto letter : dvlpr)
    {
        SetConsoleTextAttribute(meConsole, Red);
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
        SetConsoleTextAttribute(meConsole, White);
    }

    std::string vstuplenie5 = " *** Идея и разработка\n";
    for (auto letter : vstuplenie5)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
    }
    Sleep(1);
    // Суратор ////////////////////////////////////////////
    std::string vstuplenie6 = " ->";
    for (auto letter : vstuplenie6)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
    }

    std::string surator = " Saturator\n";
    for (auto letter : surator)
    {
        SetConsoleTextAttribute(meConsole, Red);
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
        SetConsoleTextAttribute(meConsole, White);
    }

    std::string vstuplenie7 = "*** Звуки, музыка и правки в тексте:)\n";
    for (auto letter : vstuplenie7)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.05s);
    }

    print->stop();

    std::string vstuplenie9 = "--------------------------------------------------------------------------------\n";
    for (auto letter : vstuplenie9)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.01s);
    }


    for (int i = 0; i < '5'; i++)
    {
        cout << "\n";
        Sleep(20);
    }



    /// Начало игры 
    irrklang::ISound* print2 = SoundEngine->play2D("print.wav", true, false, true); //Принт

    string name;
    std::string word = "[ :) ] Привет!\n";
    for (auto letter : word)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print2->stop(); //Stop Print

    Sleep(1000);
    irrklang::ISound* print3 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word1 = "[ :) ] Давай познакомимся!\n";
    for (auto letter : word1)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print3->stop();

    Sleep(1000);
    irrklang::ISound* print4 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word2 = "[ :) ] Я - исскуственный интелект Bunny\n";
    for (auto letter : word2)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print4->stop(); //Stop Print

    Sleep(1000);
    irrklang::ISound* print5 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word3 = "[ :) ] Bunny21\n";
    for (auto letter : word3)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print5->stop(); //Stop Print

    Sleep(1000);
    irrklang::ISound* print6 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word4 = "[ :) ] Хотя мне больше нравится просто Bu\n";
    for (auto letter : word4)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print6->stop(); //Stop Print

    Sleep(2000);
    irrklang::ISound* print7 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word5 = "[ :) ] А как тебя звать?\n";
    for (auto letter : word5)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print7->stop(); //Stop Print

    Sleep(2000);
    irrklang::ISound* print8 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word6 = "[ :( ] Прости, я просто маленький исскуственный интеллект, который не может узнать даже имя компьютера\n";
    for (auto letter : word6)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print8->stop(); //Stop Print

    Sleep(3000);
    irrklang::ISound* print9 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word7 = "[ :( ]\n";
    for (auto letter : word7)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print9->stop(); //Stop Print
    Sleep(1000);
  //  irrklang::ISound* print10 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word8 = ". . .\n";
    for (auto letter : word8)
    {
        std::cout << letter;
        std::this_thread::sleep_for(1s);
    }
 //   print10->stop(); //Stop Print
    Sleep(2000);
    irrklang::ISound* print11 = SoundEngine->play2D("print.wav", true, false, true); //Принт
    std::string word9 = "[ :) ] Ну так, и как тебя звать?\n";
    for (auto letter : word9)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }
    print11->stop(); //Stop Print
    Sleep(1000);

    std::string word10 = "[ Ввод разрешен ]\n";
    for (auto letter : word10)
    {
        std::cout << letter;
        std::this_thread::sleep_for(0.07s);
    }

    cin >> name;
/*
    Sleep(2000);
    //////////// СОБЫТИЕ, ЕСЛИ ВВОДИТЬ ЦИФРЫ В ИМЯ [НАЧАЛО]
    if (name == "0")
    {
        cout << "[ Dvlpr_0x1 ] Любишь нули? Я тоже!\n";
        Sleep(2000);
        cout << "[ ?_? ] <Нули>?\n";
        Sleep(2000);
        cout << "[ :) ] Звучит великолепно! Мне оно тоже по нраву!\n";
        Sleep(2000);
        cout << "[ Dvlpr_0x1 ] К сожалению, с таким именем я тебя пустить не могу.\n";
        Sleep(1000);
        cout << "[ Ввод разрешен ]\n";
        cin >> name;
    }

    Sleep(2000);
    std::cout << "[ :) ] " << name << "?\n";
    Sleep(2000);
    std::cout << "[ :) ] Наверное, классное имя!\n";
    Sleep(2000);
    std::cout << "[ :( ] Жаль, я совсем не разбираюсь в людях и не могу его оценить!\n";
    Sleep(2000);
    std::cout << "[ :) ] Давай попробуем развлечься\n";
    Sleep(2000);
    std::cout << "[ :) ] У меня в базе должны быть что-то интересное...\n";
    Sleep(2000);
    std::cout << "[ :) ] Подожди\n";
    Sleep(1500);
    std::cout << "[ 0.0 ] эээ..\n";
    Sleep(1500);
    std::cout << "[ 0v0 ] 4 с половиной секунды!\n";
    */

}
