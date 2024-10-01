#include <iostream>

using namespace std;

FILE *plik;
int liczby[100];
int ile,i,j,maks;

int main()
{
    plik = fopen("liczby.txt", "rt");
    if (plik!=NULL){
        cout<<"plik otwarty\n";
        ile = 0;
        fscanf(plik, "%d", & liczby[ile]);
        maks=liczby[ile];
        ile++;
        while(!feof(plik))
        {
            fscanf(plik, "%d", &i);
            liczby[ile]=i;
            if(liczby[ile]>maks)
                maks=liczby[ile];
            ile++;
            cout<<i<<endl;
        }
        fclose(plik);
        cout<<"odczytano: "<<ile<<" elementow"<<endl;
        cout<<"wartosc maksymalna to: "<<maks;
    } else
    {
        cout<<"error file";
    }
    return 0;
}
