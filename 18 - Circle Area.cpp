#include <iostream>
#include <cmath>

using namespace std;

float Read()
{
    float r;

    cout << "Please Enter The Rayon r : \n";
    cin >> r;

    return r;
}

float CalculArea(float r)
{
    const float PI = 3.14;
    return PI * pow(r, 2);
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