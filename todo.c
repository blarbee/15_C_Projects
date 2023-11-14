#include <stdio.h>
#include <string.h>

typedef struct Task{
    int id;
    char title[30];
    char description[100];
}Task;

void createTask(Task *task, char title[30],char description[100]){

    task->id++;
    strcpy(task->title, title);
    strcpy(task->description, description);
};

void displayTasks(){

};

int main(){
    Task Tasks[100];
    Task *PointerToTask = Tasks;
    char title[30], description[100];
    printf("Title:\n");
    scanf("%s", title);
    printf("Description:\n");
    scanf("%s", description);

    createTask(PointerToTask, title, description);

    printf("Task ID: %d\n", PointerToTask->id);
    printf("Task Title: %s\n", PointerToTask->title);
    printf("Task Description: %s\n", PointerToTask->description);


    return 0;
}