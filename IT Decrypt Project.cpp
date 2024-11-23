//Caesar Cipher: Decrypt version.
//Version#2
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
    cout << "\n\nEnter uppercase Cipher text: ";
    getline(cin, cipher);
    cout << "\nDo you know the key?(y/n) ";
    cin >> q1;

    if(q1 == 'y' || q1 == 'Y')
    {
        cout << "\n================================\n" << "\nEnter your key: ";
        cin >> key;

        for(int i = 0; i <= cipher.length(); ++i)
        {
            if(cipher[i] == char(32))
            {text += char(32);}

            else if(cipher[i] >= 'A' && cipher[i] <= 'Z')
            {
            int f = (cipher[i] - 65) + 97 - key;
            if(f < 97)
            f = f + 26;

            text += f;
            f = 0;
            };            
        }
    cout << "The cipher text: " << cipher;
    cout << "\nThe plain text:  " << text;
    }
    else if(q1 == 'n' || q1 == 'N')
    {
    cout << "\n================================\n" << "\n10 Keys is generated!\n\n";

    for(int j = 1; j <= 10; j++)
        {
            for(int z = 0; z < cipher.length(); z++)
            {
            if(cipher[z] == char(32))
            {text += char(32);}
            else if(cipher[z] >= 'A' && cipher[z] <= 'Z')
            {
            int g = ((cipher[z] - 65) % 26) + 97 - j;
            if(g < 97)
            g = g + 26;
            text += g;
            g = 0;
            }
            }
        cout << j << "'s Key: " << text << endl;
        }
    }
    cout << "\n\n================================\nMade by: Asser Mohammed Youssef.\n================================\n";
return 0;
}
/*
How the project works:
The user will enter the cipher/encrypted text and the system will convert this text into plain readable text.
ASCII code is used for the calculations and converts every char from the text.
The system converts every character of the text into ASCII code then removes the key.
If the user doesn't know the key, the system will generate 10 texts.

Versions:
v1.0 (15/11/24)- converts uppercase cipher word into lowercase text.
v1.2 (19/11/24)- fix the space problem (TEMP fixed, using slash for space.)
v1.5 (21/11/24)- Added keys generating from (1-10).
v2.0 (23/11/24)- the final version.

Made by: Asser Mohammed Youssef.
*/
