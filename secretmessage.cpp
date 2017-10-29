#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int getNextPerfectSquare(int len)
{
    while(true) {
        int i = sqrt(len);
        if(i*i == len)
            return len;
        len++;
    }
}

int main(void)
{
    int n;
    cin>>n;
    char str[10000];
    
    while(n--) {
        cin>>str;
        int len = strlen(str);
        int m = getNextPerfectSquare(len);
        int k = sqrt(m);
        for(int j=0; j < k; j++) {
            for(int i = k-1; i >= 0; i--) {
                if(i*k+j < len)
                    cout<<str[i*k+j];
            }
        }
        cout<<endl;
    }
    return 0;
}