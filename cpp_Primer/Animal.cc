#include "Animal.h"
Animal::Animal(std::string Type, std::string Name):_type(Type),
	_name(Name){}

const std::string
Animal::getType()const{
	return _type;
}

const std::string
Animal::getName() const{
	return _name;
}
