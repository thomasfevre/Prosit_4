#include "cB.h"
#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

int cB::m_numero = 0;
Node discours("");
string texte;

cB::cB()
{
	m_numero++;
	cout << endl << "\n\n-----Activation de la radio No" << m_numero << "-----" << endl << endl;
	Sleep(1000);
}

string cB::lancerRadio()
{
	if (m_numero == 0) {
		return "La radio n'est pas active pour le moment !";
	}
	else if (m_numero == 1) { 
		Node listeChainee("Bienvenue sur TopMusic !");
		//listeChainee.ajouterMessage("\nLa meilleure radio c'est Skyrock !");
		return listeChainee.lire();
	}
	else return "Aucun canal radio sur cette frequence ;(";
}

string cB::lancerRdo() {
	return discours.lire();
}

string cB::msg() {
	return texte;
}

void cB::parlerRadio() {
	cout << "\n\nStation de Radio-[MICRO OUVERT] :";
	getline(cin, texte);
	discours.ajouterMessage(texte);
}





Node::Node(string messageDebut) : m_Element(""), m_Suivant(0), m_Curseur(0), m_Master(0)
{
	m_Element = messageDebut;
	m_Suivant = 0;

	m_Curseur = this;
	m_Master = this;
}


void Node::ajouterMessage(string message) 
{
	Node* pointeurtmp = new Node(message);
	m_Master->m_Suivant = pointeurtmp;
	m_Master = pointeurtmp;
}

string Node::lire()
{
	string result;

	while (m_Curseur->m_Suivant != 0)
	{
		result += m_Curseur->m_Element;
		m_Curseur = m_Curseur->m_Suivant;
	}
	result += m_Curseur->m_Element;
	return result;
}