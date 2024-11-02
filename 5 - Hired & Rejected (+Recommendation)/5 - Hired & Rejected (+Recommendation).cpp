#include <iostream>
using namespace std;


struct stInfo {
    short Age;
    bool has_Driver_License;
    bool Has_Recommendation;
};

stInfo Read_Info() {

    stInfo Info;

    cout << "Please Enter Ur Age :  \n";
    cin >> Info.Age;

    cout << "Are U have A Driver License ? (1:True) (0:False) \n";
    cin >> Info.has_Driver_License;

    cout << "Are U have A Recommendation ? (1:True) (0:False) \n";
    cin >> Info.Has_Recommendation;

    return Info;
}

bool isAccepted(stInfo Info)
{
    if (Info.Has_Recommendation)
        return true;

    else
        return (Info.Age > 21 && Info.has_Driver_License);
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
    PrintInfo(Read_Info());

    system("color 6F");
    system("pause>0");
    return 0;
}