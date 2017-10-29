#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(void)
{
    char str[1000];
    int n;
    vector<int> pattern;
    while(cin>>n) {
        pattern.resize(n);
        for(int i=0; i < n; i++)
            cin>>pattern[i];
        cin>>str;
        cout<<str<<endl;
        //pad zeros
        int strLen = strlen(str);
        int zerosCount = strLen%n;
        if(zerosCount) {
            zerosCount = n - zerosCount;
        }
        char zeros[zerosCount+1];
        for(int i=0; i < zerosCount; i++) {
            zeros[i] = '0'; 
        }
        cout<<str;
        strcat(str, zeros);
        char newStr[strlen(str)];

        for(int i=0; i < strlen(newStr)/n; i++) {
            for(int j=0; j < n; j++) {
                newStr[i*n+j] = str[i*n+j+pattern[j]];
            }
        }
    
        cout<<newStr<<endl;

    }
    return 0;
}