/*Sadko Viacheslav*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    while(true)
    {
    float a, b, c, y, x1, x2, h;
    cout << "Введiть х початкове: ";
    cin >> x1;
    cout << "Введiть х кiнцеве: ";
    cin >> x2;
    cout << "Крок h: ";
    cin >> h;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if (x1 < x2 && h<0 || x1 > x2 && h > 0)  //у випадку, якщо крок встановлений невірно. Можливість попередити помилку у виконанні програми
    {
        while (x1 < x2 && h<0 || x1 > x2 && h > 0)
        {
            cout << "Невірно встановлений крок, будь ласка, введіть коректне значення";     //корегуємо лише крок, тому, що не передбачаний невірно встановслений х початковий та кінцевий
            cout << "Крок h: ";
            cin >> h;
        }
    }
    cout<<"|"<<setw(10)<<"x"<<setw(10)<<"|"<<setw(10)<<"y"<<setw(10)<<"|"<<endl;
    cout<<"-----------------------------------------\n";
    if (x1 < x2 && h>0) //зсув по вісі Х вправо
    {
        for (float x = x1; x <= x2; x += h)
        {
            if (x < 0 && b < 0)
            {
                y = 2 * a * x + b * pow(x, 3);
                cout<<"|"<<setw(10)<<x<<setw(10)<<"|"<<setw(10)<<y<<setw(10)<<"|"<<endl;
            }
            else if (x > 0 && b >= 0)
            {
                if (x != -(a / c))
                {
                    y = sqrt(pow(x, 3)) + ((2 * pow(x, 2)) / (c * x + a));
                    cout<<"|"<<setw(10)<<x<<setw(10)<<"|"<<setw(10)<<y<<setw(10)<<"|"<<endl;
                }
                else
                {
                    cout << "рівняння невизнечене у цій точці\n";
                }
            }
            else
            {
                y = a * pow(x, 2) * (x + a) + pow((x - a * b), 2);
                cout<<"|"<<setw(10)<<x<<setw(10)<<"|"<<setw(10)<<y<<setw(10)<<"|"<<endl;
            }
            cout<<"-----------------------------------------\n";
        }
    }
    else if (x1 > x2 && h < 0) //зсув по вісі Х вліво
    {
        for (float x = x1; x >= x2; x += h)
        {
            if (x < 0 && b < 0)
            {
                y = 2 * a * x + b * pow(x, 3);
                cout<<"|"<<setw(10)<<x<<setw(10)<<"|"<<setw(10)<<y<<setw(10)<<"|"<<endl;
            }
            else if (x > 0 && b >= 0)
            {
                if (x != -(a / c))
                {
                    y = sqrt(pow(x, 3)) + ((2 * pow(x, 2)) / (c * x2 + a));
                    cout<<"|"<<setw(10)<<x<<setw(10)<<"|"<<setw(10)<<y<<setw(10)<<"|"<<endl;
                }
                else
                {
                    cout << "рівняння невизнечене у цій точці\n";
                }
            }
            else
            {
                y = a * pow(x, 2) * (x + a) + pow((x - a * b), 2);
                cout<<"|"<<setw(10)<<x<<setw(10)<<"|"<<setw(10)<<y<<setw(10)<<"|"<<endl;
            }
            cout<<"-----------------------------------------\n";
        }
    }
    }
}
