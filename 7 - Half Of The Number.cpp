#include <iostream>
#include <string>

using namespace std;

float ReadNumber()
{
    float Num;

    cout << "Please Enter  A Number : \n";
    cin >> Num;

    return Num;
}

float Half_Num(float Num)
{
    return (float)Num / 2;
}

void PrintNumber(float Num)
{
    string Result = "The Half of " + to_string(Num) + " is : " + to_string(Half_Num(Num));
    cout << Result << endl;
}

int main()
{
    PrintNumber(ReadNumber());

    system("color 6F");
    system("pause>0");
    return 0;
}