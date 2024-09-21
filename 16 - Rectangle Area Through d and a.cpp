#include <iostream>
#include < cmath>

using namespace std;


void Read(float& a, float& d)
{
    cout << "Please Enter The Side  a : \n";
    cin >> a;
    cout << "Please Enter The Diagonal d : \n";
    cin >> d;
}


float CalculArea(float a, float d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

void Print_float_Area(float Area)
{
    cout << "The Rectangle Area is : " << Area << endl;
}

int main()
{
    float A, D;

    Read(A, D);
    Print_float_Area(CalculArea(A, D));


    system("color 6F");
    system("pause>0");
    return 0;
}