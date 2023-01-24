#include <iostream>
using namespace std;

struct dati_auto
{
    string categoria, marca, modello, colore;
    char lun, mar, mer, gio, ven, sab, dom;
    };

void leggi_file(dati_auto vet_auto[])
{

    cout<<"Questa è la lista: "<<endl;
    for (int i=0; i<7; i++)
    {
        cout<<endl<<vet_auto[i].categoria<<" "<<vet_auto[i].marca<<" "<<vet_auto[i].modello<<" "<<vet_auto[i].colore<<" ";
        cout<<" "<<vet_auto[i].lun<<" "<<vet_auto[i].mar<<" "<<vet_auto[i].mer<<" "<<vet_auto[i].gio<<" "<<vet_auto[i].ven<<" "<<vet_auto[i].sab<<" "<<vet_auto[i].dom;
    }
}
void carica_vet(dati_auto vet_autol[])
{
    ifstream fin("auto.txt", ios::in);
    string appoggio;
    while(!fin.eof())
    {
        getline(fin,appoggio);
        for(int i=0; i<7; i++)
        {
            fin>>vet_auto[i].categoria>>vet_auto[i].marca>>vet_auto[i].modello>>vet_auto[i].colore;
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
