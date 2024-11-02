#include <iostream>
using namespace std;

void ReadNumber(int& Num1, int& Num2)
{
    cout << "Please Enter The First Number : \n";
    cin >> Num1;
    cout << "Please Enter The Second Number : \n";
    cin >> Num2;
}


void Swap(int& Num1, int& Num2)  // By-Ref!
{
    int temp;

    temp = Num1;
    Num1 = Num2;
    Num2 = temp;
}


void Print(int Num1, int Num2)
{
    cout << "Number 1: " << Num1 << endl;
    cout << "Number 2: " << Num2 << endl << endl;
}

int main()
{
    system("color f4");

    int Num1, Num2;

    ReadNumber(Num1, Num2);
    Print(Num1, Num2);

    Swap(Num1, Num2);
    Print(Num1, Num2);

    return 0;
}