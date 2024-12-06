//playfair encrypt
//version#2
#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;

//Function to turn random text to (Natural)
string transform(string text){

    string result;

    
    for(int i = 0; i < text.length(); i++){
    //to remove spaces
        if(isspace(text[i])){
            continue;
        }
    //to remove not alphabet
        if(!isalpha(text[i])){
            continue;
        }
    //to turn lowercase text
        if(isupper(text[i])){
        text[i] = tolower(text[i]);
        }

    result += text[i];
    }

return result;
}

string remove_double(string key){
    string result; 
    unordered_set <char> c;

    //to remove doubles from text
            int z = 0;
    for(char ch : key){
        bool found = false;
        if( (char(ch) == 'i' || char(ch) == 'j') && z == 0){
        result += ch;
        c.insert(ch);
        if(char(ch) == 'j'){
            c.insert(char(int(ch) - 1));
        }
        else if(char(ch) == 'i'){
            c.insert(char(int(ch) + 1));
        }
        z = 1;
        found = true;
        }
        if(c.find(ch) == c.end() && !found){
        result += ch;
        c.insert(ch);
        }
    }
        //to remove doubles from alpha
    string alpha = "abcdefghiklmnopqrstuvwxyz";
    for(int ch : alpha){
        if(c.find(ch) == c.end()){
        result += ch;
        c.insert(ch);
        }
    }
return result;
}

void matrixdraw(string keym){
    int z = 0;
    cout << "\n\n======= The Matrix =======\n\n";
    for(int i = 0; i < keym.length(); i++){
    cout << "| " << keym[i] << " |";
    z++;
    if(z % 5 == 0){
    cout << endl;
    }
    }
    cout << "\n==========================\n\n";
}

//function to encrypt using playfair
string rules(string keym, string pt = ""){
    string matrix[5][5];

    //insert the keym to the matrix
    int z = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix[i][j] += keym[z];
            z++;
        }
    }

    //encrypt
    int fc = 0, sc = 1;
    string result;
    for(int loop = 0; loop < (pt.length() / 2); loop++){
    string f;
    f = pt[fc];
    bool b1;
    b1 = false;
    int col_f, row_f;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
        
        if(matrix[i][j] == f){
        col_f = i; row_f = j; fc += 2; b1 = true;}
        }
    }
    string s;
    s = pt[sc];
    bool b2 = false;
    int col_s, row_s;
    for (int h = 0; h < 5; h++){
        for(int k = 0; k < 5; k++){
        if(matrix[h][k] == s){
        col_s = h; row_s = k; sc += 2; b2 = true;}
        } 
    }
    if(col_f == col_s){
        result += matrix[col_f][(row_f + 1) % 5];
        result += matrix[col_s][(row_s + 1) % 5];
    }
    else if(row_f == row_s){
        result += matrix[(col_f + 1) % 5][row_f];
        result += matrix[(col_s + 1) % 5][row_s];
    }
    else{
        result += matrix[col_f][row_s];
        result += matrix[col_s][row_f];
    }
    }

    string resulte;
for(int i = 0; i < result.length(); i++){
    resulte += char(toupper(result[i]));
}
return resulte;
}

int main(){

    string key, pt;
    cout << "Enter plain text: ";
    getline(cin, pt);
    cout << "Enter key: ";
    getline(cin, key);
    string plain_key = transform(key);
    string plain_text = transform(pt);
        //adding "x" if the text is odd 
        if((plain_text.length() % 2) == 1){
        plain_text += "x";
        }
    string keym = remove_double(plain_key);
    matrixdraw(keym);
    cout << "Encrypted: "<< rules(keym, plain_text) << endl;
    return 0;
}
/*
How the code works:
The user enters text + key, the system will remove all non-alphabet and spaces, turning the text to lower text.
The system will print the matrix.

Problems I'm facing:
The encrypt text progress not always full.
problems with i and j
*/
