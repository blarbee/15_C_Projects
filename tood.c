#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a task
typedef struct Task {
    char title[100];
    struct Task *next;
} Task;

// Function to add a task to the todo list
void addTask(Task **head, char title[100]) {
    Task *newTask = (Task *)malloc(sizeof(Task));
    strcpy(newTask->title, title);
    newTask->next = *head;
    *head = newTask;
}

// Function to display all tasks in the todo list
void displayTasks(Task *head) {
    printf("\nTodo List:\n");
    while (head != NULL) {
        printf("- %s\n", head->title);
        head = head->next;
    }
    printf("\n");
}

// Function to free memory allocated for the todo list
void freeTasks(Task *head) {
    while (head != NULL) {
        Task *temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Task *todoList = NULL;
    int choice;
    char title[100];

    do {
        printf("Todo List Menu:\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task title: ");
                scanf("%s", title);
                addTask(&todoList, title);
                break;
            case 2:
                displayTasks(todoList);
                break;
            case 3:
                // Free allocated memory before exiting
                freeTasks(todoList);
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}