#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

FILE *plik;
ifstream plik2;

int liczba;
string linia;

int main()
{
    plik2.open("liczby.txt");
    // -------------------
    while (!plik2.eof()){
        getline(plik2,linia);
    cout<<linia<<endl;
    }
    plik2.close();
    cout<<"---------------"<<endl;
    // -------------------
    plik = fopen("liczby.txt", "rt");
    while(!feof(plik)){
    fscanf(plik,"%d", &liczba);
    cout<<liczba<<endl;
    }
    fclose(plik);
    return 0;
}
