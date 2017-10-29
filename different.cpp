#include<iostream>

using namespace std;

int main(void)
{
    unsigned long long int a, b;
    while(cin>>a) {
        cin>>b;
        if(a > b)
            cout<<a-b<<endl;
        else 
            cout<<b-a<<endl;
    }
}