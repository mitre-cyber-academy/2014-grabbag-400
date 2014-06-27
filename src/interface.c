#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "meltdown.h"

#define PAUSE 0.1
#define FULL 364

void interface(void);
void stress(void);
void pulse(void);
void turbine(void);
void status(void);
void fuel(void);
void anthem(void);
void getInfo(void);
void delay(void);

float temperature = 380;
float power = 500;
int elevation = 182;

int main()
{
	srandom((unsigned)time(NULL));

	interface();

	while(1)
	{
		int choice = 0;

		printf("Directive: ");
		scanf("%d", &choice);
		fpurge(stdin);

		switch(choice)
		{
			case 1:
				stress();
				break;
			case 2:
				pulse();
				break;
			case 3:
				turbine();
				break;
			case 4:
				status();
				break;
			case 5:
				fuel();
				break;
			case 6:
				anthem();
				break;
			case 7:
				getInfo();
				break;
			case 8:
				puts("Logging out....Done");
				exit(0);
				break;
			default:
				puts("Invalid command");
				break;
		}

	}

	return(0);
}

void interface(void)
{
	puts("****** CHERNOBYL NUCLEAR REACTOR #4 INTERFACE ******");
	puts("1 - Initiate Stress Test Operations");
	puts("2 - Pulse the Reactor");
	puts("3 - Initiate Steam Turbine Tests");
	puts("4 - Print Current Reactor Status");
	puts("5 - Alter Fuel Rod Elevations");
	puts("6 - Play Anthem of the Glorious Soviet Union");
	puts("7 - Display System Information & Login Credentials");
	puts("8 - Quit");
	puts("*************** 26 April 1986 01:00 ***************");
}

void stress(void)
{
	char decision = '\0';

	printf("\a\n\nWARNING! EXCESSIVE STRESS TESTS COULD CAUSE REACTOR MALFUNCTIONS! ARE YOU SURE YOU WANT TO CONTINUE? [y/n]: ");

	do{
		scanf("%c", &decision);
		fpurge(stdin);
		decision = tolower(decision);

		if(decision == 'y')
		{
			puts("Commencing stress tests...");

			power += 400;
			temperature += 200;

			if(temperature > 760 || power > 1000)
			{
				puts("ALERT: MELTDOWN COMMENCING! DUMPING FILE....");
				puts("EVACUATE FACILITY! EMERGENCY COUNTERMEASURES INITIATED.");

				delay();
				delay();

				puts("COUNTERMEASURES FAILED. EVACUATE CITY IMMEDIATELY!");

				meltdown2();

				exit(0);
			}
			else
			{
				puts("Procedure complete.");
				printf("Cooling...");

				power -= 200;
				temperature -= 100;

				delay();

				printf("done.\n");
			}
			return;
			return;
		}
		if(decision == 'n')
		{	
			puts("Aborting....");
			delay();
			delay();
			delay();
			return;
		}

		printf("Enter y or n: ");
	}while(1);
}

void pulse(void)
{
	char decision = '\0';

	printf("\a\n\nWARNING! EXCESSIVE PULSING COULD LEAD TO A MELTDOWN! ARE YOU SURE YOU WANT TO CONTINUE? [y/n]: ");
	do{
		scanf("%c", &decision);
		fpurge(stdin);
		decision = tolower(decision);

		if(decision == 'y')
		{
			puts("Pulsing....");
			power += 200;
			temperature += 100;

			delay();
			delay();
			delay();

			if(temperature > 760 || power > 1000)
			{
				puts("ALERT: MELTDOWN COMMENCING! DUMPING FILE....");
				puts("EVACUATE FACILITY! EMERGENCY COUNTERMEASURES INITIATED.");

				delay();
				delay();

				puts("COUNTERMEASURES FAILED. EVACUATE CITY IMMEDIATELY!");

				meltdown3();

				exit(0);
			}
			else
			{
				puts("Procedure complete.");
				printf("Cooling...");

				power -= 100;
				temperature -= 50;

				delay();

				printf("done.\n");
			}
			return;
		}
		if(decision == 'n')
		{
			puts("Aborting....");
			delay();
			delay();
			delay();
			return;
		}

		printf("Enter y or n: ");
	}while(1);

}

