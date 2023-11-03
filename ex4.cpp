#include <iostream>
#include <limits>

using namespace std;

// Ecrivez la fonction lire_multiple_de(n) qui demande
// à l'utilisateur d'entrer un multiple de n, et lui
// dit d'essayer encore jusqu'à ce qu'il le fasse.
//
// Exemple d'exécution :
//
//Entrez un entier multiple de 3: 23
//Essayez encore : douze ?
//Essayez encore : pardon, 12
//Essayez encore : 13
//Essayez encore : 12
//Merci, vous avez entre 12
int lire_multiple_de(int n)
{
    cout << "Entrez un multiple de " + to_string(n) + ": ";
    int guess;
    cin >> guess;
    while (cin.fail() or (guess % 3 != 0))
    {
        cin.clear(); // reset failbit
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << endl << "Essayez encore :";
        cin >> guess;
    }
    return guess;
}
int main() {

   int n = lire_multiple_de(3);
   cout << "Merci, vous avez entre " << n << endl;
}