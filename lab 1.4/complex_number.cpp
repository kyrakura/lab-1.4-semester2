// complex_number.cpp
#include "complex_number.h"
#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

ComplexNumber::ComplexNumber() : real(0), imaginary(0) {}

ComplexNumber::ComplexNumber(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

void ComplexNumber::Init(double realPart, double imaginaryPart) {
    real = realPart;
    imaginary = imaginaryPart;
}

void ComplexNumber::Read() {
    cout << "¬вед≥ть д≥йсну частину: ";
    cin >> real;
    cout << "¬вед≥ть у€вну частину: ";
    cin >> imaginary;
}

void ComplexNumber::Display() const {
    if (imaginary >= 0)
        cout << real << " + " << imaginary << "i" << endl;
    else
        cout << real << " - " << -imaginary << "i" << endl;
}

string ComplexNumber::ToString() const {
    if (imaginary >= 0)
        return to_string(real) + " + " + to_string(imaginary) + "i";
    else
        return to_string(real) + " - " + to_string(-imaginary) + "i";
}

double ComplexNumber::GetReal() const {
    return real;
}

double ComplexNumber::GetImaginary() const {
    return imaginary;
}

void ComplexNumber::SetReal(double realPart) {
    real = realPart;
}

void ComplexNumber::SetImaginary(double imaginaryPart) {
    imaginary = imaginaryPart;
}

ComplexNumber ComplexNumber::Add(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imaginary + other.imaginary);
}

ComplexNumber ComplexNumber::Subtract(const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imaginary - other.imaginary);
}

ComplexNumber ComplexNumber::Multiply(const ComplexNumber& other) const {
    return ComplexNumber(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}