/*
	Name: Caricamento Matrice 
	Copyright: Colamonico-chiarulli
	Author: Vincent Occhiogrosso
	Date: 13/12/22 14:26
	Description: Scrivere un programma per caricare dei numeri interi in una matrice di numeri interi di dimensione 2X3 con un ciclo for.
Successivamente scrivere un ciclo per stampare gli elementi della matrice a video.
*/
#include<iostream>
using namespace std;
int main ()
{
const int righe=2;
const int colonne=3;
int contr=0;
int contc=0;
int matrice[contr][contc];


cout<<"ESERCIZIO MATRICI "<<endl;
for(contr=0;contr<righe;contr++) {
   for(contc=0;contc<colonne;contc++) {
        cout<<"inserisci l\'elemento nella posizione "<<contr<<" , "<<contc<< " :";
       cin>>matrice[contr][contc];
}
}
cout<<"STAMPA A VIDEO";
for(contr=0;contr<righe;contr++) {
for(contc=0;contc<colonne;contc++) {
cout<<" l\'elemento nella posizione "<<contr<<" , "<<contc<<" e\': ";
cout<<matrice[contr][contc]<<endl;
}
}
cout<< "FINE";
return 0;


}		
	

