#include <iostream>
using namespace std;
//number 1
int myStrcmp(const char* str1, const char* str2) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    //numer 1
    //char str1[100];
    //char str2[100];

    //cout << "Enter first string: ";
    //cin.getline(str1, 100);

    //cout << "Enter second string: ";
    //cin.getline(str2, 100);

    //int result = myStrcmp(str1, str2);

    //if (result == 0) {
    //    cout << "Strings are equal";
    //}
    //else if (result < 0) {
    //    cout << "First string is smaller";
    //}
    //else {
    //    cout << "First string is bigger";
    //}
    //number 2
    //char str[100];

    //cout << "Enter string: ";
    //cin.getline(str, 100);

    //int size = 0;

    //while (str[size] != '\0') {
    //    size++;
    //}

    //bool palindrome = true;

    //for (int i = 0; i < size / 2; i++) {
    //    if (str[i] != str[size - 1 - i]) {
    //        palindrome = false;
    //        break;
    //    }
    //}

    //if (palindrome) {
    //    cout << "This is a palindrome";
    //}
    //else {
    //    cout << "This is not a palindrome";
    //}

    //number 3
    char str[200];

    cout << "Enter string: ";
    cin.getline(str, 200);

    int words = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ' && str[i] != '\t') {
            if (inWord == false) {
                words++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }

    cout << "Number of words: " << words;
}