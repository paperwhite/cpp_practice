
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    string input_str;
    cout << "Input string:\n";
    cin >> input_str;
    
    // Assuming 256 ASCII characters pesent in string 
    bitset<256> bset(0);
    
    for(int i = 0; i< input_str.length(); i++){
        if(bset.test(input_str[i])){
            cout << "The string has duplicate characters!" << endl;
            return 0;
        }
        else{
            bset.set(input_str[i],1); 
            continue;
        }
    
    }
    cout << "The string "<< input_str << " has unique characters" << endl;
    return 0;

}