void turbine(void)
{
	int sequence[4] = {0};
	char valid = '\0';

	printf("\a\n\nNOTICE: Follow the directions as specified in the operations manual. Failure to follow these instructions could lead to catastrophic events.\n");
	printf("Are you sure you want to continue [y/n]?: ");
	scanf("%c", &valid);
	fpurge(stdin);
	valid = tolower(valid);

	while(1)
	{
		if(valid == 'y')
		{
			break;
		}
		if(valid == 'n')
		{
			return;
		}
		printf("Enter y or n: ");
		scanf("%c", &valid);
		fpurge(stdin);
		valid = tolower(valid);
	}


	printf("\n\nProcedure codes:\n");
	puts("20 - Check generator performance and set automatic turn on of emergency diesel generators");
	puts("36 - Freewheel turbine generator");
	puts("72 - Close off steam supply to turbine generator");
	puts("91 - Run turbine generator at full speed");
	
	putchar('\n');

	puts("Enter sequence (format - # # # #)...");
	scanf("%d %d %d %d", &sequence[0], &sequence[1], &sequence[2], &sequence[3]);
	fpurge(stdin);

	putchar('\n');
	puts("Commencing operations....");
	delay();
	delay();
	delay();
	if(power < 700 || power > 800)
	{
		puts("ALERT: MELTDOWN COMMENCING! DUMPING FILE....");
		puts("EVACUATE FACILITY! EMERGENCY COUNTERMEASURES INITIATED.");

		delay();
		delay();

		puts("COUNTERMEASURES FAILED. EVACUATE CITY IMMEDIATELY!");

		meltdown1();

		exit(0);
	}

	if(sequence[0] != 91 || sequence[1] != 72 || sequence[2] != 20 || sequence[3] != 36 || random() % 6 == 0)
	{
		puts("ALERT: MELTDOWN COMMENCING! DUMPING FILE....");
		puts("EVACUATE FACILITY! EMERGENCY COUNTERMEASURES INITIATED.");

		delay();
		delay();

		puts("COUNTERMEASURES FAILED. EVACUATE CITY IMMEDIATELY!");

		meltdown1();

		exit(0);
	}

	delay();
	puts("Test complete. All systems normal.");	
}

void status(void)
{
	puts("\n\nCurrent reactor status:");
	printf("Temperature: %f C\n", temperature);
	printf("Power: %f MW\n", power);
	printf("Fuel Rod Elevation: %d cm\n", elevation);
}

void fuel(void)
{
	char decision = '\0';
	int input = 0;
	int available = FULL - elevation;

	printf("\a\n\nUse extreme caution. Careless use of this operation could lead to catastrophic events.\n");
	puts("Press enter to continue...");
	getchar();

	printf("\nRaise or lower [r/l]?: ");

	while(1)
	{
		scanf("%c", &decision);
		fpurge(stdin);
		decision = tolower(decision);

		switch(decision)
		{
			case 'r':
				printf("Space available: %d cm\n", available);
				printf("Enter raising elevation (in cm): ");

				while(scanf("%d", &input) != 1 || input < 0 || input > available)
				{
					fpurge(stdin);
					printf("Input out of range or invalid. Re-enter lowering elevation: ");
				}

				elevation += input;
				power += ((float)input * .364);
				temperature += (power * .76);

				return;
				break;
			case 'l':
				printf("Space available: %d cm\n", available);
				printf("Enter lowering elevation (in cm): ");
				
				while(scanf("%d", &input) != 1 || input < 0 || input > available)
				{
					fpurge(stdin);
					printf("Input out of range or invalid. Re-enter lowering elevation: ");
				}

				elevation -= input;
				power -= ((float)input * .364);
				temperature -= (power * .76);

				return;
				break;
			default:
				printf("Invalid command. Re-enter: ");
				break;
		}
	}


}

void anthem(void)
{
	puts("Unable to retrieve file!");
}

void getInfo(void)
{
	puts("ім'я користувача: Aleksei Iliyich Zubovic"); //Username
	puts("версія програмного забезпечення: 1.3.8"); //software version
	puts("Дата випуску: 27-8-1980"); //date of release
	puts("Ліцензія: aGVsbG8gd29ybGQ="); //license
	puts("розробники: Інженерний корпус CCCP"); //developer comapny
	puts("система Кількість: 253140d529f4c392d3d00853eba3b635"); //system number
}

void delay(void)
{
	time_t del;

	time(&del);

	while(difftime(time(NULL), del) < PAUSE)
	{
		;
	}
}