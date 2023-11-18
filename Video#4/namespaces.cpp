
#include <iostream>

int main() {

    // Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
    // A namespace allows for identically named entities as long as the namespaces are different.

    // Example #1:
    int x = 0;

    std::cout << x;

    // Refering to a diferent namespace x
    std::cout << first::x;

    // ** Key Note: Must explicity tell the compiler which namespace we are using otherwise the default will be used.

    return 0;

}

namespace first {

    int x = 1;

}

namespace second {

    int x = 2;

}
