#include<bits/stdc++.h>
using namespace std;
int main() {
    int T ;
    cin>>T;
    while (T--)
    {
        int N,x,k;
        cin>>N>>x>>k;
        int s = (N+1)%k;
        
        if (x%k==0 || x%k==s)
        {
        cout<<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
            
        }
	return 0;
}
