#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;


long int pow(int z, int d);
   
int sum(int a, int b);

int perfectnumber(int x, int y);

void cart(int q, int n);

void showcart();

int isHappy(unsigned int num);


int main()
{
    setlocale(LC_ALL, "");

    //Задание 1
    
    //cout << pow(2, 6);
     
    //Задание 2
    
    //cout << sum(2, 6);
     
    //Задание 3
     
    //int res = perfectnumber(0, 9000);
     
    //задание 4
    
    //showcart();

    //Задание 5
   /* int res = isHappy(933456);
    if (res == 1)
        cout << "happy" << endl;
    else if (res == 0)
        cout << "not happy" << endl;
    else
        cout << "error" << endl;*/
   
}


void showcart() {
    int q;
    int n;
    cout << "Введите масть " << endl
        << "1-Черви" << endl    //3
        << "2-Буби" << endl     //4
        << "3-Крести" << endl   //5
        << "4-Пики" << endl;    //6
    cin >> q;
    system("cls");
    cout << "Введите карту " << endl
        << "1-Шестерка" << endl
        << "2-Семерка" << endl
        << "3-Восьмерка" << endl
        << "4-Девятка" << endl
        << "5-Десятка" << endl
        << "6-Валет" << endl
        << "7-Дама" << endl
        << "8-Король" << endl
        << "9-Туз" << endl;
    cin >> n;
    system("cls");
    switch (q)
    {
    case 1:
        q = 3;
        cart(q, n);
        break;
    case 2:
        q = 4;
        cart(q, n);
        break;
    case 3:
        q = 5;
        cart(q, n);
        break;
    case 4:
        q = 6;
        cart(q, n);
        break;
    default:
        break;
    }
}
void cart(int q,int n) {
    if (n == 1) {
        n = 6;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 2) {
        n = 7;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 3) {
        n = 8;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 4) {
        n = 9;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else if (n == 5) {
        n = 10;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else  if(n == 6) {
        n = 74;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << (char)n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else  if (n == 7) {
        n = 81;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << (char)n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else  if (n == 8) {
        n = 75;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << (char)n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
    else  if (n == 9) {
        n = 84;
        cout << "------" << endl;
        cout << "|" << (char)q << setw(4) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(3) << (char)n << setw(2) << "|" << endl;
        cout << "|    |" << endl;
        cout << "|" << setw(4) << (char)q << "|" << endl;
        cout << "------" << endl;
    }
}
long int pow(int z, int d) {
    if (d == 0) return 1;
    else if (d == 1) return z;
    else return z * pow(z, d - 1);
}
int sum(int a, int b) {
    if (a == b) return a;
    else if (a > b) return a + sum(a - 1, b);
    else if (a < b) return a + sum(a + 1, b);
}
/*int perfectnumber(int x, int y)
{
    for (int i = x; i < y; i++)
    {
        int result = 0;
        for (int j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                result += j;
            }
        }
        if (result == i && result)
        {
            cout << result << " \n";
        }
    }
}*/
int isHappy(unsigned int num)
{
    if (num < 100000 || num > 999999)
        return -1;
    return ((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
}

//Если раскоментить функцию perfectnumber компилятор ругается  и еще начинает ругатся на функцию sum (( решить проблему не смог