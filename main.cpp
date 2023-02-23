#include"template.hpp"
#include"data-structure/dsu.hpp"
int main(){
    int n,q;
    cin>>n>>q;
    DSU dsu(n);
    while(q--){
        int t,x,y;
        cin>>t>>x>>y;
        if(t==0){
            dsu.merge(x,y);
        }else{
            cout<<(dsu.same(x,y)?"1\n":"0\n");
        }
    }
}