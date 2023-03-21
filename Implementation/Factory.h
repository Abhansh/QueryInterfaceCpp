#pragma once
#ifdef IMPLEMENTATION_EXPORTS
#define IMPLEMENTATION_API __declspec(dllexport)
#else
#define IMPLEMENTATION_API __declspec(dllimport)
#endif 

#include "CMobile.h"
#include "ICalculator.h"

class IMPLEMENTATION_API Factory
{
public:
	CMobile* getMobile(int choice);
};

