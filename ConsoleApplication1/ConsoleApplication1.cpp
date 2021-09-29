// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double q, w, e, S, P, a, b, c, a1, b1, c1;
  
    cin >> a >> b >> c >> a1 >> b1 >> c1;
    q = sqrt((b - a) * (b - a) + (b1 - a1) * (b1 - a1));
    w = sqrt((c - b) * (c - b) + (c1 - b1) * (c1 - b1));
    e = sqrt((c - a) * (c - a) + (c1 - b1) * (c1 -b1));

    P = (q + w + e);
    S = sqrt((P / 2) * ((P / 2) - q) * ((P / 2) - w) * ((P / 2) - e));


    cout << "Периметр треугольника = " <<P;
    cout << "\n";
    cout << "Площадь треугольника" << S;
}

