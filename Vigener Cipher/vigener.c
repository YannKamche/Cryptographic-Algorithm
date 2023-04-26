/**
Title : Vigener Cipher
Description: This program takes in a plaintext and produce a cipher of that text using the
vigener cipher

An implementation of the vigenere in C*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//function declaration
void vigenereCipher(char* plainText, char *k);

int main() 
{
    char* k = "hello"; //Design the key
    char plainText[101];

    //Ask the user for a sentence or word to encrypt
    printf("Please enter a sentence or word you want to encrypt: ");

    //get the users input (the plain text)
    fgets(plainText, sizeof(plainText), stdin);

    //print the encrypted plain text
    printf("The ciphered text with (key shift - &)")
    return 0;
}

void vigenerCipher(char * plainText, char* k) {
    int i;
    char cipher;
    int cipherValue;
    int len = strlen(k);

    //loop through the length of the plain text string
    for(i = 0; i < strlen(plainText); i++)
    {
        if(islower(plainText[i]))
        {
            cipherValue = ( (int)plaintext[i])
        }
    }    
}