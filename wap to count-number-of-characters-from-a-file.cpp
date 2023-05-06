#include <iostream.h>
#include <fstream.h>
#include <conio.h>

int main() {
    // Open the file
    ifstream file("example.txt");

    // Check if the file is open
    if (!file.is_open()) {
        cout << "Error opening file!";
        return 1;
    }

    // Count the number of characters in the file
    int count = 0;
    char ch;
    while (file.get(ch)) {
        count++;
    }

    // Close the file
    file.close();

    // Print the result
    cout << "The number of characters in the file is: " << count << endl;

    getch();
    return 0;
}
