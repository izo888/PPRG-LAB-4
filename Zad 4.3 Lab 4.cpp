#include <iostream>
#include <vector>

int main() {
    const int N = 10;
    int tablica[N][N] = {0};

    for (int i = 0; i < N; i++) {
        tablica[i][0] = i;
    }
    for (int i = 0; i < N; i++) {
        tablica[i][1] = i + i;
    }
    for (int i = 0; i < N; i++) {
        tablica[i][2] = i * i;
    }
    for (int i = 0; i < N; i++) {
        tablica[i][3] = i + 3; 
    }
    for (int i = 0; i < N; i++) {
        tablica[i][4] = i - 4; 
    }
    std::cout << "Tablica 10x10:" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << tablica[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
