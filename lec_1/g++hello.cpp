#include <iostream>
#include<string>
#include <fstream>
using namespace std;

int main(void){
    ifstream ist("input.txt");
    if(!ist){
        cout << "Cannot open input.txt" << endl;
        exit (1);
    }
    string s,t;
    getline(ist,s);
    ist >> t;
    cout << t << endl;
    cout << s << endl;
    ist.close();
}
