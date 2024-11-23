//Caesar cipher: The ultimate version.
#include <iostream>
using namespace std;
string encryptedtext(string text, int key = 0)
{
    string cipher;
    if(key > 0)
    {
    for(int i = 0; i < text.length(); i++)
        {
        if(text[i] == char(32)) //Add space into the cipher text.
        {cipher += char(32);}

        if (text[i] >= 97 && text[i] <= 122) //checks the lowercase input.
        {cipher += ((text[i] - 97 + key) % 26) + 65;} //the calculation to convert it to capital + adding key.
        }
    cout << "\n===============================\n";
    cout << "\nThe plain text:  " << text;
    cout << "\nThe cipher text: " << cipher;
    }

    else if(key == 0)
    {
    cout << "\n===============================\n" << "\n10 Keys is generated!\n\n";

    for(int j = 1; j <= 10; j++)
        {
            for(int z = 0; z < text.length(); z++)
            {
            if(text[z] == char(32))
            {cipher += char(32);}

            else if(text[z] >= 'a' && text[z] <= 'z')
            {
            int g = (((text[z] - 97) % 26) + 65) + j;
            if(g > 90)
            g = g - 26;
            cipher += g;
            g = 0;
            }
            }
        cout << j << "'s Key: " << cipher << endl;
        cipher.clear();
        }
    }
return cipher;
}

string decryptedtext(string cipher, int key = 0)
{
        string text;

    if(key > 0)
    {
        for(int i = 0; i <= cipher.length(); i++)
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
    cout << "\n===============================\n";
    cout << "\nThe cipher text: " << cipher;
    cout << "\nThe plain text:  " << text;
    }
    else if(key == 0)
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
        text.clear();
        }
    }
return text;
}

int main()
{
    cout << "================" << char(187);
    cout << "\nCaesar Cipher:\tUltimate Version.\n";
    cout << "================" << char(188);
    string text;
    int key;
    char q;
    cout << "\n\n===============================\nLowercase for Encrypt.\nUppercase for decrypt.\n===============================\n\nEnter your text: ";
    getline(cin, text);
    cout << "Enter the key. (0 = key generate): ";
    cin >> key;
    cout << "\n===============================\nT. Encrypt: From plain to cipher text.\nC. Decrypt: From cipher to plain text.\n===============================\n";
    cout << "\nChoose the operation. (t/c): ";
    cin >> q;
    if(q == 't' || q == 'T')
    {
    encryptedtext(text, key);
    }
    else if(q == 'c' || q == 'C')
    {
    decryptedtext(text, key);
    }
    return 0;
}