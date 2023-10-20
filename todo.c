#include <stdio.h>

struct Task{
    int id;
    char title[30];
    char description[100];
};
//idk enough about struct apparently ::(
void createTask(struct Task task, char title[30],char description[100]){
    task.id++;
    strcpy(task.title, title);
    strcpy(task.description, description);
    
};
//nonsense
int main(){


    



    return 0;
}