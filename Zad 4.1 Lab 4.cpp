#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;
    std::cout << "Podaj liczbe elementow tablicy: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Tablica musi zawierac przynajmniej jeden element!" << std::endl;
        return 1;
    }

    std::vector<int> tablica(n);
    std::cout << "Podaj elementy tablicy:" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> tablica[i];
    }

    int max_element = std::numeric_limits<int>::min();
    for (int i = 0; i < n; i++) {
        if (tablica[i] > max_element) {
            max_element = tablica[i];
        }
    }

    std::cout << "Najwiekszy element tablicy to: " << max_element << std::endl;
    return 0;
}
