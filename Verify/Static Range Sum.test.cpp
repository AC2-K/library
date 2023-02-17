#include"template.hpp"
#include"DataStructure/segtree.hpp"
using S=ll;
S op(S x,S y){return x+y;}
S e(){return 0;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(auto&aa:a){
        cin>>aa;
    }

    segtree<S,op,e> seg(a);
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<seg.prod(l,r)<<'\n';
    }
}