#include "pch.h"
#include "CMobile.h"
#include <iostream>

void CMobile::add() {
	std::cout << "add method" << std::endl;
}

void CMobile::subtract() {
	std::cout << "subtract method" << std::endl;
}

void CMobile::makeCall() {
	std::cout << "makeCall method" << std::endl;
}

void CMobile::receiveCall() {
	std::cout << "receiceCall method" << std::endl;
}

void CMobile::queryInterface(int i, ICalculator *& piInt) {
	piInt = (ICalculator*) this;
}