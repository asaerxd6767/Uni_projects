//Caesar Cipher: Decrypt version.
//Version#1.99
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "================" << char(187);
    cout << "\nCaesar Cipher:\tDecrypted Version.\n";
    cout << "================" << char(188);
    string text, cipher;
    int key;
    char q1;
    start:
    cout << "\n\nEnter Cipher text (using: / for space): ";
    cin >> cipher;
    cout << "\nDo you know the key?(y/n) ";
    cin >> q1;

    if(q1 == 'y' || q1 == 'Y')
    {
        cout << "\n================================\n" << "\nEnter your key: ";
        cin >> key;

        for(int i = 0; i <= cipher.length(); ++i)
        {
            if(cipher[i] == 47)
            {text += char(32); continue;}

            else if(cipher[i] >= 'A' && cipher[i] <= 'Z')
            {
            int f = (cipher[i] - 65) + 97 - key;
            if(f < 97)
            f = f + 26;

            text += f;
            f = 0;
            };            
        }

    cout << "The text: " << text;
    text.clear();
    }
    else if(q1 == 'n' || q1 == 'N')
    {
    cout << "\n================================\n" << "\n10 Keys is generated!\n\n";

    for(int j = 1; j <= 10; j++)
        {
            for(int z = 0; z < cipher.length(); z++)
            {
            int g = ((cipher[z] - 65) % 26) + 97 - j;
            if(g < 97)
            g = g + 26;

            text += g;
            g = 0;
            }
        cout << j << "'s Key: " << text << endl;
        text.clear();
        }
    }

    char q2;
	cout << endl << "\nAnother word?(y/n): ";
	cin >> q2;
	if(q2 == 'y' || q2 == 'Y')
    goto start;
return 0;
}
/*
How the project works:
The user will enter the cipher/encrypted text and the system will convert this text into plain readable text.
ASCII code is used for the calculations and converts every char from the text.
The system converts every character of the text into ASCII code then removes the key.
If the user doesn't know the key, the system will generate 10 texts.

Problems to fix:
DONE v1.5 - make the system convert uppercase encrypted text into lowercase plain text (used ASCII code)
TEMP DONE v1.99 - fix the space problem (TEMP fixed, using slash for space.)

Made by: Asser Mohammed Youssef.
*/