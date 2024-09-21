#include <iostream>
using namespace std;


void Read(float& a, float& b)
{
    cout << "Please Enter The Triangle Side a : \n";
    cin >> a;
    cout << "Please Enter The Triangle Base b : \n";
    cin >> b;
}

float CalculArea(float a, float b)
{
    const float PI = 3.14;
    return ((PI * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));
}

void Print(float Area)
{
    cout << "The Circle Area Inscribed In An Isosceles Triangle is  : " << Area << endl;
}


int main() {

    float A, B;

    Read(A, B);
    Print(CalculArea(A, B));

    system("color 6F");
    system("pause>0");
    return 0;
}