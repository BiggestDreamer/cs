#include <time.h>
#include <vector>
#include <iostream>

#define LENGTH 25
using namespace std;

vector<int> oldArray;
vector<int> newArray;

void RandomArray(vector<int> oldArray, vector<int>& newArray){
	for(int i=LENGTH;i>0;i--){
		srand(unsigned(time(NULL)));
		int index = rand()%i;
		newArray.push_back(oldArray[index]);
		oldArray.erase(oldArray.begin()+index);
	}
}

void Print(){
	cout<<"原数组: ";
	for(auto it = oldArray.begin();it!=oldArray.end();it++)
		cout<<*it<<" ";
	cout<<endl<<"洗牌后的数组: ";
	for(auto it=newArray.begin();it!=newArray.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}

int main(){
	for(int i=0;i<LENGTH;i++)
		oldArray.push_back(i);

	RandomArray(oldArray, newArray);
	Print();
	return 0;
}
