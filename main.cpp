#include <iostream>
using namespace std;
float calculerCout(int duree, float coutH);

int main() {
  const float coutHoraire = 4.0;
  int velosDispos = 20;
  int capacite = 20;
  int choix;
  int duree;

  do {
    cout << endl;
    cout << "****** Gestion d'une station Vélô ******" << endl << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Vélos disponibles : " << velosDispos << endl;
    cout << "Points d'attache disponibles : " << capacite - velosDispos << endl;
    cout << "-----------------------------------------" << endl << endl;

    cout << "1. Emprunter un vélô électrique" << endl;
    cout << "2. Restituer un vélô électrique" << endl;
    cout << "3. Estimer le coût de la location" << endl;
    cout << "4. Quitter l'application" << endl << endl;

    cin >> choix;
    cout << "Vous avez saisi : " << choix << endl << endl;
    // traitement du choix de l'utilisateur

    switch (choix) {

    case 1: // Emprunter un vélo
      cout << endl
           << "Vous avez choisi d'emprunter un vélô électrique." << endl
           << endl;
      if (velosDispos == 0) {
        cout << "\n";
        cout << "Il n'y a plus de vélos disponibles." << endl;
      } else {
        (velosDispos--);
      }
      break;

    case 2: // Restituer un vélo
      cout << endl
           << "Vous avez choisi de restituer un vélô électrique" << endl
           << endl;
      if (velosDispos == 20) {
        cout << "\n";
        cout << "Station vélô complète, il n'y a plus de places disponibles."
             << endl;
      } else {
        (velosDispos++);
      }
      break;

    case 3: // Calculer coût
      cout << endl
           << "Vous avez choisi d'estimer le coût de la location" << endl
           << endl;
      cout << "Pendant combien de temps souhaitez-vous conserver le vélo ? (temps en minutes)"
           << endl
           << endl;
      cin >> duree;
      cout << "Le coût estimé est de " << calculerCout(duree, coutHoraire) << " euros." << endl;
      break;

    case 4: // Quitter application
      cout << endl
           << "Vous avez choisi de quitter l'application" << endl
           << endl;
      cout << "Au revoir" << endl << endl;
      break;
    default:
      cout << "Vous n'avez pas choisi un nombre valide" << endl << endl;
    }
  } while (choix != 4);
  return 0;
}

// Définition de la fonction calcul 
float calculerCout(int duree, float coutH) { 
const float coutHoraire = 4.0;
  
coutH = ((duree * coutHoraire) / 60); 
  
return coutH;

}