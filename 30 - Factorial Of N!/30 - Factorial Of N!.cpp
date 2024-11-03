#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int N;
    do
    {
        cout << Msg;
        cin >> N;

    } while (N < 0);

    return N;
}



int CalculFactoriel(int N) {

    int Factoriel = 1;

    for (int i = 1; i <= N; i++)
    {
        Factoriel *= i;
    }

    return Factoriel;
}



void Print(int Factoriel)
{
    cout << "The Factoriel is : " << Factoriel << endl;
}



int main()
{
    Print(CalculFactoriel(ReadNumber("Please Enter A Positive Number ! :\n")));

    return 0;
}
