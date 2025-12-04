#include <iostream>

void do_print()
{
    std::cout << "in do_print()" << "\n";
}

int return_5()
{
    return 5;
}

void get_double(int x)
{
    std::cout << "Double: " << x*2 << "\n";
}

int main()
{
    std::cout << "Starting main()" << "\n";
    do_print();
    std::cout << "Returned: " << return_5() << "\n";
    get_double(return_5());
    std::cout << "Ending main()" << "\n";

    return 5;
}
