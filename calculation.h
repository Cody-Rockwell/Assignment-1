#ifndef CALCULATION_H
#define CALCULATION_H

#include <stdio.h>
#include <math.h>

using namespace std;

float CalculateHypotenuseOfTriangle(float fltSideA, float fltSideB)
{
    float fltHypotenuseOfTriangle = 0.f;

    fltHypotenuseOfTriangle = sqrt((pow(fltSideA, 2) + pow(fltSideB, 2)));

    return fltHypotenuseOfTriangle;
}

float CalculateAreaOfTrapezoid(float fltBaseA, float fltBaseB, float fltHeight)
{
    float fltAreaOfTrapezoid = 0.f;

    fltAreaOfTrapezoid = (((fltBaseA + fltBaseB) * fltHeight) / 2.0);

    return fltAreaOfTrapezoid;
}

float CalculateAreaOfRectangle(float fltSideA, float fltSideB)
{
    float fltAreaOfRectangle = 0.f;

    fltAreaOfRectangle = fltSideA * fltSideB;

    return fltAreaOfRectangle;
}

float CalculateVolumeOfRectangularHexahedron(float fltSideA, float fltSideB, float fltSideC)
{
    float fltVolumeOfRectangularHexahedron = 0.f;

    fltVolumeOfRectangularHexahedron = fltSideA * fltSideB * fltSideC;

    return fltVolumeOfRectangularHexahedron;
}

#endif
