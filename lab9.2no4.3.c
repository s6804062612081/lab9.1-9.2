#include <stdio.h>
#include <ctype.h>
#include <string.h>
int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		//if Password is valid
		printf("Accepted\n");
	}
	else{
		printf("Reject\n");
	}
}
int checkValidPass(char *ps) {
	int accepted=0;
	int digit=0;
	int upper=0;
	char repeatupper[strlen(ps)];
	int repeated=0;
	int i,k;
	int j=0;
	if(strlen(ps)>=5&&strlen(ps)<=8){
	    for(i=0;i<strlen(ps);i++){
	    	if (isdigit(ps[i])) {
				digit+=1;
			}
			if (isupper(ps[i])) {
				upper+=1;
				repeatupper[j]=ps[i];
				j++;
			}
		}
		for(i=0;i<j+1;i++){
			for(k=0;k<j+1;k++){
				if(k!=i){
					if(repeatupper[i]==repeatupper[k]){
						repeated=1;
					}
				}
			}
		}
		if(digit>=2 && upper>=2 && !repeated){
			accepted=1;
		}
	}
	
	return accepted;
}
int checkLogin(char *login, char *passwd) {
	if(!strcmp(login, "student1"))
		return 1;
	else
		return 0;
}
