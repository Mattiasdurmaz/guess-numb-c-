#include <stdlib.h>
#include <iostream>
using namespace std;

int nyttTal(int n) 
{ 
    return rand() % n; 
}

int anvandarensGissning(int guess_numb)
{
    cout << "Du gissar p�: " + guess_numb << endl;
    
    return guess_numb;
}

void utforEnSpelomgang() {
    int guess_numb;
    const int n = 100; 
    const int datornsTal = nyttTal(n); 
    int antalUtfardaGissningar = 0; 
    cout << "Datorn t�nker p� ett tal mellan noll och " << n << endl;
    cout << "Vilket tal vill du gissa p�?" << endl;
    cin >> guess_numb;
    anvandarensGissning(guess_numb);

}

void ingangTillGissaTal()
{
    utforEnSpelomgang();
}

int main()
{
    ingangTillGissaTal();
}


