#pragma once
#include <iostream>

namespace collections {
    template <typename T>
    class Array2D {
    protected:
        T* Tabb;
        int wiersz, kolumna;

    public:
        Array2D(int wiersz, int kolumna) : wiersz(wiersz), kolumna(kolumna), Tabb(new T[wiersz * kolumna]) {}

        Array2D(int wiersz, int kolumna, T zmienna) : Array2D(wiersz, kolumna) {
            for (int i = 0; i < wiersz * kolumna; i++) {
                Tabb[i] = zmienna;
            }
        }

        ~Array2D() {
            delete[] Tabb;
        }

        // Nowa metoda do wyœwietlania zawartoœci macierzy
        void print() const {
            for (int i = 0; i < wiersz; ++i) {
                for (int j = 0; j < kolumna; ++j) {
                    std::cout << Tabb[i * kolumna + j] << " ";
                }
                std::cout << "\n";
            }
        }
    };
}
