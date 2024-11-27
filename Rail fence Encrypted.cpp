//Rail fence: Encrypted version.
//Version#1.5
#include <iostream>
using namespace std;

string stc(string result){
	string capital;
	for(int i = 0;i < result.length(); i++){
		capital += (((result[i] - 'a') % 26) + 'A');
	}
return capital;
}

int main(){
	int depth;
	string text;
	cout << "Enter text: ";
	cin >> text;
	cout << "Enter depth: ";
	cin >> depth;
	
	string matrix[depth][text.length() / depth];
	int z = 0;
	for(int i = 0; i < text.length()/depth; i++){
	for(int j = 0; j < depth; j++){
		matrix[j][i] += text[z];
		z++;
		}
    }
	string results;
	for(int x = 0;x < depth; x++){
	for(int y = 0;y < (text.length()/depth); y++){
		results += matrix[x][y];
	  }
	}
	cout << "\nEncrypted:  "<< results;
	cout << "\nEncrypted:  "<< stc(results);
	return 0;
	}
/*
problems I'm facing:
- the capital arc does not appear. (FIXED: v1.5)
- cannot enter text with spaces.
*/
