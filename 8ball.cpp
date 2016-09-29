#include <stdio.h> 
#include <time.h>
#include <stdlib.h> 
#define RANGE 20 

#include <string>
#include "upm/jhd1313m1.h"

#define I2C_BUS  0
#define RGB_WHT 0xff,0xff,0xff
#define RGB_RED 0xff,0x00,0x00
#define RGB_GRN 0x00,0xff,0x00
#define RGB_BLU 0x00,0x00,0xff
#define SLEEP_TIME 2

using namespace std;
upm::Jhd1313m1* lcd;

void display(string str1, string str2, int red, int green, int blue)
{
	lcd->clear();
	lcd->setColor(red, green, blue);
	lcd->setCursor(0,0); /* first row */
	lcd->write(str1);
	lcd->setCursor(1,2); /* second row */
	lcd->write(str2);
	sleep(SLEEP_TIME);
}


int main(){ 

int numbers[RANGE]; 
int c, response; 
int repeat; 

printf("Magic Eight Ball\n");
printf("Press enter to get a response.\n"); 

repeat=1; 

while(repeat==1){ 

	srandom((unsigned)time(NULL)); 
		for(c=0;c<RANGE;c++) 
			numbers[c]=0; 
			getchar(); 

	for(c=0;c<1;c++){ 

		do{ 

			response = random()%RANGE; 
			}

		while(numbers[response]); 

			if(response == 0) 
			printf("As I see it, yes"); 

			else if(response==1) 
			printf("Ask again later"); 

			else if(response==2) 
			printf("Better not tell you now"); 

			else if(response==3) 
			printf("Cannot predict now"); 

			else if(response==4) 
			printf("Concentrate and ask again"); 

			else if(response==5) 
			printf("Dont count on it"); 

			else if(response==6) 
			printf("It is certain"); 

			else if(response==7) 
			printf("It is decidedly so"); 

			else if(response==8) 
			printf("Most likely"); 

			else if(response==9) 
			printf("My reply is no"); 

			else if(response==10) 
			printf("My sources say no"); 

			else if(response==11) 
			printf("Outlook good"); 

			else if(response==12) 
			printf("Outlook not so good"); 

			else if(response==13) 
			printf("Reply hazy, try again"); 

			else if(response==14) 
			printf("Signs point to yes"); 
		
			else if(response==15) 
			printf("Very doubtful"); 

			else if(response==16) 
			printf("Without a doubt"); 

			else if(response==17) 
			printf("Yes"); 

			else if(response==18) 
			printf("Yes - definitely"); 

			else 
			printf("You may rely on it"); 
			} 

			printf("\n"); 
			printf("Would you like to ask another question (0/1)? \n"); 
			scanf("%d",&repeat); 
			} 
return 0; 
}
