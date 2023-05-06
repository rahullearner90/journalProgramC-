#include <iostream.h>
#include <conio.h>

void main()
{
    int arr[100], n, sum=0;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of elements in array is: " << sum;

    getch();
}
