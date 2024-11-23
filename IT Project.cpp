//Caesar cipher: Encrypt version.
//version#3
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "================" << char(187);
    cout << "\nCaesar Cipher:\tEncrypted Version.\n";
    cout << "================" << char(188);
    string text, cypher;
    int key;
    start:
    cout << "\n\nEnter lowercase text: ";
    getline(cin, text);
    cout << "\nEnter the key: ";
    cin >> key;
    for(int i = 0; i < text.length(); i++)
    {
    if(text[i] == char(32)) //Add space into the cypher text.
    {cypher += char(32);}

    if (text[i] >= 97 && text[i] <= 122) //checks the lowercase input.
    {cypher += ((text[i] - 97 + key) % 26) + 65;} //the calculation to convert it to capital + adding key.
    }
    cout << "\nThe Plain Text: " << text << endl;
    cout << "The Cypher text: " << cypher << endl;
    cout << "\nMade by: Eng/ Asser Mohammed Youssef\n";
    cypher.clear();
	char q;
	cout << "\nAnother word?(y/n): ";
	cin >> q;
	if(q == 'y' || q == 'Y')
    goto start;
return 0;
}
/*
How the project work:
- The user will enter the text and the system will read how many letters the user wrote, this will determine when the loop will stop.
- Using the ASCII code, the system will convert the letters to ASCII code to add the key number, and convert them back to letters.
- If the letter is out of the alphabet table, the system will take the modulas of the ASCII code and will remove 26 which is alphabet number.

Versions:
1. v1.0 (13/11/24) - The user can enter only 4 characters and convert it to lowercase cypher character.
2. v2.0 (15/11/24)- the user can enter a word and convert it to lowercase cypher word.
4. v2.5 (19/11/24)- the user can enter many words but the user will enter "/" each time.
5. v3.0 (23/11/24) - The final version.

problems I faced:
version 1: The code can use 4 characters. (fixed when added string and merged it the loop statement by taking the length)
version 2: The cypher word was lowercased. (fixed when used ASCII code of capital alphabets)
version 2.5: The system couldn't read the spaces. (fixed when added "getline" instead of "cin")
made by: Asser Mohammed Youssef.
*/
