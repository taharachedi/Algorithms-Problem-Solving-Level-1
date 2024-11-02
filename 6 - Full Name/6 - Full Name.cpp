#include <iostream>
#include <string>
using namespace std;

struct stName {
    string FirstName;
    string LastName;
};

stName ReadName() {

    stName Name;

    cout << "Please Enter Ur First Name : \n";
    getline(cin, Name.FirstName);

    cout << "Please Enter Ur Last Name : \n";
    getline(cin, Name.LastName);

    return Name;
}


string GetFullName(stName Name, bool Reversed)
{
    string FullName;

    if (Reversed)
        FullName = Name.LastName + " " + Name.FirstName;

    else
        FullName = Name.FirstName + " " + Name.LastName;

    return FullName;
}


void PrintFullName(string FullName)
{
    cout << "\nFull Name = " << FullName << endl;
}


int main()
{

    PrintFullName(GetFullName(ReadName(), 1));

    system("color 6F");
    system("pause>0");
    return 0;
}