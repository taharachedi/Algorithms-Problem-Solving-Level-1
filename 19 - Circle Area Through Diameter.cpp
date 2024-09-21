#include <iostream>
#include <cmath>
using namespace std;

float Read()
{
    float D;
    cout << "Please Enter The Diameter D : \n";
    cin >> D;

    return D;
}

float CalculCircleArea(float D)
{
    const float PI = 3.14;
    return (PI * pow(D, 2)) / 4;
}

void Print(float Area)
{
    cout << "The Circle Area : " << Area << endl;
}


int main()
{
    Print(CalculCircleArea(Read()));


    system("color 6F");
    system("pause>0");
    return 0;
}