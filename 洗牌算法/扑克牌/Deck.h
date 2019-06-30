#ifndef DECK_H
#define DECK_H

#include "Poke.h"
#include <vector>
#include <iostream>
#include <time.h>
using namespace std;
class Deck{
private:
	vector<Card> MainDeck;
	vector<Card> SubDeck;
public:
	Deck(){
		MainDeck.clear();
		SubDeck.clear();
		for(auto i=0;i<13;i++){
			Card cd(RT, i+1,1*13+i);
			MainDeck.push_back(cd);
		}	
		for(auto i=0;i<13;i++){
			Card cd(BT, i+1,2*13+i);
			MainDeck.push_back(cd);
		}	
		for(auto i=0;i<13;i++){
			Card cd(FP, i+1,3*13+i);
			MainDeck.push_back(cd);
		}	
		for(auto i=0;i<13;i++){
			Card cd(CH, i+1,4*13+i);
			MainDeck.push_back(cd);
		}	
	}

	~Deck(){}

	void Print(){
		for(auto i : MainDeck){
			cout<<"花色: "<<i.HuaSe()<<"\t点数: "<<i.number<<endl;
		}

	}
	void swap(vector<Card>& dc,int x, int y){
		if(x == y) return;
		auto z = dc[x];
		dc[x] = dc[y];
		dc[y] = z;
		return;
	}
	void Shuffle(){
		for(int i=0;i<SubDeck.size();i++){
			MainDeck.push_back(SubDeck[i]);
		}
		SubDeck.clear();
		for(int i=52;i>0;i--){
			srand(unsigned(time(NULL)));
			auto x = rand()%i;
			swap(MainDeck,x,i-1);
		}
	}
	const Card& Draw(){
		if(!MainDeck.empty()){
			Shuffle();
			Card cd = *MainDeck.begin();
			MainDeck.erase(MainDeck.begin());
			return cd;
		}
		Card cd = *MainDeck.begin();
		MainDeck.erase(MainDeck.begin());
		return cd;
	}
	void ToSub(Card& cd){
		SubDeck.push_back(cd);
	}
};

#endif
