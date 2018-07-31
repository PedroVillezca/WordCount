#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(){
    map<string, int> lista;
    map<string, int>::const_iterator it;
    string palabra;
    ifstream documento;
    documento.open("Text.txt");
    while(!documento.eof()){
        documento >> palabra;
        for(int i = 0; i<palabra.length(); i++){
            if(palabra[i]>122 || palabra[i]<97){
                if(palabra[i]>=65 && palabra[i]<=90){
                    palabra[i]+=32;
                }
                else{
                    palabra.erase(i,1);
                    i--;
                }
            }
        }
        lista[palabra]++;
    }
    documento.close();
    it = lista.begin();
    for(int i=0; i<lista.size(); i++){
        if(it->second >= 10)
            cout << it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}

/*/
    string palabra;
    cin >> palabra;
    for(int i = 0; i<palabra.length(); i++){
            cout << palabra[i]+0 << endl;
            if(palabra[i]>122 || palabra[i]<97){
                if(palabra[i]>=65 && palabra[i]<=90){
                    palabra[i]+=32;
                }
                else if(!(palabra[i]+0 <= 0)){
                    palabra.erase(i,1);
                    i--;
                }
            }
        }
        cout << palabra << endl;
    /*/
