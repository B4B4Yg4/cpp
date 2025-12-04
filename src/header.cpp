#include <iostream>
#include "square.h"

int main()
{
    std::cout << "a square has" << get_square_sies() << " sides\n"; 
    std::cout << "a square of length 5 has perimeter length " << get_square_perimeter(5) << "\n";

    return 0;
}
