#include <iostream>
using namespace std;

struct stInfo {
    short Age;
    bool Has_Driver_License;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter Ur Age : \n";
    cin >> Info.Age;

    cout << "Are U have A Driver lisence ? (1:True) (0:False) \n";
    cin >> Info.Has_Driver_License;

    return Info;
}

bool isAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.Has_Driver_License == true);
}

void PrintInfo(stInfo Info)
{

    if (isAccepted(Info))
        cout << "Hired \n";
    else
        cout << "Rejected \n";
}




int main()
{
    PrintInfo(ReadInfo());


    system("color 6F");
    system("pause>0");
    return 0;
}