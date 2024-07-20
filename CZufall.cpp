#include "CZufall.h"

int CZufall::wert(int low, int high) {
    return std::rand() % (high - low + 1) + low;
}

void CZufall::initialisiere(int s) { //initialisieren
    std::srand(s);
}

void CZufall::test(int l, int h, int N) {
    int n = h - l + 1; //size
    int test[n]{0}; //array of size n

    for(int i = 0; i < N; i++) { //N mal ziehen
        test[wert(l, h) - l]++;
    }

    //output
    for(int i = 0; i < n; i++) {
        std::cout << i + l << ". Wert wurde " << test[i] << " Mal gezogen." << std::endl; 
    }
}

void CZufall::test_falsch(int l, int h, int N) {//Zufallsgenerator jedes Mal neu initialisiert wird
    int n = h - l + 1;
    int test[n]{0};

    for(int i = 0; i < N; i++) {
        this->initialisiere(time(NULL));
        test[wert(l, h) - l]++;
    }

    for(int i = 0; i < n; i++) {
        std::cout << i + l << ". Wert wurde " << test[i] << " Mal gezogen." << std::endl; 
    }
}