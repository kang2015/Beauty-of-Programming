#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(a<b){
		return gcd(b,a);
	}
	if(b ==0){
		return a;
	}
	if((a&0x01) == 0 && (b&0x01) ==0){
		return gcd(a>>1,b>>1)<<1;
	}else if((a&0x01)==0){
		return gcd(a>>1,b);
	}else if((b&0x01) == 0){
		return gcd(a,b>>1);
	}else{
		return gcd(b,a-b);
	}
}
int main(){
	cout << gcd(42,30)<<endl;
	return 0;
}
