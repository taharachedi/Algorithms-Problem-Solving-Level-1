#include <iostream>
using namespace std;


short ReadAge() {

    short Age;

    cout << "Please Enter Ur Age : \n";
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(short Num, short From, short To)
{
    return  (Num >= From && Num <= To);
}

void Print(short Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " Is A Valid Age ";
    else
        cout << Age << " Is Invalid Age ";
}



int main() {

    Print(ReadAge());

    system("color f4");
    system("pause>0");
    return 0;
}
