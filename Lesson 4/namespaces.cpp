#include <iostream>

namespace first{
    int x = 5;
}

namespace second{
    int x = 6;
}

int main() {
    //namespaces provide a way to avoid name collisions, each entity requires a unique name
    //suppose we have:
    int x = 4;
    /*
    now this below would generate an error, and thus is commented out
    int x = 6;
    */
    //we can use namespaces to avoid this
    // We have created first, and this should now work
    //if we dont specify namespace, we use the local version
    std::cout << x << '\n';
    // first::, the 2 colons are known as the scope resolution operator
    std::cout << first::x << '\n';
    //we have done the same thing here with second
    std::cout << second::x << '\n';
    using namespace first;
    //we can now use x without the namespace, we don't need the prefix
    std::cout << x << '\n';
    //you can do it with std, however this is bad practice, as it could allow for naming conflicts, we should be explicit
    return 0;
}
