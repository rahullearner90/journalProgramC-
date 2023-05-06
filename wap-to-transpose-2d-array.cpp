#include <iostream.h>
#include <conio.h>

void main()
{
    int arr[100][100], trans[100][100];
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of array:" << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Original Array:" << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    cout << "Transposed Array:" << endl;
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            cout << trans[i][j] << "\t";
        }
        cout << endl;
    }

    getch();
}
