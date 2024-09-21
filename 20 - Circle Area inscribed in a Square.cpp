#include <iostream>
#include <cmath>
using namespace std;

float Read()
{
    float A;
    cout << "Please Enter The Square Side  A : \n";
    cin >> A;

    return A;
}

float CalculArea(float A)
{
    const float Pi = 3.14;
    return (Pi * pow(A, 2)) / 4;
}

void Print(float Area)
{
    cout << "The Circle Area is : " << Area << endl;
}



int main()
{
    Print(CalculArea(Read()));


    system("color 6F");
    system("pause>0");
    return 0;
}