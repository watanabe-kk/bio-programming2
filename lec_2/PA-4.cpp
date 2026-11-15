#include<iostream>
#include<string>
#include<map>
#include<set>
#include<fstream>

using namespace std;

int main(void){
    ifstream ist("human_protein_interaction.txt");
    if(!ist){
        cout<<"ファイルを開けませんでした"<<endl;
        return 1;
    }

    map<string,int> interaction_count;
    string line;
    while(getline(ist,line)){
        int len=line.length();
        int i=0;

        while(i<len&&line[i]==' '){
            i++;
        }
        if(i>=len){
            continue;
        }
        string p1="";
        while(i<len&&line[i]!=' '){
            p1+=line[i];
            i++;
        }
        while(i<len&&line[i]==' '){
            i++;
        }
        string p2="";
        while(i<len&&line[i]!=' '){
            p2+=line[i];
            i++;
        }
        if(p1!=""&&p2!=""){
            interaction_count[p1]++;
            interaction_count[p2]++;
        }
    }
    ist.close();

    string max_protein="";
    int max_count=-1;

    for(map<string,int>::const_iterator it=interaction_count.begin();it!=interaction_count.end();it++){
        if(it->second>max_count){
            max_count=it->second;
            max_protein=it->first;
        }
    }

    cout<<"もっとも相互作用の相手が多いたんぱく質は"<<max_protein<<endl;
    cout<<"その数は"<<max_count<<endl;
    return 0;
        

}
