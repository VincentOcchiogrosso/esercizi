/*
	Name: Esercizio funzioni
	Copyright: Colamonico-chiarulli
	Author: Vincent Occhiogrosso
	Date: 24/01/23 13:20
	Description: Scrivi
una funzione CalcolaMedia(x,y) che dati in input due numeri reali, dia in output la loro media.
*/
#include <iostream>
using namespace std;

void Media (double x, double y){
    
	double risultato;
	double tot;
	risultato=(x+y)/2;
	tot=risultato+10;
	cout<<tot ;
}
int main(){
	
	double x;
	double y;
	cout<<"insersci il primo valore "<<endl;
	cin>>x;
	cout<<"inserisci il secondo valore "<<endl;
	cin>>y;
	
	Media(x,y);
	
	return 0;
}
