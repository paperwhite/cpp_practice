// Author: Shibani


#include <iostream>
#include <string>
using namespace std;

int main()
{

    string input_str;
    
    cout << "Input string:\n" << endl;
    cin >> input_str ;
    
    char *input_char = &input_str[0u];
    
    int flag=0;
    char* tmp;
    
    char *output_str;
    char * cstr = input_char;
    
    while(*input_char){
        *input_char++;
        //cout << *input_char << endl;
    }
    
    input_char--;
    
    while(cstr < input_char){
        tmp = input_char;
        *cstr++ = *input_char;
        *input_char-- = *tmp;
        //cout << *input_char << endl;
        //cout << *cstr << endl;
    }
    cout << cstr << endl;
    return 0;
}
