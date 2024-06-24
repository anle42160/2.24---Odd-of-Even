// 2.24.) Write a program that reads an integer and determines and prints whether it’s odd or even. [Hint: Use the remainder operator (`%`). An even number is a multiple of two. Any multiple of 2 leaves a remainder of zero when divided by 2.]
// Programmer: Anna Le

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter a Integer: ";
    cin >> userInput;

    //Determining if the number is odd
    if ((userInput % 2) != 0) {
        cout << "\nThe integer is an odd number." << endl;
    }

    //Determining if the number is even
    if ((userInput % 2) == 0) {
        cout << "\nThe integer is an even number." << endl;
    }

    //Showing that the program runs properly
    return 0;
}
