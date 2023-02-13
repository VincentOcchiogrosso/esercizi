#include <iostream>
using namespace std;

bool IsBisestile(int anno) {
  if (anno % 400 == 0) {
    return true;
  }
  if (anno % 100 == 0) {
    return false;
  }
  if (anno % 4 == 0) {
    return true;
  }
  return false;
}

int main() {
  int anno1, anno2, contatore = 0;
  cout << "Inserisci il primo anno: ";
  cin >> anno1;
  cout << "Inserisci il secondo anno: ";
  cin >> anno2;
  
  for (int i = anno1; i <= anno2; i++) {
    if (IsBisestile(i)) {
      contatore++;
    }
  }
  
  cout << "Gli anni bisestili compresi tra " << anno1 << " e " << anno2 << " sono " << contatore << endl;
  
  return 0;
}
