#include <iostream>
using namespace std;

short ReadNumber()
{
    short N;

    cout << "Please Enter The Last Number N : \n";
    cin >> N;

    return N;
}

void Counter_For(short N)
{
    cout << "The Numbers From 1 To " << N << "  :  \n\n";

    for (short i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}



void Counter_While(short N)
{
    cout << "The Numbers From 1 To " << N << "  : \n\n";
    int i = 1;

    while (i <= N)
    {
        cout << i << endl;
        i++;
    }
}


void Counter_DoWhile(short N)
{
    cout << "The Numbers From 1 To " << N << "  :\n\n";

    int i = 1;
    do
    {
        cout << i << endl;
        i++;

    } while (i <= N);
}




int main()
{

    short N = ReadNumber();

    Counter_For(N);

    cout << "-----------------------------------\n\n";

    Counter_While(N);

    cout << "-----------------------------------\n\n";


    Counter_DoWhile(N);

    return 0;
}
