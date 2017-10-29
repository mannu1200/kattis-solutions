#include<iostream>

using namespace std;

int main(void)
{
    char str[2];
    int h1,h2,m1,m2,s1,s2;
    //input h1
    cin>>str[0];
    cin>>str[1];
    h1 = atoi(str);
    //intput :
    cin>>str[0];

    //input m1
    cin>>str[0];
    cin>>str[1];
    m1 = atoi(str);

    //intput :
    cin>>str[0];

    //input s1
    cin>>str[0];
    cin>>str[1];
    s1 = atoi(str);

    //input h2
    cin>>str[0];
    cin>>str[1];
    h2 = atoi(str);

    //intput :
    cin>>str[0];

    //input m1
    cin>>str[0];
    cin>>str[1];
    m2 = atoi(str);

    //intput :
    cin>>str[0];

    //input m1
    cin>>str[0];
    cin>>str[1];
    s2 = atoi(str);

    //Get time is secs
    int t1 = s1 + 60*m1 + h1*60*60;
    int t2 = s2 + 60*m2 + h2*60*60;
    
    if(t2 < t1) {
        t2 += 24*60*60;
    }
    int t3 = t2-t1;
    int h3 = t3/(60*60);
    t3 = t3 - h3*60*60;
    int m3 = t3/60;
    int  s3 = t3 - m3*60;
    if(h3 < 10)
        cout<<"0";
    cout<<h3<<":";
    if(m3 < 10)
        cout<<"0";
    cout<<m3<<":";    
    if(s3 < 10)
        cout<<"0";
    cout<<s3;    

    return 0;
}