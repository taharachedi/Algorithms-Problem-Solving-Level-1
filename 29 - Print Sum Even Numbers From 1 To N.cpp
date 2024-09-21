#include <iostream>
using namespace std;

enum enOddOrEven { ODD = 1, Even = 2 };

int Read()
{
    int N;

    cout << "Please Enter The Number N : \n";
    cin >> N;

    return N;
}

enOddOrEven check_OddOrEven(int N)
{
    if (N % 2 != 0)
        return enOddOrEven::ODD;
    else
        return enOddOrEven::Even;
}


int Print_For(int N)
{
    int Sum = 0;
    cout << "The Sum Even Numbers From 1 To " << N << " Using For is : " << endl;

    for (int i = 1; i <= N; i++)
    {
        if (check_OddOrEven(i) == enOddOrEven::Even) {
            Sum += i;
        }
    }

    return Sum;
}

int Print_While(int N)
{
    int Sum = 0;
    int i = 1;

    cout << "The Sum Even Numbers From 1 To  " << N << " Using While is : " << endl;

    while (i <= N)
    {
        if (check_OddOrEven(i) == enOddOrEven::Even) {
            Sum += i;
        }
        i++;
    }
    return Sum;
}


int Print_DoWhile(int N)
{
    int Sum = 0;
    int i = 1;

    cout << "The Sum Even Numbers From 1 To " << N << " Using Do While Is : " << endl;

    do
    {
        if (check_OddOrEven(i) == enOddOrEven::Even) {
            Sum += i;
        }

        i++;

    } while (i <= N);

    return Sum;
}




int main()
{

    int N = Read();

    cout << Print_For(N) << endl;
    cout << "-----------------------------------\n";
    cout << Print_While(N) << endl;
    cout << "-----------------------------------\n";
    cout << Print_DoWhile(N) << endl;
    cout << "-----------------------------------\n";

    return 0;
}