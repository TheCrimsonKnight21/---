#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Task1();
void Task2();
void Task3();
void Task4();
void Task5();
void Task6();
void Task7();
void Task8();

typedef struct Student{
    int id;
    int friends[100];
} Student;

int** create_matrix(int n, int m);

int main(){
    int n;
    printf("Enter task number (1-8): ");
    scanf("%d", &n);
    switch (n) {
        case 1:
            Task1();
            break;
        case 2:
            Task2();
            break;
        case 3:
            Task3();
            break;
        case 4:
            Task4();
            break;
        case 5:
            Task5();
            break;
        case 6:
            Task6();
            break;
        case 7:
            Task7();
            break;
        case 8:
            Task8();
            break;
        default:
            printf("Invalid task number.\n");
    }

    return 0;
}

void Task1(){
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int **matrix = create_matrix(n, m);

    int row_checker = 0;
    int col_checker = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (matrix[i-1][j-1] > matrix[i][j] ) {
                row_checker = 1;
            }
            else{
                row_checker = 0;
                break;
            }
            if(matrix[j-1][i-1] > matrix[j][i] ) {
                col_checker = 1;
            }
            else{
                col_checker = 0;
                break;
            }
        }
    
    
    }
    if(row_checker == 1){
        printf("The matrix is sorted by rows.\n");
    }
    else{
        printf("The matrix is not sorted by rows.\n");
    }
    if(col_checker == 1){
        printf("The matrix is sorted by columns.\n");
    }
    else{
        printf("The matrix is not sorted by columns.\n");
    }
    free(matrix);
}

void Task2() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int **matrix = create_matrix(n, m);
    int sum = 0;
    int max_sum = 0;
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 1; j < m; j++)
        {
            sum += matrix[i-1][j-1] + matrix[i-1][j] + matrix[i][j-1] + matrix[i-1][j+1] + matrix[i+1][j-1] + matrix[i+1][j] + matrix[i][j+1] + matrix[i+1][j+1];
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    printf("The maximum sum of the 3x3 submatrix is: %d\n", max_sum);
    free(matrix);
}

void Task3() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int **matrix = create_matrix(n, m);
    
    int max_val = matrix[0][0], min_val = matrix[0][0];
    int max_row = 0, min_row = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_row = i;
            }
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
                min_row = i;
            }
        }
    }
    
    int *temp = matrix[max_row];
    matrix[max_row] = matrix[min_row];
    matrix[min_row] = temp;
    
    printf("Rows swapped. Matrix after swap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    free(matrix);
    free(temp);
}

void Task4() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student *students = malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("Enter the number of friends for student %d: ", students[i].id);
        int num_friends;
        scanf("%d", &num_friends);
        printf("Enter the IDs of the friends for student %d: ", students[i].id);
        for (int j = 0; j < num_friends; j++) {
            int friend_id;
            scanf("%d", &friend_id);
            students[i].friends[j] = friend_id;
            students[friend_id - 1].friends[j] = students[i].id;
        }
    }
    free(students);
}

void Task5() {
    char *commands = malloc(100 * sizeof(char));
    int *n = malloc(100 * sizeof(int));
    char *command = malloc(100 * sizeof(char));
    int *numbers = malloc(100 * sizeof(int));
    printf("Enter a command: ");
    fgets(commands, 100, stdin);
    commands[strcspn(commands, "\n")] = '\0';


    int reading_number = 0;
    int reading_command = 1;
    int m = 0;

   
    do{
        for (size_t i = 0, j = 0, k = 0; i < 100; i++)
        {   
            if (reading_command == 1) {
            command[k] = commands[i];
            k++;
            }
            if (commands[i] == '(') {
                reading_command = 0;
                reading_number = 1;
            }
            if (reading_number == 1) {
                n[j] = commands[i] - '0';
                j++;
            }
            if (commands[i] == ')') {
                reading_number = 0;
                reading_command = 1;
                n[j] = '\0';
                break;
            }
        }
    int number = 0;

    for (int i = 0; i < sizeof(n)/ sizeof(int); i++)
        number = 10 * number + n[i];
    
    if(strcmp(command, "add") == 0) {
        numbers[m] = number;
        m++;
    }
    else if(strcmp(command, "delete") == 0) {
        for (int i = 0; i < m; i++) {
            if (numbers[i] == number) {
                for (int j = i; j < m - 1; j++) {
                    numbers[j] = numbers[j + 1];
                }
                m--;
            }
        }
    }
    else if(strcmp(command, "smallest") == 0) {
        if (number > 0 && number <= m) {
            int *temp = malloc(m * sizeof(int));
            for (int i = 0; i < m; i++) {
                temp[i] = numbers[i];
            }
            for (int i = 0; i < m - 1; i++) {
                for (int j = 0; j < m - i - 1; j++) {
                    if (temp[j] > temp[j + 1]) {
                        int aux = temp[j];
                        temp[j] = temp[j + 1];
                        temp[j + 1] = aux;
                    }
                }
            }
            printf("The %d smallest number is: %d\n", number, temp[number - 1]);
            free(temp);
        } else {
            printf("Invalid index.\n");
        }
    }
    else {
        printf("Unknown command.\n");
    }
    } while (strcmp(command, "exit") != 0);
}

void Task6() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *numbers = malloc(n * sizeof(int));
    int *simple = malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (size_t i = 0, j = 0; i < n; i++)
    {
        if(numbers[i] < 10 && numbers[i] >= 0) {
            simple[j] = numbers[i];
            j++;
            for (int k = i; k < n - 1; k++) {
                    numbers[k] = numbers[k + 1];
            }
        }
    }
    printf("Array after removing simple numbers:\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\nSimple numbers:\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", simple[i]);
    }
    printf("\n");
}

void Task7() {
   int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int **matrix = create_matrix(n, m);
    int **submatrix = create_matrix(3, 3);
    int sum = 0;
    sum = 0;
    int max_sum = 0;
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 1; j < m; j++)
        {
            sum += matrix[i-1][j-1] + matrix[i-1][j] + matrix[i][j-1] + matrix[i-1][j+1] + matrix[i+1][j-1] + matrix[i+1][j] + matrix[i][j+1] + matrix[i+1][j+1] + matrix[i][j];
            if (sum > max_sum) {
                max_sum = sum;
                for (size_t k = 0; k < 3; k++)
                {
                    for (size_t l = 0; l < 3; l++)
                    {
                        submatrix[k][l] = matrix[i-1+k][j-1+l];
                    }
                }
            }
        }
    }
    printf("The maximum sum of the 3x3 submatrix is: %d\n", max_sum);
    printf("The 3x3 submatrix with the maximum sum is:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", submatrix[i][j]);
        }
        printf("\n");
    }
    free(matrix); 
    free(submatrix);
}

void Task8() {
    int n = 1, m;
    int capacity = 10;
    int *numbers = malloc(capacity * sizeof(int));
    for (size_t i = 0; i < 10; i++)
    {
       printf("Enter number: \n");
         scanf("%d", &numbers[i]);
    }
    while (1) {
    
    printf("Enter element and its index: ");
    int result = scanf("%d", &n);
    if (n == 0) {
        break;
    }
    int m;
    scanf("%d", &m);
    if(m >= capacity) {
        capacity = m + 1;
        numbers = realloc(numbers, capacity * sizeof(int));
    }
    numbers[m] = n;
    }
    printf("Array after inserting elements:\n");
    for (size_t i = 0; i < capacity; i++)
    {
        printf("%d ", numbers[i]);
    }
    free(numbers);
}

int **create_matrix(int n, int m) {
    int **matrix = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(m * sizeof(int));
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}
