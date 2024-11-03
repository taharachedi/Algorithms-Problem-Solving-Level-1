#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int Num;

    cout << "Please Enter The Number  : \n";
    cin >> Num;

    return Num;
}


int Power_Of_2(int Num)
{
    return pow(Num, 2);
}


int Power_Of_3(int Num)
{
    return pow(Num, 3);
}

int Power_Of_4(int Num)
{
    return pow(Num, 4);
}

void Print(int Num)
{
    cout << "The Power Of 2 is : " << Power_Of_2(Num) << endl;
    cout << "The Power Of 3 is : " << Power_Of_3(Num) << endl;
    cout << "The Power Of 4 is : " << Power_Of_4(Num) << endl;
}


int main()
{
    Print(ReadNumber());

    return 0;
}
