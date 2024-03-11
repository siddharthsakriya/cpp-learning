#include <iostream>

int main() {
    //variable declaration
    int x;
    int y = 6;
    //variable assignment
    x = 5;
    int sum = x + y;
    //this variable will behave as if it is the number 5
    //wow I am printing a varaiable, wow so cool
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    //integers, used for storing whole numbers
    int year = 2021;
    //the 0.5 is truncated, so the value of day is 7
    int day = 7.5;
    std::cout << year << '\n';
    std::cout << day << '\n';

    //double (includes decimal points)
    double price = 7.23;
    double gpa = 3.5;
    double temp = 25.1;
    std::cout << price << '\n';
    
    //single character 
    char grade = 'A';
    //initial
    char initial = 'D';
    std::cout << grade << '\n';
    std::cout << initial << '\n';
    char overflow = 'AB';
    std::cout << overflow << '\n';
    //char also works for currencies

    //boolean 
    bool isTrue = true;
    bool isFalse = false;
    std::cout << isTrue << '\n';
    std::cout << isFalse << '\n';

    //string is an object that represents a sequence of text
    //provided from standard namespace
    std::string name = "Dylan";
    std::string sentence = "I am learning C++";
    std::cout << name << '\n';
    std::cout << sentence << '\n';

    //string concatenation
    std::cout << name + " " + sentence + ", This is so fun!! Wow !!" << '\n';
    return 0;
}