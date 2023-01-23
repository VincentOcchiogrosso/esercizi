/*
	Name: Esercizio
	Copyright:Colamonico-chiarulli
	Author: Vincent Occhigrosso
	Date: 22/11/22 13:24
	Description: 
*/
#include <iostream>
using namespace std;
int main ()
 {
    int variabile ;   
    
    switch(variabile)
    {
case 1:
cout<<"se premi 1 inserisci il vettore ";
break;
case 2:
cout<<"se premi 2 stampi a video il vettore";
break;
case 3:
cout<<"se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato";
break;
case 4:
cout<<"se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato";
break;
case 5:
cout<<"se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato";
break;


default:
cout<<"se premi 6, esca dal programma";
break;
}
	
   
   return 0;	

}
