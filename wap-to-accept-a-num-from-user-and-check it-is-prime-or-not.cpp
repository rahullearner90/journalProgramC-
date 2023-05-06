#include <iostream.h>
#include <conio.h>

void main()
{
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
    {
        cout << num << " is a prime number";
    }
    else
    {
        cout << num << " is not a prime number";
    }

    getch();
}
