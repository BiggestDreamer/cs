#include <iostream>
using namespace std;
extern int counter;

int main(){
	++counter;
	cout << counter << endl;
	return 0;
}
