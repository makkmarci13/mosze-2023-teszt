#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // HIBA: NELEMENTS nincs definiálva

    std::cout << '1-100 ertekek duplazasa' // HIBA: '...' char literál, szöveghez "..." kell + hiányzik a pontosvessző a sor végéről
    for (int i = 0;) // HIBA: a for ciklus szintaxisa hibás (hiányzik a feltétel és a léptetés)
    {
        b[i] = i * 2;
    }

    for (int i = 0; i; i++) // HIBA: i kezdetben 0, a feltétel (i) hamis, ezért a ciklus sosem fut le (valószínű i < N_ELEMENTS kell)
    {
        std::cout << "Ertek:" // HIBA: hiányzik a pontosvessző a sor végéről
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag; // HIBA: nincs inicializálva (szemét értékről indul), ezért rossz átlag jön ki

    for (int i = 0; i < N_ELEMENTS, i++) // HIBA: vessző van pontosvessző helyett
    {
        atlag += b[i] // HIBA: hiányzik a pontosvessző a sor végéről
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}