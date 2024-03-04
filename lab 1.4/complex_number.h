// complex_number.h
#pragma once
#include <string>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber();
    ComplexNumber(double realPart, double imaginaryPart);
    void Init(double realPart, double imaginaryPart);
    void Read();
    void Display() const;
    string ToString() const;
    double GetReal() const;
    double GetImaginary() const;
    void SetReal(double realPart);
    void SetImaginary(double imaginaryPart);
    ComplexNumber Add(const ComplexNumber& other) const;
    ComplexNumber Subtract(const ComplexNumber& other) const;
    ComplexNumber Multiply(const ComplexNumber& other) const;
};
