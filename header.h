

typedef struct{

    char classID[100]; // stores the class ID
    char title[100]; // stores the name of the class
    char days[100]; // stores which day that class is taught on
    char time[100]; // stores the time in which the class is taught
    char seats[50]; // Stores the number of seats the class has
    char prof[100]; // stores the professors name 

}ClassInfo; // Title of the struct


// 16-22 are functions declarations of file pfunctions.c
void printClassesNum(int size,ClassInfo classes[]);

void printFormat(int index,ClassInfo classes[]);

void printClassesProf(int size, ClassInfo classes[]);

void printClassesDay(int size, ClassInfo classes[]);
