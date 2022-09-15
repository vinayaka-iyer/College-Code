// header files
#include<iostream>
using namespace std;

// to find length of given string
int lenString(char str[]){
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}

// to concatenate two strings
char * concat(char str1[], char str2[]){
    int len1 = lenString(str1);
    int len2 = lenString(str2);
    int j = 0;
    for(int i = 0; i < (len1+len2); i++){
        if(i >= len1){
            str1[i] = str2[j];
            j++;
        }
    }
    return str1;
}

// to copy one string to another string
char * copyString(char str1[], char str2[]){
    int i;
    for (i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
    return str2;
}

// to compare two strings
void compare(char str1[], char str2[]){
    int str1pow = 0;
    int str2pow = 0;
    for (int i = 0; str2[i] && str1[i] != '\0'; i++){
        if (str1[i] < str2[i]){
            str2pow++;
            break;
        }
        if (str1[i] > str2[i]){
            str1pow++;
            break;
        }
    }

    if(str1pow==str2pow){
        cout << "string 1 is equal to string 2";
    }

    if(str1pow < str2pow){
        cout << "string 2 is greater than string 1";
    }
    if(str2pow < str1pow){
        cout << "string 1 is greater than string 2";
    }
}

// to find first occurance of a character in a string
int firstOccurance(char str[], char a){
    int ans = -1;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == a){
            ans = i;
            break;    
        }
    }
    return ans+1;
}

// to check if given substring is present in a string
void substringPresent(char str1[], char substr[]){
    int i,j,temp;
    for(i=0;str1[i]!='\0';i++){
        j=0;
        if(str1[i]==substr[j]){
            temp=i+1;
            while(str1[i]==substr[j]){
                i++;
                j++;
            }

            if(substr[j]=='\0'){
                cout<<"The substring is present in given string at position "<<temp<<"\n";
                break;
            }
            else{
                i=temp;
                temp=0;
            }
        }
    }
    if(temp==0){
        cout<<"The substring is not present in given string\n";
    }
}

// reverse a string
char * reverse(char str1[]){
    int start = 0;
    int end = lenString(str1) -1;

    for(int i = 0; start <= end; i++ ){
        char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
    }

    return str1;
}

// replace vowels with * and consonants with #
char * encode(char str1[]){
    for(int i = 0; str1[i] != '\0'; i++){
        if(isalpha(str1[i])){
            if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){
            str1[i] = '*';
            }
        else{
            str1[i] = '#';
            }
        }
    }
    return str1;
}