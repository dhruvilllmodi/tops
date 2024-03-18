#include <stdio.h>
#include <string.h>

 char str[100];
void reverseString(char str[]) {
    int l,i;
    for(i=l;i>=0;i--){
    	printf("%c",str[i]);
	}
    
    }
void concatenatestring(char string1[],char string2[])
{
	strcat(string1,string2);
}

int Palindrome(char str[]) {
	int i;
    int length = strlen(str); 
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1])
        return 0;    
    }
}


void charFrequency(char str[]) {
    int frequency[128] = {0}; 
    int length = strlen(str);
    int i;
    for ( i = 0; i < length; i++) {
        frequency[(int)str[i]]++;
    }
    printf("Character Frequency:\n");
    for ( i = 0; i < 128; i++) {
        if (frequency[i] > 0 && isprint(i)) {
            printf("%c: %d\n", (char)i, frequency[i]);
        }
    }
}
void lenght(char str[]){
	char str1[100];
	int i,lenght;
	for(i=0;str1[i]!='\0';i++)
	{
		lenght++;
	}
}

int countdigitspace(char str[]){
	int digits = 0,spaces = 0;
	int i;
    for(i=0;str[i] !='\0';i++)
	{
		if(isdigit(str[i])){
			(digits++);
		}else if(isspace(str[i]))
		{
			(spaces++);
		}
	}
	printf("%d %d",digits,spaces);
}

void VowelsandConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    int length = strlen(str);
    int i;
    for ( i = 0; i < length; i++) {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        } 
    }
    printf("%d %d ", vowels, consonants);
}

	void copystring(char str[]){
char name1[100],name2[100];
	printf("Enter name 1:");
	scanf("%s",&name1);
	strcpy(name2,name1);
	printf("%s is name2",name2);
}

int main() {
    char str1[100],str2[100];
    int choice;
    while (1){
        printf("Menu:\n");
        printf("1. Reverse a string\n");
        printf("2.concatenate\n");
        printf("3. Check if palindrome\n");
        printf("4. Character frequency\n");
        printf("5. lenght of string");
        printf("6.  count vowel andconsonants,\n");
        printf("7.digit and spaces\n");
        printf("8.copy string\n");
        printf("Enter your choice:\n ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf(" %s", str1);
                reverseString(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 2:
			     printf("enter the first string");
				 scanf("%s",str1);
				 printf("enter the second string");
				 scanf("%s",str2);
			     concatenatestring(str1,str2);
			     printf("concatenate string %s",str1);
			     break ;
            case 3:
                printf("Enter a string: ");
                scanf(" %s", str1);
                if (Palindrome(str1))
                    printf("It's a palindrome.\n");
                else
                    printf("It's not a palindrome.\n");
                break;
            case 4:
                printf("Enter a string: ");
                scanf(" %s", str1);
                charFrequency(str1);
                break;
            case 5:
			     printf("enter a string");
				 scanf("%s",str1);
				 lenght(str1);
				 break;    
            case 6:
                printf("Enter a string: ");
                scanf(" %s", str1);
                VowelsandConsonants(str1);
                break;
             case 7:
			     printf("enter a string");
				 scanf("%s",str1);
				 countdigitspace(str1);
				 break;  
			case 8:
			     printf("enter a string");
				 scanf("%S",str1);
				 copystring(str1);
				 break;	 
            default:
                printf("Invalid choice!\n");
        }
    } 
	return 0;
}


