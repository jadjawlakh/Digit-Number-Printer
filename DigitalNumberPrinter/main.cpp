#include <iostream>
#include <vector>
using namespace std;


// Fonction pour imprimer les numéros
void imprimer(int mat[][3])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (j % 2 == 0) { // indice de la colonne est paire
        if (mat[i][j] == 1) // cellule est 1
          cout << "|"; //si colonne est paire imprimer "|"
        else // cellule est 0 - imprimer du vide
          cout << " ";
      }
      else { // indice de la colonne est impaire
        if (mat[i][j] == 1) // cellule est 1
          cout << "_"; // si colonne est impaire imprimer "-"
        else // cellule est 0 - imprimer du vide
          cout << " ";
      }
    }
    cout << endl;
  }
}

// Le choix de la matrice sera 3 lignes x 3 colonnes, car la consigne indique qu'on imprime les numeros sur 3 lignes seulement

// Les matrices si-dessous designent ulterieurement à la fonction imprimante comment imprimer les barres et les tirets sur trois lignes
void chiffre0()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 1, 0, 1 },
    { 0, 1, 0 }
  };
  imprimer(mat);
}
void chiffre1()
{
  int mat[3][3] = {
    { 0, 0, 0 },
    { 1, 0, 0 },
    { 1, 0, 0 },
  };
  imprimer(mat);
}
void chiffre2()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 0, 1, 1 },
    { 1, 1, 0 },
  };
  imprimer(mat);
}
void chiffre3()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 0, 1, 1 },
    { 0, 1, 1 }
  };
  imprimer(mat);
}
void chiffre4()
{
  int mat[3][3] = {
    { 0, 0, 0 },
    { 1, 1, 1 },
    { 0, 0, 1 },
  };
  imprimer(mat);
}
void chiffre5()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 1, 1, 0 },
    { 0, 1, 1},
  };
  imprimer(mat);
}
void chiffre6()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 1, 1, 0 },
    { 1, 1, 1 },
  };
  imprimer(mat);
}
void chiffre7()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 0, 0, 1 },
    { 0, 0, 1 },
  };
  imprimer(mat);
}
void chiffre8()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 1, 1, 1 },
    { 1, 1, 1 },
  };
  imprimer(mat);
}
void chiffre9()
{
  int mat[3][3] = {
    { 0, 1, 0 },
    { 1, 1, 1 },
    { 0, 1, 1 },
  };
  imprimer(mat);
}

// Fonction pour verifier le chiffre à imprimer
void verifierChiffre(int num)
{
  // pour le chiffre 0
  if (num == 0)
    chiffre0();
  
  // pour le chiffre 1
  if (num == 1)
    chiffre1();
  
  // pour le chiffre 2
  if (num == 2)
    chiffre2();
  
  // pour le chiffre 3
  if (num == 3)
    chiffre3();
  
  // pour le chiffre 4
  if (num == 4)
    chiffre4();
  
  // pour le chiffre 5
  if (num == 5)
    chiffre5();
  
  // pour le chiffre 6
  if (num == 6)
    chiffre6();
  
  // pour le chiffre 7
  if (num == 7)
    chiffre7();
  
  // pour le chiffre 8
  if (num == 8)
    chiffre8();
  
  // pour le chiffre 9
  if (num == 9)
    chiffre9();
}


int main()
{
  cout<<"S'il vous plaît, veuillez indiquer un numéro que vous aimeriez voir imprimé sur l'écran (entre 0 et 9): ";
  int num = 0;
  cin>>num;
  
  verifierChiffre(num);
  
  return 0;
}
