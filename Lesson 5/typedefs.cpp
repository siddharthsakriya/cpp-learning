#include <iostream>
#include <vector>

//we give this datatype the keyword PairList, easier to write and read
//normally end with _t for type
// typedef std::vector<std::pair<std::string, int>> PairList_t;
//lets do an easy one, one for standard strings
// typedef std::string text_t;

//these days we use the "using" keyword

using text_t = std::string;
using number_t = int;

int main() {
    /*
    typedefs are used to create an alias for a data type
    this is useful for when you want to create a new name for an existing type
    it can also help to make your code more readable, and reduce typos
    */

    //declared a new pairlist, this helps with readability
    // PairList_t pairList;
    text_t name = "Siddharth";
    std::cout << name << '\n';
    number_t age = 20;
    std::cout << age << '\n';
    
    return 0;
}