#include <iostream>
using namespace std;

int main() {
 const float coutHoraire = 4.0;
 int velosDispos = 20;
 int capacite= 20;
 int choix;
  
 cout << endl;
 cout << "****** Gestion d'une station Vélô ******" << endl << endl;
 cout << "-----------------------------------------" << endl;
 cout << "Vélos disponibles : " << velosDispos << endl;
 cout << "Points d'attache disponibles : " << capacite - velosDispos << endl;
 cout << "-----------------------------------------" << endl<< endl;
  
 cout << "1. Emprunter un vélô électrique" << endl;
 cout << "2. Restituer un vélô électrique" << endl;
 cout << "3. Estimer le coût de la location" << endl;
 cout << "4. Quitter l'application" << endl << endl;

 cin >> choix;
 cout << "Vous avez saisi : " << choix << endl << endl;
  // traitement du choix de l'utilisateur
  switch (choix) {
  case 1:
    cout << endl << "Vous avez choisi d'emprunter un vélo électrique." << endl << endl;
    break;
  case 2:
    cout << endl << "Vous avez choisi de restituer un vélô électrique" << endl << endl;
    break;
  case 3:
    cout << endl << "Vous avez choisi d'estimer le coût de la location" << endl << endl;
    break;
  case 4:
    cout << endl << "Vous avez choisi de quitter l'application" << endl << endl;
    break;
  default:
    cout << "Vous n'avez pas choisi un nombre valide" << endl << endl;
  
 return 0;
  }
}