#include <iostream>

using namespace std;

int main(){
    //pattern trials

    int N=6;
    int rows;
    int cols;

    // Print A - ABA- ABCBA and so on

    for(int rows=0; rows<N ; rows=rows+1){

        char ch;
        for(int cols = 0; cols < rows+1; cols=cols+1){

            int num = cols+1;

            char ch = num + 'A' -1; //here we are mapping char A to number we wanted to map with and substracting the '1' as we wanted to start range from 1 - i.e col1

            cout << ch;
        }

        //this will print ulta way me ABCD - mnje output will be "ABCDCBA" and so on in each row.
        for(char alphabet=ch; alphabet>'A';){
            alphabet=alphabet-1;
            cout << alphabet;
        }

        cout << endl;
    }


    return 0;

}