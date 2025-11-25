// Caesar cipher: The ultimate version.
#include <bits/stdc++.h>
using namespace std;

// Function to turn random text to (Natural)
string transform(string text)
{
    string result = "";
    for (char c : text)
    {
        // to remove not alphabet
        if (!isalpha(c))
            continue;

        // to turn lowercase text
        else if (isupper(c))
            result += tolower(c);
    }
    return result;
}
string encryptedtext(string text, int key = 0)
{
    transform(text);
    string cipher = ""; // Cipher text container
    if (key > 0)
    {
        for (char ch : text)
        {
            if (ch == ' ') // Add space into the cipher text.
                cipher += ' ';

            else
                cipher += ((ch - 97 + key) % 26) + 65; // the calculation to convert it to capital + adding key.
        }
        cout << "\n===============================\n";
        cout << "\nThe plain text:  " << text;
        cout << "\nThe cipher text: " << cipher;
    }

    else if (key == 0)
    {
        cout << "\n===============================\n"
             << "\n10 Keys is generated!\n\n";

        for (int num = 1; num <= 10; num++)
        {
            for (char ch : text)
            {
                if (ch == ' ')
                    cipher += ' ';

                else
                {
                    int ASCII = (((ch - 97) % 26) + 65) + num;
                    if (ASCII > 90) // if it exceeded the Z
                        ASCII -= 26;
                    cipher += ASCII;
                    ASCII = 0;
                }
            }
            cout << num << "'s Key: " << cipher << endl;
            cipher.clear();
        }
    }
    return cipher;
}

string decryptedtext(string cipher, int key = 0)
{
    string text;
    if (key > 0)
    {
        for (char ch : cipher)
        {
            if (ch == ' ')
                text += ' ';

            else if (ch >= 'A' && ch <= 'Z')
            {
                int ASCII = (ch - 65) + 97 - key; // the calculation to turn the character to decrypted
                if (ASCII < 97)
                    ASCII += 26;
                text += ASCII;
                ASCII = 0;
            }
        }
        cout << "\n===============================\n";
        cout << "\nThe cipher text: " << cipher;
        cout << "\nThe plain text:  " << text;
    }
    else if (key == 0)
    {
        cout << "\n================================\n"
             << "\n10 Keys is generated!\n\n";

        for (int num = 1; num <= 10; num++)
        {
            for (char ch : cipher)
            {
                if (ch == ' ')
                {
                    text += ' ';
                }
                else if (ch >= 'A' && ch <= 'Z')
                {
                    int ASCII = ((ch - 65) - num % 26) + 97;
                    if (ASCII < 97)
                        ASCII += 26;
                    text += ASCII;
                    ASCII = 0;
                }
            }
            cout << num << "'s Key: " << text << endl;
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
    if (q == 't' || q == 'T')
    {
        encryptedtext(text, key);
    }
    else if (q == 'c' || q == 'C')
    {
        decryptedtext(text, key);
    }
    return 0;
}
