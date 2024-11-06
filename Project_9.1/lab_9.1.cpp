//////////////////////////////////////////////////////////////////////////////
// Lab_9_1.cpp
// Головний файл проекту – функція main
#include <iostream>
#include <cmath>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << endl;

    x = xp;
    cout << fixed;
    cout << "----------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(15) << "ln((x+1)/(x-1))" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |" << endl;
    cout << "----------------------------------------------" << endl;

    while (x <= xk) {
        sum();
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(15) << setprecision(5) << log((x + 1) / (x - 1)) << " |"
            << setw(10) << setprecision(5) << s * 2 << " |"
            << setw(5) << n << " |" << endl;
        x += dx;
    }

    cout << "----------------------------------------------" << endl;
    cin.get();
    return 0;
}
