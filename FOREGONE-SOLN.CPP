#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {char n[50],n2[50];
    cin>>n;
    strcpy(n2,n);
    cout<<"Case #"<<i+1<<": ";
    int k,j;
    for(k=0,j=0;n[k]!='\0';k++)
    {if(n[k]==52){n[k]=50;n2[k]=50;}else{n2[k]=48;} }
    int t;
    
    cout<<n<<" "<<n2<<"\n";
    }return 0;}
