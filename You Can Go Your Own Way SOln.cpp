#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
    char P[2*N-2];
    cin>>P;
    for(int i=0;P[i]!='\0';i++)
    {if(P[i]=='E')P[i]='S';
     else{P[i]='E';}
    }
    cout<<P<<"\n";    
    }
    return 0;}
