// wap to accept a number and print factorial 
#include <iostream.h>
#include <conio.h>

void main()
{
    int num, fact=1;

    cout << "Enter a number: ";
    cin >> num;

    for(int i=num; i>=1; i--)
    {
        fact *= i;
    }

    cout << "Factorial of " << num << " is " << fact;

    getch();
}
