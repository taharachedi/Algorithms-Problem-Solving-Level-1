#include <iostream>
using namespace std;

/*
void Letters()
{
	for (char i = 'A'; i <= 'Z'; i++)
	{
		cout << i << endl;
	}
}
*/


void Letters()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}


int main()
{
	Letters();


	return 0;
}
