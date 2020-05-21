#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    vector<string> arr;
    while (cin>>str)
    {
        arr.push_back(str);
    }

    reverse(arr.begin(), arr.end());
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0) {
            cout<<arr[i];
        }else{
            cout<<" "<<arr[i];
        }
    }
    return 0;
}
