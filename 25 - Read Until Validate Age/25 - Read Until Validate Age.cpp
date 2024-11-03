#include <iostream>
using namespace std;


short ReadAge() {

    short Age;

    cout << "Please Enter Ur Age Between 18 and 45 : \n";
    cin >> Age;

    return Age;
}


bool ValidationNumInRange(short Num, short From, short To)
{
    return (Num >= From && Num <= To);
}


short ReadUntill(short From, short To)
{
    short Age;

    do
    {
        Age = ReadAge();

    } while (!(ValidationNumInRange(Age, From, To)));

    return Age;
}


void Print(short Age)
{
    cout << "Ur Age is : " << Age << endl;
}



int main() {

    Print(ReadUntill(18, 45));

    system("color f4");
    system("pause>0");
    return 0;
}
