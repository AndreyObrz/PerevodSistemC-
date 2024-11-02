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
    int summa1 = 0;
    double summa2 = 0;
    counts = 0;
    i = 0;
    while (s[i] != '\0') {
        if (s[i] == '.') { counts = 1; }
        else {
            if (counts == 0) {
                if ((int)s[i] - 55 >= 10) {
                    summa1 = summa1 + ((int)s[i] - 55) * pow(f, d);
                    d--;
                }
                else {
                    summa1 = summa1 + ((int)s[i] - 48) * pow(f, d);
                    d--;
                }
            }

            if (counts == 1) {
                if ((int)s[i] - 55 >= 10) {
                    summa2 = summa2 + ((int)s[i] - 55) * pow(f, d);
                    d--;
                }
                else {
                    summa2 = summa2 + ((int)s[i] - 48) * pow(f, d);
                    d--;
                }
            }
        }
        i++;
    }



    system("pause");
    return EXIT_SUCCESS;
}

