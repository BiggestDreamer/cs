#include <iostream>
#include "Animal.h"

int main(){
	Animal a("cat", "Jery");
	std::cout << a.getType()<<std::endl<<a.getName()<<std::endl;
	return 0;
}
