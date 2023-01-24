#include <iostream>
using namespace std;

struct dati_auto
{
    string categoria, marca, modello, colore;
    char lun, mar, mer, gio, ven, sab, dom;
    };

void carica_vet(dati_auto vet_autol[])
{
    ifstream fin("auto.txt", ios::in);
    string app;
    while(!fin.eof())
    {
        getline(fin,appoggio);
        for(int i=0; i<7; i++)
        {
            fin>>vet_autol[i].categoria>>vet_autol[i].marca>>vet_autol[i].modello>>vet_autol[i].colore;
            fin>>vet_auto[i].lun>>vet_auto[i].mar>>vet_auto[i].mer>>vet_auto[i].gio>>vet_auto[i].ven>>vet_auto[i].sab>>vet_auto[i].dom;
        }
    }
    fin.close();
}
void menu()
{
    int scelta;
    do
    {
        cout<<"-----MENU-----";
        cout<<"1-Stampa parco auto";
        cout<<"2-Prenota auto";
        cout<<"3-Uscita";
        cin>>scelta;
        switch(scelta)
        {
         case 1:

         break;

         case 2:

         break;
        }
    }
    while (scelta!=3);
}
int main()
{

   return 0;
}
