#include <iostream>

using namespace std;

FILE *plik;
int liczby[100];
int ile,i,j,maks;
//--------------
//--------------

void sortowanie(){
    int pomoc;
for (i=0;i<ile-1;i++){
    for (j=0;j<ile-1;j++){
        if (liczby[j]>liczby[j+1]){
            pomoc = liczby[j];
            liczby[j]=liczby[j+1];
            liczby[j+1]=pomoc;
        }
    }
}

}

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
        cout<<"wartosc maksymalna to: \n"<<maks<<endl;
        sortowanie();
        for (i=0;i<ile;i++){
            cout<<liczby[i]<<", ";
        }
    } else
    {
        cout<<"error file";
    }
    return 0;
}
