#include <iostream>
using namespace std;

enum enPassFailed { Pass = 1, Failed = 2 };

void ReadNumber(float& Num1, float& Num2, float& Num3)
{
    cout << "Please enter The First Number : \n";
    cin >> Num1;
    cout << "Please enter The Second Number : \n";
    cin >> Num2;
    cout << "Please enter The Third Number : \n";
    cin >> Num3;
}

float Sum(float Num1, float Num2, float Num3)
{
    return Num1 + Num2 + Num3;
}

float Average(float Num1, float Num2, float Num3)
{
    return (float)(Sum(Num1, Num2, Num3)) / 3;
}

enPassFailed checkMark(float Avg)
{

    if (Avg >= 50)
        return enPassFailed::Pass;
    else
        return enPassFailed::Failed;
}

void Print(float Avg)
{

    cout << "The Average is : " << Avg << endl;

    if (checkMark(Avg) == enPassFailed::Pass)
        cout << "Pass " << endl;
    else
        cout << "Failed " << endl;
}

int main()
{

    float Num1, Num2, Num3;
    ReadNumber(Num1, Num2, Num3);
    Print(Average(Num1, Num2, Num3));


    system("color f3");
    system("pause>0");
    return 0;
}