#include<iostream>
using namespace std;

int main() {
    // char ch[50] = {'s','t','a','t','e','m','e','n','t'};
    // char* cptr = &ch[0];  // ot &ch

    // cout << "ch: " << ch << endl;
    // cout << "cptr: " << cptr << endl;
    // cout << "&ptr: " << &cptr << endl;
    // cout << "ch[0]: " << ch[0] << endl;
    // cout << "cptr[0]: ch[0]: " << cptr[0] << endl;
    // cout << "*cptr: ch[0]: " << *cptr << endl;
    // cout << "*(cptr): ch[0]: " << *(cptr) << endl; 
    // cout << "*(cptr+0): ch[0]: " << *(cptr+0) << endl;

    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << *(ch+3) << endl;
    // cout << cptr << endl;
    // cout << &cptr << endl;
    // cout << *(cptr+3) << endl;
    // cout << cptr+2 << endl;
    // cout << *cptr << endl;
    // cout << cptr+8 << endl;

    char ch = 'S';
    char* cptr = &ch;

    cout << cptr << endl;

    return 0;
}