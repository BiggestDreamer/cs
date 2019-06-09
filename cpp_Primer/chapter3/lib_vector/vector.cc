#include <iostream>
#include <vector>
#include <string>
using namespace std;
void show2(vector<string>& v){
	for(vector<string>::iterator iter = v.begin(); iter != v.end(); iter++)
		cout<<*iter<<endl;
	return;
}
void show3(vector<string>& v){
	for(vector<string>::const_iterator iter = v.begin(); iter!=v.end(); iter++)
		cout<<*iter<<endl;
	return;
}
void show(vector<string>& v){
	for(auto i : v)
		cout<<i<<endl;
	return;
}
int main(){
	vector<int> v1;
	vector<int> v2(v1);
	vector<string> v3(10, "hi!");
	vector<int> v4(10, 2);
	show(v3);
	cout<<v3.empty()<<endl;
	cout<<v3.size()<<endl;
	v3.push_back("world!");
	show2(v3);
	show3(v3);
	return 0;
}
