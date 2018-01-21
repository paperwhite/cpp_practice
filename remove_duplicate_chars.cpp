// Author: Shibani
// CTCI 4th Edition Chapter 1 - Problem 3

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    string str, output_str;

    cin >> str ;
    output_str = "";
    
    bitset<256> bits(0);
    
    
    for(int i = 0; i < str.length(); i++){
        if(bits[str[i]]==1){
            continue;
        }
        else{
            bits[str[i]]=1;
            output_str += str[i];
        }
    }
    
    cout << output_str << endl;
    return 0;
}
