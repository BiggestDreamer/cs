#include <iostream>
using namespace std;

// f(x) = x^2 -2
// 不断使用x = x-f(x)/f'(x)迭代解，直到满足精度
double fx(double x, double n){
	return x*x-n;
}
double fdx(double x){
	return 2*x;
}
int main(){
	double x=1;
	double y;
	printf("请输入一个数来计算它的平方根：");
	scanf("%lf", &y);
	do{
		x = x - fx(x, y)/fdx(x);
		cout<<x<<endl;
	}while(fx(x,y)>0.00001 || fx(x,y)<-0.00001);
	cout<<"the final result is "<<x<<endl;
	return 0;
}
