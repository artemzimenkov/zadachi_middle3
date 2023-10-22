#include <iostream>
#include "middle.h"

using namespace std;

int itc_rev_oct_num(long long number) {
    int des_chislo = 0;
    int stepen_vosmerki = 1;
    while (number > 0) {
        int bit = number % 10;
        des_chislo += bit * stepen_vosmerki;
        number /= 10;
        stepen_vosmerki *= 8;
    }

    return des_chislo;
}
