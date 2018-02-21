/* 
 * File:   main.c
 * Author: MacBookPro
 *
 * Created on 15 February 2018, 12:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
int letter(char arr[]);
int num(char arr[]);
int word(char arr[]);
int main() {
    char str[100];
    printf("Enter the string: ");
    gets(str);
    for(int x = 0; str[x] != '\0' ;x++)
        printf("%c",str[x]);
    printf("\n");
    printf("Letters: %d\n",letter(str));
    printf("Numbers: %d\n",num(str));
    printf("Words: %d\n",word(str));
    return 0;
}

int letter(char arr[]){
    int let=0;
    for(int x=0; arr[x] != '\0';x++){
        if((arr[x] >= 'a' && arr[x] <= 'z') || (arr[x] >='A' && arr[x] <= 'Z')){
            let++;
        }
    }
    
    return let;
}

int num(char arr[]){
    int number = 0;
    for(int x =0; arr[x] != '\0' ;x++){
        if(arr[x] >= '0' && arr[x] <= '9'){
            number++;
        }
    }
    
    return number;
}

int word(char arr[]){
    int wd = 0;      
    //The 'two' char or more is means words
    for(int ch = 0; arr[ch] != '\0'; ch++){
        if((arr[ch] >= 'a' && arr[ch] <= 'z') || (arr[ch] >='A' && arr[ch] <= 'Z')){//check if the first char is letter
            if((arr[ch+1] >= 'a' && arr[ch+1] <= 'z') || (arr[ch+1] >='A' && arr[ch+1] <= 'Z')){ // also check the next letter is char
            for(int next_ch = ch+1; arr[next_ch] != '\0' ; next_ch++){ // make a loop till reach end or string
                if(!(arr[next_ch+1] >= 'a' && arr[next_ch+1] <= 'z') && !(arr[next_ch+1] >='A' && arr[next_ch+1] <= 'Z')){ // check if the forward letter is not letter
                    wd++; //increase the word one 
                    ch = next_ch+1 ; // start the original loop from end of the this loop
                    break; // break the loop 
                }
                
            }
          }
        }
    }
        
    
    
    return wd;
}