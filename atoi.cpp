
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int size(const char* str) {

    int i=0;

    while(str[i]!='\0') {
        i++;
    }

    return i;
}

int atoi(const char* str) {

    //const char* new_str = (const char*) str;

    int sum = 0;
    int str_size = size(str);

    //set ptr to last char
    //char ptr = str[str_size-1];
    //sum += (int) ptr-'0';

    int multiplier = 1;

    for(int i=str_size-1; i>=0; i--) {



        char ptr = str[i];
        //cout << ptr << endl;

        int toAdd = (int) (ptr-'0') * multiplier;
        cout << "toAdd " << toAdd << endl;
        sum += toAdd;

        multiplier*=10;
        cout << "mult " << multiplier<<endl;
    }

    cout << sum << endl;

    //char* end = str[size(new_str)];


}

int myAtoi(char *str)
{
    int res = 0; // Initialize result

    // Iterate through all characters of input string and update result
    for (int i = 0; str[i] != '\0'; ++i) {

        cout<<res*10<<endl;
        res = res*10 + str[i] - '0';
    }


    // return result.
    return res;
}

int main_atoi() {

    char* str = "123";
    //const char* new_str = (const char*) str;

    //cout << size(new_str) << endl;
    //atoi(str);
    cout << myAtoi("123");

    //cout << '1'-'0' << endl;

    cin.get();

}
