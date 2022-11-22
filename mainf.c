#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
 
 int main(void){
  ClassInfo classInfo[100]; // Making an array of Structs
  ClassInfo temp; // temp struct
  FILE *fptr=fopen("/public/pgm1/classes.csv","r"); // opening the file to read from
    char line[100]; // making an array of char
    char *classID,*title,*days,*time,*seats,*prof; // varibales for each piece of data from file
    
    char choice; // users choice

    int i=0; // size of the array of structs
 
     while(fgets(line,100,fptr)!=NULL){ // while there is still things in the file
         
         classID=strtok(line,","); // gets the class id of line
         title=strtok(NULL,","); // gets the title
         strtok(NULL,","); // garbage... gets rid of unwanted data
         seats=strtok(NULL,","); //  gets seats from the line
         strtok(NULL,","); // garbage
         strtok(NULL,","); // garbage
         prof=strtok(NULL,","); // gets professors name from line
         days=strtok(NULL," "); // gets days from line
         time=strtok(NULL,"\n"); // gets time from line
 
         strcpy(temp.classID,classID); // assigns classID to temp Struct
         strcpy(temp.title,title); // assigns title to temp struct
         strcpy(temp.days,days); // assigns days to temp struct
         strcpy(temp.time,time); // assigns time to temp struct
         strcpy(temp.seats,seats); // assings seats to temp struct
         strcpy(temp.prof,prof); // assigns professors name to temp struct

         classInfo[i]=temp; // enters temp struct into the array of structs
        
         i++; // adds one to size
     }
 
    while(choice!='q'){ // while the user doesnt want to quit 
        
        printf("Choices:\n"); // prints out the choices that the user can choose from
        printf("n - print class given number\n");
        printf("d - print all classes for a given day combo\n");
        printf("p - print all classes for a given professor\n");
        printf("q - quit\n");
        scanf(" %c",&choice); // gets the users choice

        switch(choice){ // runs the functions for which the user chose
            case 'n':
                printClassesNum(i,classInfo); // prints the class that user provided the classID for
                break;
            case 'd':
                printClassesDay(i,classInfo); // prints the classes that the user provided for which day
                break;
            case 'p':
                printClassesProf(i,classInfo); // prints the clases for which the users professor teaches
                break;
        }
    }
 
     return(0);
 }   
