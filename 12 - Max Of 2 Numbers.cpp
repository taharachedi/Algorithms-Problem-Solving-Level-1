#include <iostream>
using namespace std;

void ReadNum(int& Num1, int& Num2)
{
    cout << "Please enter The First Number : \n";
    cin >> Num1;
    cout << "Please enter The Second Number : \n";
    cin >> Num2;
}

int Maximun(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void Print(int Max)
{
    cout << "The Max is : " << Max << endl;
}


int main()
{
    int Num1, Num2;
    ReadNum(Num1, Num2);
    Print(Maximun(Num1, Num2));


    system("color 6F");
    system("pause>0");
    return 0;
}