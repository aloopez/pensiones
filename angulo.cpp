#include <iostream>
using namespace std;

int main ()
{

float a;
cout << "ingrese el angulo: ";
cin >> a;

if (180>a && a>90)
{
    cout << "el angulo es obstuso";
}

else if (0<a && 90>a)

{
    cout << "el angulo es agudo";
}

else if (a == 90)
{
    cout << "el angulo es recto";
}




    return 0;
}