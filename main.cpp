#include <stdio.h>
#include <iostream>
#include <iomanip>

// Including Header file for Calculations
#include "calculation.h"

// Not using multiple namespaces so std is implied ∴ explicitly listed std for readability
using namespace std;

void UserPrompt()
{
    cout << "\nPlease make a selection:" << endl;
    cout << "A. Calculate the hypotenuse of a triangle" << endl;
    cout << "B. Calculate the area of a trapezoid" << endl;
    cout << "C. Calculate the area of a rectangle" << endl;
    cout << "D. Calculate the volume of a rectangular hexahedron" << endl;
    cout << "E. Exit program" << endl;
}

int main()
{
    char charUserSelection = ' ';

    float fltLengthOfSideA = 0.f;
    float fltLengthOfSideB = 0.f;
    float fltLengthOfSideC = 0.f;

    float fltLengthOfBaseA = 0.f;
    float fltLengthOfBaseB = 0.f;
    float fltHeightOfTrapezoid = 0.f;

    float fltHypotenuseOfTriangle = 0.f;
    float fltAreaOfTrapezoid = 0.f;
    float fltAreaOfRectangle = 0.f;
    float fltVolumeOfRectangularHexahedron = 0.f;

    cout << setprecision(3);

    do
    {
        UserPrompt();

        cin >> charUserSelection;

        switch (charUserSelection)
        {
        case 'a':
        case 'A': // Hypotenuse of a Triangle
            fltLengthOfSideA = 0.f;
            fltLengthOfSideB = 0.f;
            fltHypotenuseOfTriangle = 0.f;

            cout << "\nCalculating the hypotenuse of a triangle." << endl;

            cout << "Please enter the length of side A: ";
            cin >> fltLengthOfSideA;

            cout << "\nPlease enter the length of side B: ";
            cin >> fltLengthOfSideB;

            fltHypotenuseOfTriangle = CalculateHypotenuseOfTriangle(fltLengthOfSideA, fltLengthOfSideB);

            cout << "\nThe hypotenuse of the triangle is equal to: " << fltHypotenuseOfTriangle << endl;
            break;

        case 'b':
        case 'B': // Area of a Trapezoid
            fltLengthOfBaseA = 0.f;
            fltLengthOfBaseB = 0.f;
            fltHeightOfTrapezoid = 0.f;
            fltAreaOfTrapezoid = 0.f;

            cout << "\nCalculating the area of a trapezoid." << endl;

            cout << "Please enter the length of base A: ";
            cin >> fltLengthOfBaseA;

            cout << "\nPlease enter the length of base B: ";
            cin >> fltLengthOfBaseB;

            cout << "\nPlease enter the height of the trapezoid: ";
            cin >> fltHeightOfTrapezoid;

            fltAreaOfTrapezoid = CalculateAreaOfTrapezoid(fltLengthOfBaseA, fltLengthOfBaseB, fltHeightOfTrapezoid);

            cout << "\nThe area of the trapezoid is equal to: " << fltAreaOfTrapezoid << endl;
            break;

        case 'c':
        case 'C': // Area of a Rectangle
            fltLengthOfSideA = 0.f;
            fltLengthOfSideB = 0.f;
            fltAreaOfRectangle = 0.f;

            cout << "\nCalculating the area of a rectangle." << endl;

            cout << "Please enter the length of side A: ";
            cin >> fltLengthOfSideA;

            cout << "\nPlease enter the length of side B: ";
            cin >> fltLengthOfSideB;

            fltAreaOfRectangle = CalculateAreaOfRectangle(fltLengthOfSideA, fltLengthOfSideB);

            cout << "\nThe area of the rectangle is equal to: " << fltAreaOfRectangle << endl;
            break;

        case 'd':
        case 'D': // Volume of a Rectangular Hexahedron
            fltLengthOfSideA = 0.f;
            fltLengthOfSideB = 0.f;
            fltLengthOfSideC = 0.f;
            fltVolumeOfRectangularHexahedron = 0.f;

            cout << "\nCalculating the volume of a rectangular hexahedron" << endl;

            cout << "Please enter the length of side A: ";
            cin >> fltLengthOfSideA;

            cout << "\nPlease enter the length of side B: ";
            cin >> fltLengthOfSideB;

            cout << "\nPlease enter the length of side C: ";
            cin >> fltLengthOfSideC;

            fltVolumeOfRectangularHexahedron = CalculateVolumeOfRectangularHexahedron(fltLengthOfSideA, fltLengthOfSideB, fltLengthOfSideC);

            cout << "\nThe volume of the rectangular hexahedron is equal to: " << fltVolumeOfRectangularHexahedron << endl;
            break;

        case 'e':
        case 'E': // Exit Program
            cout << "\nExiting Program" << endl;
            break;

        default:
            cout << "\nThat is not a valid selection. Please try again." << endl;
            break;
        }

    } while (tolower(charUserSelection) != 'e');

    return 0;
}