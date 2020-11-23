#pragma once
#ifndef CB
#define CB
#include <iostream>

class cB 
{
public:
	cB();
	static std::string lancerRadio();
	static std::string lancerRdo();
	static std::string msg();
	void parlerRadio();
private:
	static int m_numero;
};



class Node
{
public:
	Node(std::string);
	void ajouterMessage(std::string);
	std::string lire();
private:
	std::string m_Element;
	Node* m_Suivant;
	Node* m_Curseur;
	Node* m_Master;
};
#endif