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
    for(int x=0;x<arr[x]!='\0';x++){
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
    
        //the last time for deep thinking 
    int x=1;
        while(arr[x] != '\0'){
            if(arr[x] == ' '){
                wd++;
            }
            x++;
        }
    
    
    return wd;
}