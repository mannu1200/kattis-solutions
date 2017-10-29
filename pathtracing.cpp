#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<char> > map)
{
    for(int i=0; i < map.size(); i++) {
        for(int j = 0; j < map[i].size(); j++) {
            cout<<map[i][j];
        }
        cout<<endl;
    }
}

void createPath(void)
{
    vector<int> directions;
    char str[5];
    int xPos = 0, yPos = 0, minWidth = 0, maxWidth = 0, minHeight = 0, maxHeight = 0;
    while(cin>>str) {
        cout<<str<<endl;
        if(strcmp(str, "up")) {
            cout<<"Coming into up"<<endl;
            yPos++;
            directions.push_back(1);
            maxHeight = max(maxHeight, yPos);
        }
        else if(strcmp(str, "right")) {
            cout<<"Coming into right"<<endl;
            xPos++;
            directions.push_back(2);
            maxWidth = max(maxWidth, xPos);
        }
        else if(strcmp(str, "down")) {
            cout<<"Coming into down"<<endl;
            yPos--;
            directions.push_back(3);
            minHeight = min(minHeight, yPos);
        }
        else {
            cout<<"Coming into left"<<endl;
            xPos--;
            directions.push_back(4);
            minWidth = min(minWidth, xPos);
        }
    }
    int 
        height = maxHeight - minHeight + 1,
        width = maxWidth - minWidth + 1;
    
    cout<<height<<" "<<width<<endl;

    vector<vector<char> > _map(height+2);
    for(int i = 0 ; i < _map.size(); i++) {
        _map[i].resize(width+2);
        _map[i][0] = '#';
        _map[i][width+2-1] = '#';
    }
    //Start filling the _map
    for(int i = 0; i < _map[0].size(); i++) {
        _map[0][i] = '#';
        _map[_map.size()-1][i] = '#';
    }
    print(_map);
}

int main(void) {
    createPath();
    return 0;
}