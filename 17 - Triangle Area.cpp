#include <iostream>
using namespace std;

void ReadTriangleArea(int& a, int& h)
{
    cout << "Please Enter a : \n";
    cin >> a;
    cout << "Please Enter h  :\n";
    cin >> h;
}

float CalculArea(int a, int h)
{
    return (float)(a * h) / 2;
}


void Print(float Area)
{
    cout << "The Triangle Area is : " << Area << endl;
}


int main()
{
    system("color f4");

    int A, H;

    ReadTriangleArea(A, H);
    Print(CalculArea(A, H));

    system("pause>0");
    return 0;
}