#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t, r, c, f; //t:casos de prueba,r:calles,c:avenidas,f:amigos.
  int streets[50000];// creacion de las calles.
  int avenues[50000];// creacion de las avenidas.

  cin >> t;

  while (t--) { // mientras no se acaben los casos de prueba, se sigue ejecutando.
    cin >> r >> c >> f; // se leen r,c yf

    for (int i = 0; i < f; i++) {
      cin >> streets[i] >> avenues[i]; //  se leen donde esta cada amigo
    }

    sort(streets, streets + f); // se ordenan las calles
    sort(avenues, avenues + f); // se ordenan las avenidas

    pair<int,int> result; // se guardan los resultados

    result.first = streets[(f-1)/2]; // Resultado de la calle
    result.second = avenues[(f-1)/2]; // Resultado de la avenida

    cout << "(Street: " << result.first << ", Avenue: " << result.second << ")" << endl; // se imprimen los resultados obtenidos
  }
// Fuente: https://github.com/osmangoninahid/Online-Judge-Solution/blob/master/UVA/855.cpp
  return 0;
}
