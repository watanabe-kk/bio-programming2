#include <iostream>
#include <vector>
#include <string>
using namespace std;

double CalcGCContent(string seq){
    //この部分を適切に実装せよ。
    double size=seq.size();
    double count=0;
    for(int i=0;i<size;i++){
        if(seq[i]=='G'||seq[i]=='C'){
            count+=1;
        }
    }
    double percent=count/size;
    return percent;
}

int main(void){
    vector<string> sequences = {
        "ATGCGAT",
        "GCGCGCGC",
        "ATATATAC",
        "CCCGGGTT",
        "TTAACCGA"
    };

    //GC contentが50%以上の配列をhigh_gc_sequencesに格納する。
    vector<string> high_gc_sequences;
    high_gc_sequences.reserve(10);
    for(int i=0;i<5;i++){
        if(CalcGCContent(sequences[i])>=0.5){
            cout << CalcGCContent(sequences[i]);
            high_gc_sequences.push_back(sequences[i]);
        }
    }
    
    //この部分を適切に実装せよ。

    //結果の出力
    cout << "GC含量が50%以上の配列：" << endl;
    for(int i = 0; i < high_gc_sequences.size();i++){
        cout << high_gc_sequences[i] << endl;
    }
    return 0;
}
