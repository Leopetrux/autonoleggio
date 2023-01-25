#include <iostream>
#include <fstream>
using namespace std;

struct dati_auto
{
    string categoria, marca, modello, colore;
    char lun, mar, mer, gio, ven, sab, dom;
    };
void carica_vet(dati_auto vet_auto[])
{
    ifstream fin("auto.csv", ios::in);
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
void leggi_file(dati_auto vet_auto[])
{
    cout<<"Questa � la lista: "<<endl;
    for (int i=0; i<7; i++)
    {
        cout<<endl<<vet_auto[i].categoria<<" "<<vet_auto[i].marca<<" "<<vet_auto[i].modello<<" "<<vet_auto[i].colore<<" ";
        cout<<" "<<vet_auto[i].lun<<" "<<vet_auto[i].mar<<" "<<vet_auto[i].mer<<" "<<vet_auto[i].gio<<" "<<vet_auto[i].ven<<" "<<vet_auto[i].sab<<" "<<vet_auto[i].dom;
    }
}
void scrivi_file(dati_auto vet_auto[])
{
    ofstream fout("auto.csv");
    for (int i=0; i<7; i++)
    {
        fout<<vet_auto[i].categoria<<" "<<vet_auto[i].marca<<" "<<vet_auto[i].modello<<" "<<vet_auto[i].colore<<" ";
        fout<<vet_auto[i].lun<<" "<<vet_auto[i].mar<<" "<<vet_auto[i].mer<<" "<<vet_auto[i].gio<<" "<<vet_auto[i].ven<<" "<<vet_auto[i].sab<<" "<<vet_auto[i].dom<<" ";
    }
}
void lettura_file_aggiornato(dati_auto vet_auto[])
{
    cout<<"\nLA LISTA DELLE AUTO PRESENTI NELL'AUTONOLEGGIO SONO: "<<endl;
    {
        for (int i=0; i<7; i++)
        {
            cout<<vet_auto[i].categoria<<" "<<vet_auto[i].marca<<" "<<vet_auto[i].modello<<" "<<vet_auto[i].colore<<" ";
            cout<<" "<<vet_auto[i].lun<<" "<<vet_auto[i].mar<<" "<<vet_auto[i].mer<<" "<<vet_auto[i].gio<<" "<<vet_auto[i].ven<<" "<<vet_auto[i].sab<<" "<<vet_auto[i].dom;
        }
    }
}
void cerca_auto(dati_auto vet_auto[])
{
    int categoria, giorno;
    string cate;
    cout<<"Inserisci la categoria di cui vorresti affittare la macchina: ";
    cin>>cate;
    cout<<"Inserisci il giorno in cui vorresti effettuare la prenotazione: ";
    cin>>giorno;
    if (cate!="utilitaria" && cate!="lusso" && cate!="sportiva" && cate!="furgone")
    {
        cout<<"La categoria da lei richiesta � inesistente";
    }
    else
    {
        if (cate=="utilitaria")
        {
            for (int i=0; i<7; i++)
            {
                if (giorno=="lunedi")
                {
                    if (vet_auto[i].lun=='L')
                    {
                        cout<<vet_auto[i].marca<<" "<<vet_auto[i].modello<<" "<<vet_auto[i].colore<<" ";
                    }
                }
                else if (giorno=="martedi")
                {
                    if(vet_auto[i].mar=='L')
                    {
                        cout<<vet_auto[i].marca<<" "<<vet_auto[i].modello<<" "<<vet_auto[i].colore<<" ";
                    }
                }
                else if (giorno=="mercoledi")
                {
                    if(vet_auto[i].mer=='L')
                    {
                        cout<<vet_auto[i].marca<<" "<<vet_auto[i].modello<<" "<<vet_auto[i].colore<<" ";
                    }
                }
            }

        }
    }
}
void menu()
{
    int scelta;
    do
    {
        cout<<"-------MENU-------"<<endl;
        cout<<"1-Stampa parco auto"<<endl;
        cout<<"2-Prenota auto"<<endl;
        cout<<"3-Uscita"<<endl;
        cout<<"Scegli: ";
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
   menu();
   return 0;
}
