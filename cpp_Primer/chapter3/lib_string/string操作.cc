#include <iostream>
using std::string;
using std::cout;
using std::endl;
int main(){
	string s3("value");
	cout << s3.empty() <<endl;
	cout << s3.size() << endl;
	int i=0;
	for(auto i : s3){
		cout << i;
	}
	cout<<endl;
	string s4("world");
	cout << s3+s4<<endl;
	cout << (s3 == s4)<<endl;
	return 0;

}
