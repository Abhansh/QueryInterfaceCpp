// DesignPatterns_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Factory.h"
#include "ICalculator.h"
#include "IMobile.h"

int main()
{
    Factory factory;
    IMobile* piMobile = factory.getMobile(1);
    piMobile->makeCall();
    piMobile->receiveCall();

    ICalculator* piCalculator = NULL;
    piMobile->queryInterface(1, piCalculator);
    piCalculator->add();
    piCalculator->subtract();
}
