// Roberto Caamano
// Recitation Assignment 6

#include <iostream>
#include <string>

using namespace std;

string DecToBin(int num){
    if (num == 1)    
        return "1";
    else  
        return DecToBin(num / 2) + to_string(num % 2);
}

int main(){ 

    int dec ;

    cout << "Enter a decimal number: " << endl;
    cin >> dec;

    string str = DecToBin(dec);
    cout << endl;
    cout << "result of converting the decimal number " << dec << " to Binary is: " << str << endl;

}
