#pragma once
#ifdef IMPLEMENTATION_EXPORTS
#define IMPLEMENTATION_API __declspec(dllexport)
#else
#define IMPLEMENTATION_API __declspec(dllimport)
#endif 

#include "IMobile.h"
#include "ICalculator.h"

class IMPLEMENTATION_API CMobile: public IMobile, public ICalculator
{
public:
	void add();
	void subtract();
	void makeCall();
	void receiveCall();
	void queryInterface(int i, ICalculator *&piInt);
};

