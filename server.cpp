#include<iostream>

using namespace std;

int main(void)
{
    int n,t;
    cin>>n;
    cin>>t;
    int _time, counter=0;
    while(n--) {
        cin>>_time;
        if(_time > t) {
            cout<<counter;
            exit(0);
        }
        t -= _time;
        counter++;
    }   
    cout<<counter;
    return 0;
}