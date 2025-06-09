#include <iostream>

int main() {
    int x {};
    int y {};
    int z {};

    std::cout << "Please input 3 numbers separated by a space: ";
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
}
