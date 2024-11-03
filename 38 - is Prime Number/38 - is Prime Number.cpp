#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, Not_Prime = 2 };

int ReadNumber(string Msg)
{
    int Num;

    do
    {
        cout << Msg << endl;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}

enPrimeNotPrime check_Prime(int Num)
{
    int M = round(Num / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Num % i == 0)
            return enPrimeNotPrime::Not_Prime;

    }
    return enPrimeNotPrime::Prime;
}


void Print(int Num)
{
    switch (check_Prime(Num))
    {
    case enPrimeNotPrime::Prime:
        cout << "Prime Number ! " << endl;
        break;

    case enPrimeNotPrime::Not_Prime:
        cout << "Not Prime Number ! " << endl;
        break;
    }
}



int main()
{
    Print(ReadNumber("Please Enter A positive Number ! "));

    return 0;
}
