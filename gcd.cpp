#include<vector>
#include<iostream>
#include<time.h>
using namespace std;
int gcd1(int x,int y){
    if(x>y){
        return gcd1(y,x);
    }
    if(x==0){
        return y;
    }
    return gcd1(y%x,x);
}
int gcd2(int x,int y){
    if(x>y){
        return gcd2(y,x);
    }
    if(x==0){
        return y;
    }
    return gcd2(y-x,x);
}
int gcd3(int x,int y){
    if(x>y){
        return gcd3(y,x);
    }
    if(x==0){
        return y;
    }
    if((x&1) == 0){
        if((y&1) == 0){
            return gcd3(x>>1, y>>1)<<1;
        }else{
            return gcd3(x>>1, y);
        }
    }else{
        if((y&1) == 0){
            return gcd3(x, y>>1);
        }else{
            return gcd3(y-x,x);
        }
    }
}
int main(){
    int testcase=0;
    cin>>testcase;
    for(int i=1;i<=testcase;i++){
        int x,y;
        cin >> x >> y;
        clock_t start,end;
        
        start = clock();
        cout << gcd1(x,y) << "; ";
        end = clock();
        cout << "time1: "<< end-start << endl;
        
        start = clock();
        cout << gcd2(x,y) << "; ";
        end = clock();
        cout << "time2: "<< end-start << endl;
        
        start = clock();
        cout << gcd3(x,y) << "; ";
        end = clock();
        cout << "time3: "<< end-start << endl;

        
    }
    
}
