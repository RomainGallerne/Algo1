// Fichier dans lequel vous écrirez les expressions à évaluer
#include "definitionsFonctions.cpp"
#define EVAL(exp) cout << "Valeur de " << (#exp) <<" : "<< (exp) << endl


int main()
{
  srand(time(NULL));
  boolalpha(cout);

  cout << "\n=================================================================\n ";

  // Expressions à évaluer
  cout << "\n==== Prise en main =======\n";
  // commande pour évaluer l'expression 3+4
  
  EVAL(existeMul11(12,18))


    ;
  // A vous :

  cout << "\n=================================================================\n ";
  return 0;
}

