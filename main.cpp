#include <iostream>

int main() {
    int* mass = new int[10];
    for (int a = 0; a < 10; a++) {
        mass[a] = a;
    }
    std::cout << "fourth element: " << *(mass + 4) << "\n";
    return 0;
}
