#include <iostream>
#include <string>
using namespace std;

//この部分を適切に実装せよ。
int HammingDistance(string a,string b){
    int count=0;
    if(a.size()!=b.size()){
        return -1;
    }else{
        for(int i=0;i<6;i++){
            if(a[i]!=b[i]){
                count+=1;
            }
        }
    }
    return count;
}

int main(void){
    string a = "AACCGT";
    string b = "AATCAT";
    string c = "AACCG";

    int dist1 = HammingDistance(a, b);
    if (dist1 != -1) {
        cout << "Hamming Distance: " << dist1 << endl;
    }else{
        cout << "The two strings have different lengths." << endl;
    }
    int dist2 = HammingDistance(a, c);
    if (dist2 != -1) {
        cout << "Hamming Distance: " << dist2 << endl;
    }else{
        cout << "The two strings have different lengths." << endl;
    }

    return 0;
}
