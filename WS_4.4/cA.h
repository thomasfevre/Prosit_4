#pragma once
#ifndef CA
#define CA
#include <iostream>
#include "cB.h"

class cA
{
public:
	cA(std::string);
	void AllumeRadio();
	void Recorder();
	void Direct();
private:
	std::string m_name;
};

#endif