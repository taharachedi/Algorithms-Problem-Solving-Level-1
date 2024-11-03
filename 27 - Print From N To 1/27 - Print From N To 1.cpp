#include <iostream>
using namespace std;

short Read()
{
    short N;

    cout << "Please Enter The Number N :\n";
    cin >> N;

    return N;
}


void Counter_For(short N)
{
    cout << "Numbers From " << N << " To 1 : \n";

    for (short i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
}


void Counter_While(short N)
{
    cout << "Numbers From " << N << " To 1 : \n";
    int i = N;

    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }
}


void Counter_DoWhile(short N)
{
    cout << "Numbers From " << N << " To 1 : \n";
    int i = N;

    do
    {
        cout << i << endl;
        i--;

    } while (i >= 1);
}




int main()
{
    short N = Read();

    Counter_For(N);
    cout << "-----------------------------\n";

    Counter_While(N);
    cout << "-----------------------------\n";

    Counter_DoWhile(N);
    cout << "-----------------------------\n";


    return 0;
}
