#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    for(ll x=1;x<=t;x++){
        ll r,c,k;
        cin>>r>>c;
        ll mat[r][c];
        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                cin>>mat[i][j];
            }
        }
        ll z=10;
        ll ans=0;
        while(z>0){
            z=0;
            for(ll i=0;i<r;i++){
                for(ll j=0;j<c-1;j++){
                    if(mat[i][j+1]>(mat[i][j]+1)){
                        k=((mat[i][j+1]-mat[i][j])-1);
                        ans+=k;
                        mat[i][j]+=k;
                        z++;
                    }
                }
                for(ll j=c-1;j>0;j--){
                    if(mat[i][j-1]>(mat[i][j]+1)){
                        k=((mat[i][j-1]-mat[i][j])-1);
                        ans+=k;
                        mat[i][j]+=k;
                        z++;
                    }
                }
            }
            
            for(ll j=0;j<c;j++){
                for(ll i=0;i<r-1;i++){
                    if(mat[i+1][j]>(mat[i][j]+1)){
                        k=((mat[i+1][j]-mat[i][j])-1);
                        ans+=k;
                        mat[i][j]+=k;
                        z++;
                    }
                }
                for(ll i=r-1;i>0;i--){
                    if(mat[i-1][j]>(mat[i][j]+1)){
                        k=((mat[i-1][j]-mat[i][j])-1);
                        ans+=k;
                        mat[i][j]+=k;
                        z++;
                    }
                }
            }
        }
        cout<<"Case #"<<x<<": "<<ans<<endl;
    }
}
