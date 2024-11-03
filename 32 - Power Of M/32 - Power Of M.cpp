#include <iostream>
#include <cmath>
using namespace std;


int ReadNumber()
{
    int Num;

    cout << "Please Enter The Number : \n";
    cin >> Num;

    return Num;
}

int ReadPower()
{
    int M;

    cout << "Please Enter M : \n";
    cin >> M;

    return M;
}



int Print(int Num, int M)
{
    if (M == 0) {
        return 1;
    }

    int P = 1;

    for (int i = 1; i <= M; i++)
    {
        P *= Num;
    }

    return P;
}


int main()
{
    cout << "Result = " << Print(ReadNumber(), ReadPower()) << endl;

    return 0;
}
