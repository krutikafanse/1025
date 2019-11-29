#include<iostream> 
using namespace std; 
int main() 
{ 
    int i; 
    cout<<"enter the number of rows"<<endl; 
    cin>>i; 
    for(int j=i;i>0;j--) 
    { 
        cout<<endl; 
        for(int k=0;k<i-j;k++) 
        { 
            cout<<" "; 
        } 
        for(int z=j;z>0;z--) 
        { 
            cout<<"* "; 
        }     } } 
