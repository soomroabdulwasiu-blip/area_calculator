#include <iostream>
using namespace std;

int main()
{
    int choice;
    float area, radius, length, width, base, height;

    cout << "===== AREA CALCULATOR =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter radius of circle: ";
        cin >> radius;
        area = 3.1416 * radius * radius;
        cout << "Area of Circle = " << area << endl;
        break;

    case 2:
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
        area = length * width;
        cout << "Area of Rectangle = " << area << endl;
        break;

    case 3:
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
        area = 0.5 * base * height;
        cout << "Area of Triangle = " << area << endl;
        break;

    default:
        cout << "Invalid choice! Please select between 1 and 3." << endl;
    }

    return 0;
}
