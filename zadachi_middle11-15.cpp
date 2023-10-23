#include <iostream>
#include "middle.h"

using namespace std;

int itc_second_max_num(long long number){
int max1 = -1;
int max2 = -1;
while(number > 0){
    int chislo = number % 10;
    number /= 10;
    if (chislo > max1){
        max2 = max1;
        max1 = chislo;
    }
    else if (chislo > max2 && chislo < max1){
        max2 = chislo;
    }
}
return max2;
}

int itc_second_simple_max_num(long long number) {
int max1 = -1;
int max2 = -1;
while(number > 0){
    int chislo = number % 10;
    number /= 10;
    if (chislo > max1){
        max2 = max1;
        max1 = chislo;
    }
    else if (chislo > max2 && chislo < max1){
        max2 = chislo;
    }
}
if (max1 == max2)
    return -1;
else
    return max2;
}


long long itc_bin_num(long long number) {
    if (number == 0) {
        return 0;
    }
    else {
        return number % 2 + 10 * itc_bin_num(number / 2);
    }
}

long long itc_oct_num(long long number) {
    if (number == 0) {
        return 0;
    }
    else {
        return number % 8 + 10 * itc_oct_num(number / 8);
    }
}

int itc_rev_bin_num(long long number) {
    int des_chislo = 0;
    int stepen_dvoyki = 1;
    while (number > 0) {
        int bit = number % 10;
        des_chislo += bit * stepen_dvoyki;
        number /= 10;
        stepen_dvoyki *= 2;
    }

    return des_chislo;
}
