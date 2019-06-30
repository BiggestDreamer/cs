#include "Deck.h"
vector<Card> p1;
vector<Card> p2;
void showHand(){
	for(auto i : p1){
		i.Show();
	}
	return;
}


void game(Deck& dk){
	p1.clear();
	p2.clear();
	bool flag = true;
	int a;
	while(flag){
		Card cd = dk.Draw();
		//cd.Show();
		p1.push_back(cd);
		showHand();
		cin>>flag;
	}

}

int main(){
	Deck dk;
	game(dk);
	return 0;
}
