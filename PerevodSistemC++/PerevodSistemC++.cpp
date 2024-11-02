#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int counts = 0;

    double d  = -1;
    char s[100];
    cin.getline(s, 100);
    int i = 0;
    double f;
    cin >> f;
    while (s[i] != '\0') {
        if (s[i] == '.') {
            counts = 1;
        }
        if (counts == 0) {
            d++;
        }
        i++;
    }

    system("pause");
    return EXIT_SUCCESS;
}

