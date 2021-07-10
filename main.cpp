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


void animal(string animal){
    cout << endl;
    if(animal == "cow"){
        cout << "        \\   ^__^"<<endl;
        cout << "         \\  (oo)\\_______" << endl;
        cout << "           (__)\\       )\\ /" << endl;
        cout << "                ||----w |" << endl;
        cout << "                ||     ||" <<endl;
    } else if(animal == "cat"){
        cout << "  \\"<<endl;
        cout << "   \\"<<endl;
        cout << "   |\\---/|"<<endl;
        cout << "   |(._.) |"<<endl;
        cout << "    \\_`_/-..----."<<endl;
        cout << " ___/ `   ' ,""+  \\ "<<endl;
        cout << "(__...'   _\\    |`.___.';" << endl;
        cout << "  (_,...'(_,.`__)/'.....+" << endl;
    } else if (animal == "snake"){
        cout << "  \\"<<endl;
        cout << "   \\"<<endl;
        cout << "    \\"<<endl;
        cout << "     \\"<<endl;
        cout << "           /^\\/^\\"<<endl;
        cout << "         _|__|  O|"<<endl;
        cout << "\\/     /~     \\_/ \\"<<endl;
        cout << " \\____|__________/  \\"<<endl;
        cout << "        \\_______      \\"<<endl;
        cout << "                `\\     \\                 \\"<<endl;
        cout << "                  |     |                  \\" << endl;
        cout << "                 /      /                    \\" << endl;
        cout << "                /     /                       \\\\" << endl;
        cout << "              /      /                         \\ \\" << endl;
        cout << "              /      /                         \\ \\"<< endl;
        cout << "             /     /                            \\  \\" << endl;
        cout << "           /     /             _----_            \\   \\" << endl;
        cout << "          /     /           _-~      ~-_         |   |" << endl;
        cout << "         (      (        _-~    _--_    ~-_     _/   |" << endl;
        cout << "          \\      ~-____-~    _-~    ~-_    ~-_-~    /" << endl;
        cout << "            ~-_           _-~          ~-_       _-~" << endl;
        cout << "               ~--______-~                ~-___-~" << endl;

        

    } else if (animal == "dear"){
        cout << "  \\"<<endl;
        cout << "   \\"<<endl;
        cout << "(             )" << endl;
        cout << " `--(_   _)--'" << endl;
        cout << "      Y-Y" << endl;
        cout << "     /@@ \\" << endl;
        cout << "    /     \\" << endl;
        cout << "    `--'.  \\             ," << endl;
        cout << "        |   `.__________/)" << endl;

    }
}


int main(int argc, char *argv[]){
    string message = argv[2];

    vector<string> v = split(message);
    for (int i =0; i < v.size(); i++){
        if(i%24==0){
            cout << ""<< v[i] << endl;
        } else {
            cout << v[i];
        }
        
    }


    string animaltype = argv[1];
    animal(animaltype);



}






