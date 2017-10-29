#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int w, p;
    cin>>w;
    cin>>p;
    vector<int> partitions(p+2);
    vector<bool> spaces(w+1);
    partitions[0] = 0;
    for(int i=1; i <= p; i++) {
        cin>>partitions[i];
    }
    partitions[p+1] = w;
    
    for(int i=0; i < p+2; i++) {
        for(int j = i+1; j < p+2; j++) {
            spaces[partitions[j]-partitions[i]] = true;
        }
    }
    for(int i=0; i <= w; i++) {
        if(spaces[i])
            cout<<i<<" ";
    }
    return 0;
}