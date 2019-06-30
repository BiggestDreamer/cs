#include <time.h>
#include <vector>
#include <iostream>

#define LENGTH 25
using namespace std;

vector<int> oldArray;
vector<int> newArray;
//第一次随机选出一个树之后，与数组的最后一个数交换，然后从剩下的0-n-2个树中重复此步骤，这样就可以减少额外的空间开销
void swap(vector<int>& arr, int x, int y){
	if(x == y) return;
	auto z = arr[x];
	arr[x] = arr[y];
	arr[y] = z;
	return;
}
void RandomArray2(vector<int>& oldArray){
	for(auto i = LENGTH;i>0;i--){
		srand(unsigned(time(NULL)));
		auto index = rand()%i;
		swap(oldArray,index,i-1);
	}
}

void Print(){
	for(auto it : oldArray) 
		cout<<it<<" ";
	cout<<endl;
}

int main(){
	for(int i=0;i<LENGTH;i++)
		oldArray.push_back(i);
	cout<<"原数组：";
	Print();
	RandomArray2(oldArray);
	cout<<"洗牌后的数组：";
	Print();
	RandomArray2(oldArray);
	cout<<"洗牌后的数组：";
	Print();
	RandomArray2(oldArray);
	cout<<"洗牌后的数组：";
	Print();
	return 0;
}
