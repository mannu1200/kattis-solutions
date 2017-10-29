#include<iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    long int temp;
    int counter=0;
    while(n--) {
        cin>>temp;
        if(temp < 0)
            counter++;
    }
    cout<<counter;
}