#include "cA.h"
#include <Windows.h>


cA::cA(std::string n) : m_name(n)
{
}



void cA::AllumeRadio() {

	std::cout << std::endl << this->m_name << "-    Poste Radio Allumee :";
	std::cout << "	'" << cB::lancerRadio() << "'" ;
	Sleep(1000);
}

void cA::Recorder() {

	std::cout << std::endl << this->m_name << "-	Contenu enregistre :";
	std::cout << "	'" << cB::lancerRdo() << "'";
	Sleep(1000);
}

void cA::Direct() {

	std::cout << std::endl << this->m_name << "-	A L'Ecoute en direct:";
	std::cout << "	'" << cB::msg() << "'";
	Sleep(1000);
}