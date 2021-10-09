#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

int consolesize()
{
    COORD dummy; /////////////////// На фулл экран консоль

    BOOL bSuccess = SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, &dummy);

    if (!bSuccess) {
        DWORD dwError = GetLastError();
        cerr << dwError << std::endl;
        return 1;
    }

    std::cin.get();
}
