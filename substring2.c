/*
Program to check if one string is con
tained as substrin
g in another
*/
#include<ctype.h>
#include <stdio.h>
#include <string.h> /* To include the string functions like strstr() */
int main()
{
char small[100], big[200];
char *p;
int offset,i,j;
printf("Enter the big string: ");
scanf(" %[^\n]s", big);
/* the " %[^\n]s" is used to scan until you see a new line (enter key).
So you can scan strings with more than one word using one scan statement %*/
printf("Enter the small string: ");
scanf(" %[^\n]s", small);
/* strstr(big, small) returns 0 if the small stri
ng is not contained in the big str
ing.
Otherwise, it returns a character pointer to the starting location of the first
occurence of the small string in the big string */
for(i=0;small[i]!='\0';i++)
{
 small[i]=tolower(small[i]);
} 
for(i=0;big[i]!='\0';i++)
{
 big[i]=tolower(big[i]);
} 
p = strstr(big,small);
if(p == 0)
printf("%s is not contained in %s\n", small, big);
else
{
offset = (int) (p -big);
printf("%s is contained in %s, starting from position %d\n", small, big, offset);
}

return 0;
}
