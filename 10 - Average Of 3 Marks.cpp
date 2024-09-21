#include <iostream>
using namespace std;


void ReadNum(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter The First number : \n";
    cin >> Num1;
    cout << "Please enter The Second Number : \n";
    cin >> Num2;
    cout << "Please enter The Third Number : \n";
    cin >> Num3;
}


int Sum(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

float Average(int Num1, int Num2, int Num3)
{
    return (float)Sum(Num1, Num2, Num3) / 3;
}

void Print(float Avg)
{
    cout << "The Average is : " << Avg << endl;
}



int main()
{
    int Num1, Num2, Num3;
    ReadNum(Num1, Num2, Num3);
    Print(Average(Num1, Num2, Num3));


    system("color 6F");
    system("pause>0");
    return 0;
}