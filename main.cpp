#include <iostream>
#include <vector>

using namespace std;


vector<string> split(string m){
    vector<string> splited;

    string word="";
    for(int i = 0; i < m.length()+1; i++){
        if(isspace(m[i]) == 0){
                splited.push_back(word);
                word = "";
        }
        word+= m[i];
    }
    return splited;
}


int main(int argc, char *argv[]){
    string message = argv[1];

    vector<string> v = split(message);
    for (int i =0; i < v.size(); i++){
        if(i%24==0){
            cout << ""<< v[i] << endl;
        } else {
            cout << v[i];
        }
        
    }
    cout << endl;

    cout << "        \\   ^__^"<<endl;
    cout << "         \\  (oo)\\_______" << endl;
    cout << "           (__)\\       )\\ /" << endl;
    cout << "                ||----w |" << endl;
    cout << "                ||     ||" <<endl;



}





