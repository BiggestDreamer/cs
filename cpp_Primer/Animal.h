#ifndef ANIMAL_H__
#define ANIMAL_H__
#include <iostream>
class Animal{
public:
	Animal(std::string Type = "", std::string Name = "");
	const std::string getType() const;
	const std::string getName() const;

private:
	std::string _type;
	std::string _name;
};

#endif
