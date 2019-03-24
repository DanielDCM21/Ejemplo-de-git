#include<bits/stdc++.h>
using namespace std;
int primes[10000000];

int Primes(int a){
  int contador=2;
for(int i=3;i<=a;i+=2){
  for(int j=0;j<i;j++){
    if(primes[j]!=0){
      if((i%primes[j])==0){
        j=i;
      }else{
        if(primes[j]!=0&&primes[j+1]==0){
          primes[j+1]=i;
          contador=contador+1;
          cout<<primes[j+1]<<"\n";
        }
      }
    }else{
      break;
    }
  }
}
return contador;
}

int a,n;

int main(){
  primes[0]=2;
  primes[1]=3;
cin>>a;
//cout<<primes[0]<<"\n"<<primes[1]<<"\n";
  Primes(a);
//cout<<n;
/*
for(int i=0;i<=a;i++){
  if(primes[i]!=0){
    cout<<primes[i]<<"\n";
  }
  if(primes[i]==0){
    i=a+1;
  }
}
*/
return 0;
}
