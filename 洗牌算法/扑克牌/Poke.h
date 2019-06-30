#ifndef POKE_H
#define POKE_H
#include <string>
#include <iostream>
enum Hs{
	RT = 0,
	BT ,
	FP ,
	CH 	
};

const std::string Arr[] = {
	"红桃",
	"黑桃",
	"方片",
	"草花"
};

class Card{
public:
	Hs huase;
	int number;//1-13
	int index;
	Card(Hs hs, int num, int id):huase(hs),number(num),index(id){}
	const std::string HuaSe() const{
		return Arr[huase]; 
	}
	const void Show() const {
		std::cout<<"花色："<<HuaSe()<<"\t点数："<<number<<std::endl;
		return;
	} 
};

#endif
