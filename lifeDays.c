/*Creatdes by Kadir Kaya on 19/02/2016*/
/*Dogum tarihinden itirabren kac gun yasadigini hesaplar.*/
/*Eger baska bir gezegende yasasaydin kac yasinda olacagini hesaplar.*/

#include <stdio.h>

int main(){

	double currentYear, currentMonth, currentDay;
	double birthYear, birthMonth, birthDay;
	double currentTime, birthTime, lifeTime;

	
	int hourForDay, dayForMonth, monthForYear;
	int totalDays, totalMonths, totalYears;
	int anotherYear, anotherMonth, anotherDay;

	/*Bugunun tarihini istiyoruz*/	
	printf("Please enter the current date.\n");
	printf("Year: ");
	scanf("%lf", &currentYear);
	printf("Month: ");
	scanf("%lf", &currentMonth);
	printf("Day: ");
	scanf("%lf", &currentDay);

	/*Dogum tarihini istiyoruz*/
	printf("Please enter your birthdate.\n");
	printf("Year: ");
	scanf("%lf", &birthYear);
	printf("Month: ");
	scanf("%lf", &birthMonth);
	printf("Day: ");
	scanf("%lf", &birthDay);

	currentTime = currentYear*365 + currentMonth*30 + currentDay; 
	birthTime = birthYear*365 + birthMonth*30 + birthDay;
	lifeTime = currentTime - birthTime;
	if(lifeTime < 0)
		printf("You entered wrong date!\n");
	else
		printf("You have lived %.0f days.\n", lifeTime);
		
	
	if(lifeTime >= 0){
		printf("Please enterabout the time of planet:\n");
		printf("How many hours is a day? ");
		scanf("%d", &hourForDay);
		printf("How many day is a month? ");
		scanf("%d", &dayForMonth);
		printf("How many month is a year? ");
		scanf("%d", &monthForYear);
		
		
		totalDays = lifeTime * 24.00/hourForDay;
		
		totalMonths = totalDays / dayForMonth;	
		anotherDay = totalDays % dayForMonth;
		
		totalYears = totalMonths / monthForYear;
		anotherMonth = totalMonths % monthForYear;
		
		anotherYear = totalYears;
		
		printf("\n%d years, %d months, %d days\n", anotherYear, anotherMonth, anotherDay);
	
	}	
	
	


	return 0;
}
