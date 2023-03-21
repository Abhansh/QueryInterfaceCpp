#pragma once
#ifdef INTERFACES_EXPORTS
#define INTERFACES_API __declspec(dllexport)
#else
#define INTERFACES_API __declspec(dllimport)
#endif 

class ICalculator;

class INTERFACES_API IMobile
{
public:
	virtual void makeCall() = 0;
	virtual void receiveCall() = 0;
	virtual void queryInterface(int i, ICalculator*& piInt) = 0;
};

