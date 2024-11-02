#include <iostream>
#include <cmath>
using namespace std;

float ReadAreaCircumference() {
    float L;

    cout << "Please Enter The Circumference : L \n";
    cin >> L;

    return L;
}

float CalculCircleArea(float L) {

    const float PI = 3.14;
    return (pow(L, 2) / (4 * PI));
}

void Print(float Area)
{
    cout << "The Circle Area Along The Circumference is : " << Area << endl;
}


int main() {

    Print(CalculCircleArea(ReadAreaCircumference()));

    system("color 6F");
    system("pause>0");
    return 0;
}