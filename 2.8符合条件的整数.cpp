#include<vector>
#include<iostream>
using namespace std;
int main(){
    int tc = -1;
    cin >> tc;
    for(int tec=1;tec<=tc;tec++){
        int n = -1;
        cin >> n;
        vector<long long> remains(n,-1);
        remains[1] = 1;
        for(int t=10;;t=(t*10)){
            int cur = t%n;
            if(remains[cur] == -1){
                remains[cur] = t;
            }
            for(int i=0;i<n;i++){
                if(remains[i]!=-1 && remains[(cur+i)%n]==-1 && t > remains[i]){
                    remains[(cur+i)%n] = t+remains[i];
                }
            }
            if(remains[0] !=-1){
                break;
            }
        }
        cout << "Case " << tec << ": "<< remains[0]<< endl;
    }
    
    return 0;
}
