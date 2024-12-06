#include <iostream>
#include <vector>
#include <map>

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

    std::map<int, int> licznik;
    for (int num : tablica) {
        licznik[num]++;
    }

    int najczestszy = tablica[0];
    int max_wystapien = licznik[najczestszy];

    for (const auto& para : licznik) {
        if (para.second > max_wystapien) {
            najczestszy = para.first;
            max_wystapien = para.second;
        }
    }

    std::cout << "Najczesciej wystepujacy element to: " << najczestszy 
              << " (wystapien: " << max_wystapien << ")" << std::endl;

    return 0;
}
