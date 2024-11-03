#include <iostream>
#include <cmath>
using namespace std;

void ReadSideArbitaryTriangle(float& a, float& b, float& c)
{
    cout << "Please Enter The Triangle Side a :\n";
    cin >> a;
    cout << "Please Enter the Triangle Base b :\n";
    cin >> b;
    cout << "Please Enter The Triangle Side c :\n";
    cin >> c;
}


float CalculArea(float a, float b, float c)
{
    const float PI = 3.14;
    float P = (a + b + c) / 2;

    return PI * (pow((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))), 2));
}


void Print(float Area)
{
    cout << "The Circle Area Descibed Around An Arbitrary Triangle is  : " << Area << endl;
}


int main() {

    float A, B, C;
    ReadSideArbitaryTriangle(A, B, C);
    Print(CalculArea(A, B, C));

    system("color 6F");
    system("pause>0");
    return 0;
}
