#include "pch.h"
#include "Factory.h"


CMobile* Factory::getMobile(int choice) {
	switch (choice) {
	case 1:
		return new CMobile();
	default:
		return NULL;
	}
}