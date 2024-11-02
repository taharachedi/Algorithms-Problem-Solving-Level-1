#include <iostream>
using namespace std;

void Read(int& a, int& b)
{
    cout << "Please enter a : \n";
    cin >> a;
    cout << "Please enter b : \n";
    cin >> b;
}

float CalculArea(int a, int b)
{
    return a * b;
}

void Print(float Area)
{
    cout << "The Rectangle Area  is : " << Area << endl;
}





int main()
{
    int A, B;

    Read(A, B);
    Print(CalculArea(A, B));


    system("color 6F");
    system("pause>0");
    return 0;
}