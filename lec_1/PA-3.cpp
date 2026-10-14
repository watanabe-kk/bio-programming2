#include<string>
#include<iostream>
#include<fstream>

using namespace std;

int main(void){
    int a,b;
    cin >> a >> b;
    int s=a+b;
    cout << s << endl;

    ifstream ist("input.txt");
    if(!ist){
        cout << "cannot open input.txt" << endl;
        exit(1);
    }
    
    string t;
    ist >> t;
    cout << t << endl;
    ist.close();

    ofstream ost("output.txt");
    if(!ost){
        cerr << "Cannot open output.txt" << endl;
        exit(2);
    }
    ost << t << endl;
    ost.close();
}