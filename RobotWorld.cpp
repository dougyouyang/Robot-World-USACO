//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<int> storage;
    string command;
    int n, s=1, output[100000], size;
    int i;
    
    cin >> n;
    for(i=0;i<n;i++){
        cin >> command;
        if(command=="ADD")
            storage.push(s++);
        else{
            storage.pop();
        }
    }
    
    cout << storage.size() << endl;
    size=storage.size();
    for(i=0;i<size;i++){
        output[i]=storage.top();
        storage.pop();
    }
    for(i=size-1;i>=0;i--)
        cout << output[i] << endl;
    
    return 0;
}
