#include "ReadMikoFile.h"

void Reader::read(std::string filename){
    using namespace std;
    fstream in(miko);
    if(!in.is_open()){
        cout << "Error, can't open file" << filename << endl;
        system ("pause");
        exit();
    }
    string s;
    params setting;
    cin >> s;
    while(s [0] != '}'){
        if(s == "server"){
            cin >> s;
            s.erase(0);
            s.erase(s.size()-1);
            settings.server = s;
        }
        else if (s == "token"){
            cin >> s;
            s.erase(0);
            s.erase(s.size()-1);
            settings.token = s;
        }
        else if (s == "token"){
            cin >> s;
            s.erase(0);
            s.erase(s.size()-1);
            settings.command_list = s;
        }
        else{
            cout << "Error, I don't know" << s << endl;
            system("pause");
            exit();
        }
    }
}