#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    // return inches converted to centimeters.
    return inches * CENTIMETERS_PER_INCH;
}

double centimetersToInches(double centimeters) {
    // return centimeters converted to inches.
    return centimeters / CENTIMETERS_PER_INCH;
}

double poundsToKilograms(double pounds) {
    // return pounds converted to kilograms.
    return pounds / POUNDS_PER_KILOGRAM;
}

double kilogramsToPounds(double kilograms) {
    // return kilograms converted to pounds.
    return kilograms * POUNDS_PER_KILOGRAM;
}

double fahrenheitToCelsius(double fahrenheit) {
    // return Fahrenheit converted to Celsius.
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToFahrenheit(double celsius) {
    // return Celsius converted to Fahrenheit.
    return (celsius * 9 / 5) + 32;
}

bool isValidMenuChoice(int choice) {
    // return true when choice is between EXIT_CHOICE and CELSIUS_TO_FAHRENHEIT.
    if(choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT) {
        return true;
    }
    else {
        return false;
    }
}

bool requiresNonNegativeValue(int choice) {
    // Length and weight conversions cannot use negative values.
    // Temperature conversions may use negative values.
    // return true for choices 1 through 4.
    if(choice >= INCHES_TO_CENTIMETERS && choice <= KILOGRAMS_TO_POUNDS) {
        return true;
    }
    else {
        return false;
    }
}

bool isValidValueForChoice(int choice, double value) {
    // 1. Invalid menu choices should return false.
    // 2. Length and weight conversions should reject negative values.
    // 3. Temperature conversions should allow negative values.
    if(choice >= INCHES_TO_CENTIMETERS && choice <= KILOGRAMS_TO_POUNDS) {
        if(value >= 0) {
            return true;
        }
    }
    else if(choice == FAHRENHEIT_TO_CELSIUS || choice == CELSIUS_TO_FAHRENHEIT) {
        return true;
    }
    else {
        return false;
    }
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
