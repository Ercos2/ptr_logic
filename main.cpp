#include <iostream>

int main() {
    int mass[10];
    int *mass_ptr = mass;
    for (int a = 0; a < 10; a++) {
        mass[a] = a;
    }
    std::cout << "fourth element: " << *(mass_ptr + 4) << "\n";
    return 0;
}
