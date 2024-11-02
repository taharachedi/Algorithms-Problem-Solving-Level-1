#include <iostream>
using namespace std;

void ReadNumber(int& Num1, int& Num2, int& Num3)   // By-Ref!
{
    cout << "Please Enter The First Number : \n";
    cin >> Num1;
    cout << "Please Enter The Second Number : \n";
    cin >> Num2;
    cout << "Please Enter The Third Number : \n";
    cin >> Num3;
}

int Sum(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void Print(int Total)
{
    cout << "The Total is : " << Total << endl;
}


int main()
{
    int Num1, Num2, Num3;
    ReadNumber(Num1, Num2, Num3);
    Print(Sum(Num1, Num2, Num3));


    system("color 6F");
    system("pause>0");
    return 0;
}