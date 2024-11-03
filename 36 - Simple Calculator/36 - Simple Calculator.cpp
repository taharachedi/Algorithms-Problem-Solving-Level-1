#include <iostream>
using namespace std;

enum enOperation_Type { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Msg)
{
    float Num = 0;  // Initialisation 

    cout << Msg << endl;
    cin >> Num;

    return Num;
}


enOperation_Type Operation_Type()
{
    char Op = '+';   // Initialisation

    cout << "Please Enter The Operation Type : (+ , - , * , / ) \n";
    cin >> Op;

    return (enOperation_Type)Op;
}


float Calcul(float Num1, float Num2, enOperation_Type Op)
{
    switch (Op)
    {
    case enOperation_Type::Add:
        return Num1 + Num2;    // Blamadir break deja return kat5rjk mn Function 

    case enOperation_Type::Subtract:
        return Num1 - Num2;

    case enOperation_Type::Multiply:
        return Num1 * Num2;

    case enOperation_Type::Divide:
        return Num1 / Num2;

    default:
        cout << "Wrong Operation Type ! ";
        break;
    }
}

int main()
{
    float Num1 = ReadNumber("Please Enter The First Number : ");
    float Num2 = ReadNumber("Please Enter The Second Number : ");

    enOperation_Type Op_Type = Operation_Type();

    cout << "Result  = " << Calcul(Num1, Num2, Op_Type) << endl;

    return 0;
}
