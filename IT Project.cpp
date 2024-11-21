//Caesar cipher.
//version#2.99
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "================" << char(187);
    cout << "\nCaesar Cipher:\tEncrypted Version.\n";
    cout << "================" << char(188);
    string text, cipher;
    int key;
    start:
    cout << "\n\nEnter lowercase text (Using / instead of space): ";
    cin >> text;
    cout << "\nEnter the key: ";
    cin >> key;
    for(int i = 0; i < text.length(); i++)
    {
    if(text[i] == 47) //Converts the slash "/" into space.
    {cipher += char(32); continue;}

    if (text[i] >= 97 && text[i] <= 122)
    {cipher += ((text[i] - 97 + key) % 26) + 65;} 
    }
    cout << "\nThe Plain Text: " << text << endl;
    cout << "The Cipher text: " << cipher << endl;
    cout << "\n Made by: Eng/ Asser Mohammed Youssef";
    cipher.clear();
	char q;
	cout << endl << "Another word?(y/n): ";
	cin >> q;
	if(q == 'y' || q == 'Y')
    goto start;
return 0;
}
/*
How the project work:
- The user will enter a word and the system will read how many letters the user wrote, this will determine when the loop will stop.
- Using the ASCII code, the system will convert the letters to ASCII code to add the key number, and convert them back to letters.
- If the letter is out of the alphabet table, the system will take the modulas of the ASCII code and will remove 26 which is alphabet number.

Problems to be fixed:
DONE v2.5- the cypher text is lowercase. (TBF - read the ASCII code again and convert the text to capital alphabet numbers)
TEMP DONE v2.99 the user can enter 1 word each time. (IDK how to fix it)

made by: Asser Mohammed Youssef.
*/