#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void main(){
	int choise, value;
	List *list = NULL;

	do{
		system("cls");
		printf("\n                                      List's");
		printf("\n\n\n\n");
		printf("   1.- Insert value for head\n");
		printf("   2.- Insert value for back\n");
		printf("   3.- Drop one element for value\n");
		printf("   4.- Drop many elements for value\n");
		printf("   5.- find value in list\n");
		printf("   6.- First value the list\n");
		printf("   7.- Last value the list\n");
		printf("   8.- List empty?\n");
		printf("   9.- View list\n");
		printf("\n\n");
		printf("   0.- Exit");
		scanf("%i", &choise);
		switch(choise){
			case 1: 
				system("cls");
				printf("\n Value for insert in list:\n\n");
				scanf("%i", &value);
				insertForHead(&list,value);
			break;
			case 2: 
				system("cls");
				printf("\n Value for insert in list:\n\n");
				scanf("%i", &value);
				insertForBack(&list,value);
			break;
			case 3: 
				system("cls");
				printf("\n Value for drop in list:\n\n");
				scanf("%i", &value);
				deleteElement(&list, value);
			break;
			case 4: 
				system("cls");
				printf("\n Value for drop in list:\n\n");
				scanf("%i", &value); 
				deleteManyElements(&list, value);
			break;
			case 5: 
				system("cls");
				printf("\n Value for search:\n\n");
				scanf("%i", &value); 
				if(findValue(list, value))
					printf("The value belongs to list");
				else
					printf("The value not belongs to list");
				scanf("%i", &value);
			break;
			case 6: 
				system("cls");
				printf("%i", firtsValue(list));
				scanf("%i", &value);
			break;
			case 7: 
				system("cls");
				printf("%i", lastValue(list));
				scanf("%i", &value);
			break;
			case 8: 
				system("cls");
				if(empty(list))
					printf("List empty");
				else
					printf("List is not empty");
				scanf("%i", &value);
			break;
			case 9: 
				system("cls");
				viewList(list);
				scanf("%i", &value);
			break;
			default: 
				printf("Wrong choise, enter again\n");
			break;
		}

	} while(choise != 0);
}