#include <iostream>

using namespace std;

// écrire la fonction sous_chaine(str,pos,len) qui
// retourne la sous-chaine de la chaine str qui commence
// a l'indice pos et compte len caractères. Si la longueur
// demandée est trop longue et dépasse de la chaine str,
// seule la partie de l'indice pos à la fin est retournée
//
// Vous pouvez uniquement utiliser la méthode length() et les
// opérateurs [] et += de la classe string.

std::string sous_chaine(std::string str, int pos, int len)
{
    if(pos > str.length())
    {
        return "";
    }
    else
    {
        std::string result = "";
        for (int i = pos; i < len + pos; ++i)
        {
            result += str[i];
        }
        return result;
    }
}

int main() {
    // 5 1 3 YES
   cout << sous_chaine("hello",1,3) << endl;
   // affiche ell

    // 6 3 2 YES
   cout << sous_chaine("abcdef",3,2) << endl;
   // affiche de

    // 6 2 7 YES
   cout << sous_chaine("abcdef",2,7) << endl;
   // affiche cdef

    // 6 20 7 NO
   cout << sous_chaine("abcdef",20,7) << endl;
   // affiche une chaine vide
}