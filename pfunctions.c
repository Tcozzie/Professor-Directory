#include <stdio.h>
#include <string.h>
#include "header.h"


void printClassesNum(int size, ClassInfo classes[]){ // prints the class that matches the users inputted ID
    char userIn[25];    // allocates memory for the users input
    printf("Enter class number: ");

    scanf(" %[^\n%]%*c", userIn); // gets the users input
   
   for(int i=0;i<size+1;i++){ //goes through the length of the Struct array
        if(strcmp(userIn,classes[i].classID)==0){ // sees if any of the ID's match the users
            printFormat(i,classes); // if it does, print that class
        }
   }
}

void printClassesDay(int size, ClassInfo classes[]){ // prints all the classes on a given day by the user
  char userIn[5]; // allocates memory for users input
  printf("Enter class days to print (MWF or TR): ");

  scanf("%s",userIn); // gets users input

  printf("List of classes for days %s:\n",userIn);
  for(int i=0;i<size+1;i++){ // goes through the length of the struct array
        if(strcmp(userIn,classes[i].days)==0){ // sees if any of the class days match the users input
            printFormat(i,classes); // if so. print that class
        }
  }
}

void printClassesProf(int size, ClassInfo classes[]){ // prints the classes that the users input for professors name
    char userIn[10]; // allocates memory for users input
    int length; // length of the users input

    printf("Enter professor's Last Name: ");
    
    scanf("%s",userIn); //takes in the users input

    printf("list of classes with professor %s:\n",userIn);
    for(int i=0;i<size;i++){ // goes through the whole Struct array

        length=strlen(userIn); // gets the length of the users input

        if(strncmp(userIn,classes[i].prof,length)==0){ // checks if the users input matches the last name of the professor
            printFormat(i,classes); // if so. prints the class
        }
    }
}

void printFormat(int index, ClassInfo classes[]){ // formating for printing a class
    printf("%-40s%-15s%-25s%-5s%-5s%-5s\n",classes[index].title,classes[index].classID
                                            ,classes[index].prof,classes[index].seats
                                            ,classes[index].days,classes[index].time);
}

