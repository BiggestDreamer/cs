#include <vector>
#include <iostream>
using namespace std;
#define ROW 100
int main(){
	vector< vector<char> > map(ROW, vector<char>(ROW, '#'));
	for (int i=0;i<map.size();i++){
		for(int j=0;j<map[0].size();j++)
			cout << map[i][j];
		cout<<endl;
	}
	return 0;
}
