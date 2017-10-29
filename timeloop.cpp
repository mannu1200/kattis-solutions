#include<iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int counter = 1;
    while(n--){
        cout<<counter++<<" Abracadabra"<<endl;
    }
    return 0;
}