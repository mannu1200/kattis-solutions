#include<iostream>

using namespace std;

int main(void) 
{
    int arr[1002] = {0};
    int n;
    int busNumber;
    cin>>n;
    while(n--) {
        cin>>busNumber;
        //As bus numbers will not be repeated
        arr[busNumber] = 1;
    }
    int howMany = 0;
    for(int i = 1; i < 1002; i++) {
        if(arr[i] && !howMany) {
            cout<<i;
            howMany++;
        } else if(arr[i] && howMany) {
            howMany++;
        } else if(!arr[i] && howMany == 2) {
            cout<<" "<<i-1<<" ";
            howMany = 0;
        } else if(!arr[i] && howMany > 2) {
            cout<<"-"<<i-1<<" ";
            howMany = 0;
        } else if(!arr[i] && howMany == 1) {
            cout<<" ";
            howMany = 0;
        }
    }
    return 0;
}