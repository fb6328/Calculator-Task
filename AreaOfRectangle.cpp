#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int length, width, area;

    // Prompt users for input
    cout << "Enter the length of a rectangle:";
    cin >> length;
    cout << "Enter the width of a rectangle:";
    cin >> width;
    // Calculate the area
    area = length * width;

    // Access the variables to print values on screen
    cout << "The area of an " << length << " by " << width << " rectangle =" << area << endl;
}