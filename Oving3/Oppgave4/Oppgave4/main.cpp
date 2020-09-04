//
//  main.cpp
//  Oppgave4
//
//  Created by Ian Evangelista on 31/08/2020.
//  Copyright © 2020 Ian Evangelista. All rights reserved.
//

#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string word;
    string sentence;
    cout << "Skriv inn tre ord, et på hver linje:" << endl;
    
    for (int i = 0; i < 3; i++) {
        cin >> word;
        i < 2 ? sentence.append(word + " "): sentence.append(word + ".");
    }
    
    cout << sentence << endl;
    vector<string> result;
    stringstream s_stream(sentence);
    while(s_stream.good()) {
        string substr;
        getline(s_stream, substr, ' ');
        result.push_back(substr);
    }
    
    for(int i = 0; i < result.size(); i++) {
        i < 2 ? cout << "Lengden til " + result.at(i) + " er: " + to_string(result.at(i).length()) << endl : cout << "Lengden til " + result.at(i).substr(0, result.at(i).size()-1) + " er: " + to_string(result.at(i).substr(0, result.at(i).size()-1).length()) << endl;
    }
    cout << "Lengden til setningen er: " + to_string(sentence.length()) << endl;
    string sentence2 = sentence;
    
    if(sentence2.length() >= 12){
        for(int i = 9; i < 12; ++i) {
            sentence2[i] = 'x';
        }
    }
    else{ cout << "Sentence er for kort." << endl;}
    cout << "Sentence er: " + sentence << endl;
    cout << "Sentence2 er: " + sentence2 << endl;
    
    if(sentence2.length() >= 5){
        string sentence_start = sentence.substr(0,5);
        cout << "Sentence er: " + sentence << endl;
        cout << "Sentence_start er: " + sentence_start << endl;
    }
    else {cout << "Sentence er for kort." << endl;}
    
    size_t posisjon = sentence.find("hallo");
    posisjon != string::npos ? cout << "Hallo starter fra posisjon: " << posisjon << endl : cout << "Hallo ble ikke funnet." << endl;
    
    for(int i = 0; i < sentence.length()-1; i++){
        if(sentence[i] == 'e' && sentence[i+1] == 'r'){
            cout << " 'er' finnes og starter på posisjon: " + to_string(i) << endl;
        }
    }
    
}
