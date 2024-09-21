#include <iostream>
using namespace std;

void ReadNum(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter The First Number : \n";
    cin >> Num1;
    cout << "Please enter The Second Number :\n";
    cin >> Num2;
    cout << "Pleasee enter The Third Number : \n";
    cin >> Num3;
}

int Maximun(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2 && Num1 > Num3)
        return Num1;

    else if (Num2 > Num1 && Num2 > Num3)
        return Num2;

    else
        return Num3;
}


void Print(int Max)
{
    cout << "The Max is : " << Max << endl;
}


int main()
{

    int Num1, Num2, Num3;
    ReadNum(Num1, Num2, Num3);
    Print(Maximun(Num1, Num2, Num3));

    system("color 6F");
    system("pause>0");
    return 0;
}