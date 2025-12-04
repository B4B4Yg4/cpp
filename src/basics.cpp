#include <iostream>

int main()
{
    // Single line comments
    std::cout << "Hello World!" << "\n";

    int x {5};
    std::cout << x << "\n";

    [[maybe_unused]] double pi {3.14};

    // std::cout << "Enter a number: ";
    // std::cin >> x;

    std::cout << "You entered: " << x << "\n";

    int y;
    std::cout << y << "\n";
    std::cout << sizeof(y) << "\n";

    int z {};
    std::cout << z << "\n";
    std::cout << sizeof(z) << "\n";

    return 0;
}
