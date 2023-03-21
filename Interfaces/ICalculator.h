#pragma once
#ifdef INTERFACES_EXPORTS
#define INTERFACES_API __declspec(dllexport)
#else
#define INTERFACES_API __declspec(dllimport)
#endif 

class INTERFACES_API ICalculator
{
public:
	virtual void add() = 0;
	virtual void subtract() = 0;
};

