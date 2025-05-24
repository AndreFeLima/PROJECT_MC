#include "functions.h"
#include <iostream>

// FUNÇÃO PISO
int floor(float A) {
    int number = 0; 
    if (A>0) {
        while (A>=1) {
            A--;
            number ++;
        }
        return number;}
    else {
        while (A<0) {
            A++;
            number--;
        }
        return number;}
    return number;}

// FUNÇÃO TETO

    int ceil (float B) {
        int number=0; 
        if (B>0) {
            while (B>0) {
                B--;
                number++;
}            return number;}
        else{
            while (B<=-1) {
                B++;
                number--;
}            return number;}
        return number;
    }

// FUNÇÃO DIV

int division_mod(int dividend, int divisor, char c = 'D') { // A DIVIDIDO POR B
    int quotient = 0;
    int rest = dividend;


    bool same_signal = (dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0);
    bool divisor_neg_dividendo_pos = ((dividend > 0) && (divisor < 0));
    bool divisor_pos_dividendo_neg = ((dividend < 0) && (divisor > 0));


    if (same_signal) { // COMO AMBOS TÊM O MESMO SINAL, O SINAL DO QUOTIENT SERÁ POSITIVO
        while (divisor <= rest) {
            rest -= divisor;
            quotient ++;
            }return (c == 'D') ? quotient : rest;}

    if (divisor_pos_dividendo_neg) {
        while (rest < 0) {
            rest -= -divisor; // Subtraio o módulo do divisor
            quotient --;
            }return (c == 'D') ? quotient : rest;}

    if (divisor_neg_dividendo_pos) {
        while ((rest > 0) && (-divisor <= rest )) {  // POR ENQUANTO QUE O RESTO FOR MAIOR QUE ZERO E MAIOR QUE O MÓDULO DO DIVISOR
            rest -= -divisor; // Subtraio o módulo do divisor
            quotient--;
            }return ( c== 'D') ? quotient : rest;}

int prime_number ()

    return quotient;

}
