#include<iostream>
using namespace std;
int main(){

    int dia1, mes1, ano1, dia2, mes2, ano2, diaTotalAno;

    dia1 = 12;
    mes1 = 03;
    ano1 = 2011;

    dia2 = 05;
    mes2 = 10;
    ano2 = 2014;

    // Pega os dias entre ano1 e ano2
    for(int i = ano1; i < ano2; i++){

        // verifica se ano é bissexto ou não
        if(i % 4 == 0){
            diaTotalAno += 366;
        } else {
            diaTotalAno += 365;
        }
    }

    for(int i = ano1; i < ano2; i++){

    }

    std::cout << "Os dias entre " << ano1 << " e " << ano2 << " é: " << diaTotalAno << "\n";

    return 0;
}
