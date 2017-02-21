#include <stdio.h>

int main()
{
int phone1, phone2, phone3;
printf("Enter phone number (xxx) xxx-xxx:");
scanf("(%3d) %3d-%4d", &phone1, &phone2, &phone3);

printf("%d.%d.%d\n", phone1, phone2, phone3);

}
