#include <iostream>
#include < cmath>

using namespace std;

enum enNumber_Type { Even = 1, ODD = 2 };

int Read_Number()
{
    int Num;

    cout << "Please Enter a Num : \n";
    cin >> Num;

    return Num;
}

enNumber_Type check_Number(int Num)
{
    int Result = Num % 2;

    if (Result == 0)
        return enNumber_Type::Even;
    else
        return enNumber_Type::ODD;
}

void Print_Number(enNumber_Type Number_Type)
{
    if (Number_Type == enNumber_Type::Even)
        cout << "Even Number ! \n";
    else
        cout << "ODD Number : \n";
}

int main()
{
    Print_Number(check_Number(Read_Number()));


    system("color 4F");
    system("pause>0");
    return 0;
}