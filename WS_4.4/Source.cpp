#include "cA.h"
#include "cB.h"
#include <Windows.h>


using namespace std;

int main() {
	cA* pointeurdeRadio1 = new cA("RollsRoycePhantom");
	cA* pointeurdeRadio2 = new cA("BugattiChiron");

	pointeurdeRadio1->AllumeRadio();											// Méthode "AllumeRadio" qui verifie si un objet de type emetteur est créé
	cB* TopMusic = new cB();													// Création d'un emetteur	=	station de radio
	pointeurdeRadio2->AllumeRadio();											

	TopMusic->parlerRadio();													// Message de l'emetteur	=	animateur radio
	pointeurdeRadio2->Direct();													// Ecoute en direct			=	poste de radio
	
	pointeurdeRadio1->AllumeRadio();											
	pointeurdeRadio1->Recorder();												// Ecoute de l'enregistrement des messages									

	TopMusic->parlerRadio();
	pointeurdeRadio2->Direct();
	pointeurdeRadio1->Direct();

	TopMusic->parlerRadio();
	cA* pointeurdeRadio3 = new cA("KoenigseggJesko");
	pointeurdeRadio3->AllumeRadio();
	pointeurdeRadio3->Recorder();




	cout << "\n\n\n";
	Sleep(5000);
	return 0;
}
