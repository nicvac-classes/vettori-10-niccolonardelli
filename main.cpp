#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  int i, n;

  cout << "Inserire il numero di studenti: " << endl;
  cin >> n;
  vector<string> studenti(n);
  vector<float> voti(n);
  vector<float> crediti(n);

  for (i = 0; i <= n - 1; i=i+1) 
  {
    cout << "Nome " << i + 1 << "° studente: " << endl;
    cin >> studenti[i];
    cout << "Voto " << i + 1 << "° studente: " << endl;
    cin >> voti[i];
    cout << "Crediti " << i + 1 << "° studente: " << endl;
    cin >> crediti[i];
  }

  // Calcolo la media della classe
  float media, somma;

  somma = 0;
  for (i = 0; i <= n - 1; i=i+1) 
  {
    somma = somma + voti[i];
  }
  media = somma / n;

  // Visualizzo gli studenti con voto superiore alla media e con crediti >= 6.
  float limiteCrediti;

  limiteCrediti = 6;
  cout << "Lista di studenti con votazione superiore alla media " << media
       << " e con almeno " << limiteCrediti << " crediti." << endl;
  for (i = 0; i <= n - 1; i++) 
  {
    if (voti[i] > media && crediti[i] >= 6) 
    {
      cout << "Lo studente " << studenti[i] << " ha voto " << voti[i] 
        << " e " << crediti[i] << " crediti" << endl;
    }
  }
}


//LEGGERE LE ISTRUZIONI NEL FILE README.md
