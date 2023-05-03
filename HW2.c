#include <stdio.h>

int main(void)
{


    int getFirstDay(int year);
    
    while(true)
    {
        printf("Enter the year for the calendar: ");
        int year;
        scanf("%d", &year);
        printf("\n");
        printf("\n");
        getFirstDay(year);  
       

    }
    return 0;
}

getFirstDay(year)
{
   int firstDay = ((year - 1) * 365 + (year - 1 / 4 ) - (year - 1 / 100) + (year - 1 / 400) + 1) % 7; 
   printf("The first day is %d", firstDay);
   printf("\n");
   printf("---------------------------------------------");
   printf("\n");
   printf("        January               %d", year);
   printf("\n");
   printf("        Sun Mon Tue Wed Thu Fri Sat");
   printf("\n");
   int week1[7];
   int week2[7];
   int week3[7];
   int week4[7];
   int week5[7];
   int week6[7];
   
   printf("         ");
   for (int i = 0; i <= 6; i++ )
   {
       if (i < firstDay && i != firstDay){
           printf(" ");
       }
       
       else if (i <= 6  && i == firstDay) {
           week1[i] = 1;
           printf("%d", week1[i]);
       }
       if (i > firstDay && i <= 6){
           week1[i] = i - firstDay + 1;
           printf("%d", week1[i]);
           
        }
        printf("   ");
   }
   
   printf("\n");
   printf("         ");
   for (int j = 0; j <= 6; j++ ){
       int week2Num = 7 - firstDay + 1 + j;
       week2[j] = week2Num;
       printf("%d", week2[j]);
       if (week2Num > 9){
           printf("  ");
       }
       else {
           printf("   ");
       }
   }
   
   printf("\n");
   printf("         ");
   for (int k = 0; k <= 6; k++ ){
       int week3Num = 7 - firstDay + 1 + k + 7;
       week3[k] = week3Num;
       printf("%d", week3[k]);
       printf("  ");
   }
   printf("\n");
   printf("         ");
   for (int l = 0; l <= 6; l++ ){
       int week4Num = 7 - firstDay + 1 + l + 14;
       week4[l] = week4Num;
       printf("%d", week4[l]);
       printf("  ");
   }
   
   printf("\n");
   printf("         ");
   for (int m = 0; m <= 6; m++ ){
       int week5Num = 7 - firstDay + 1 + m + 21;
       week5[m] = week5Num;
       printf("%d", week5[m]);
       printf("  ");
       if (week5Num > 30){
           break;
       }
   }
   
   printf("\n");
   if (firstDay > 4){
       printf("         ");
       for (int n = 0; n <= 6; n++ ){
           int week6Num = 7 - firstDay + 1 + n + 28;
           week6[n] = week6Num;
           printf("%d", week6[n]);
           printf("  ");
       if (week6Num > 30){
           break;
       }
     }
   }
   printf("\n");
   printf("---------------------------------------------");
   printf("\n");
   return firstDay; 
}