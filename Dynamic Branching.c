#include <stdio.h>
int main() 
{ 
int choice;
printf("Enter your choice (1 or 2):");
scanf("%d", &choice);
if (choice == 1 ) {
printf("You chose option 1.\n");

} else if (choice == 2 ) { 
printf("You chose option 2.\n");
} else {
printf ("Invalid choice.\n");
}
return 0;
}
