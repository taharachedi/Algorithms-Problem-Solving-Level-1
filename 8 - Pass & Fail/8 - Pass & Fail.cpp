#include <iostream>
using namespace std;

enum enPassFailed { Pass = 1, Failed = 2 };


float Read()
{
    float Mark;

    cout << "Please Enter Ur Mark : \n";
    cin >> Mark;

    return Mark;
}

enPassFailed checkMark(float Mark)
{
    if (Mark >= 50)
        return enPassFailed::Pass;
    else
        return enPassFailed::Failed;
}


void Print(float Mark)
{
    if (checkMark(Mark) == enPassFailed::Pass)
        cout << "PASS \n";
    else
        cout << "Failed \n";
}


int main()
{

    Print(Read());

    return 0;
}