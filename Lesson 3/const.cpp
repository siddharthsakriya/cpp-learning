#include <iostream>

int main() {
    
    /*
    const will stop the variable from being changed at compile & run time, it makes it read only, 
    we need to use it as often as possible
    */
    //we want pi to be constant 
    const double PI = 3.14159;
    //adds data security, for example with a physics calculator you do not want it changing
    double radius = 5;
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
    std::cout << "The area of the circle is: " << area << '\n';
    std::cout << "The circumference of the circle is: " << circumference << '\n';
    //say light speed for example or screen resolutions
    const int SPEED_OF_LIGHT = 299792458;
    const int SCREEN_WIDTH = 1920;
    const int SCREEN_HEIGHT = 1080;
    std::cout << "The speed of light is: " << SPEED_OF_LIGHT << " m/s" << '\n';
    std::cout << "The screen resolution is: " << SCREEN_WIDTH << "x" << SCREEN_HEIGHT << '\n';
    return 0;
}

