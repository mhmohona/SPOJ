#include <bits/stdc++.h>
using namespace std;
    long long t;
    long long i;
    int p;
long long num[1000001];
 //    typeof unsined long long ll;
    bool func(long long val,long long amt){
    long long sum=0;
        for(int x=0;x<t;x++){
            if(num[x]>=val){
                sum+=(num[x]/val);
            }
        }
        return sum>=amt;
    }
int main() {
    // your code goes here
    scanf("%d",&p);
    while(p--){
            scanf("%lld",&t);
        scanf("%lld",&i);
    for(int x=0;x<t;x++)
    scanf("%lld",&num[x]);
    
    sort(num,num+t);
    long long hi=num[t-1]+10;
long long lo=0; 
 hi=num[t-1]+10;
     while((hi-lo)>1){
     long long mid=(hi+lo)/2;
         if(func(mid,i))
     lo=mid;
         else hi=mid;
         
     }
long long ans=(hi+lo)/2;
    printf("%lld\n",ans);
    }
    return 0;
}
