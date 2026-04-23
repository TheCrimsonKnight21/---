#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int areAnagrams(char *str1, char *str2);
float calculateWeeklySalary(float hourly, int hours);

void Task1();
void Task2();
void Task3();
void Task4();
void Task5();
void Task6();
void Task7();

int main() {
    int task;
    printf("Enter task number (1-5): ");
    scanf("%d", &task);
    switch (task) {
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

        default:
            printf("Invalid task number.\n");
    };
    return 0;
}

void Task1(){
    typedef struct Uitlity{
        char name[50];
        float price;
        int quantity;
    }Utility;
    Utility* utilities = malloc(sizeof(Utility) * 4);
    Utility* boughtUtilities = malloc(sizeof(Utility) * 100);
    Utility chair = {"Chair", 13.99, 1};
    Utility table = {"Table", 42, 8};
    Utility cups = {"Cups", 5.98, 6};
    Utility plates = {"Dishes", 21.02, 6};
    utilities[0] = chair;
    utilities[1] = table;
    utilities[2] = cups;
    utilities[3] = plates;
    int n;
    printf("Enter the number of guests: ");
    scanf("%d", &n);

    int numOfTables = 0;
    int numOfChairs = 0;
    int numOfCups = 0;
    int numOfPlates = 0;

    float totalCost = 0;
    float spend = 0;
    char* name = malloc(sizeof(char) * 50);
    int index = 0;
    do {
        
        printf("Enter the name of utility (or 'PARTY!' to finish): ");
        scanf("%s", name);
        for (int i = 0; i < 4; i++) {
            if (strcmp(name, utilities[i].name) == 0) {
                spend += utilities[i].price;
                boughtUtilities[index] = utilities[i];
                index++;
                if (strcmp(name, "Table") == 0) {
                    numOfTables += utilities[i].quantity;
                } else if (strcmp(name, "Chair") == 0) {
                    numOfChairs += utilities[i].quantity;
                } else if (strcmp(name, "Cups") == 0) {
                    numOfCups += utilities[i].quantity;
                } else if (strcmp(name, "Plates") == 0) {
                    numOfPlates += utilities[i].quantity;
                }
                break;
            }
        }
    }while (strcmp(name, "PARTY!") != 0);
    
    while (1){
        if (numOfChairs < n) {
            numOfChairs += chair.quantity;
            totalCost += chair.price;
        } else if (numOfTables < n) {
            numOfTables += table.quantity;
            totalCost += table.price;
        } else if (numOfCups < n) {
            numOfCups += cups.quantity;
            totalCost += cups.price;
        } else if (numOfPlates < n) {
            numOfPlates += plates.quantity;
            totalCost += plates.price;
        } else {
            break;
        }
    }
    totalCost += spend;
    printf("Money spent: %.2f\n", spend);
    printf("Total cost: %.2f\n", totalCost);

    free(utilities);
    free(boughtUtilities);
    free(name);
}


void Task2() {
    typedef struct Product{
        char name[50];
        float price;
        int id;
    } Product;

    typedef struct Order{
        char address[50];
        int productID;
    } Order;
    Product* products = malloc(sizeof(Product) * 100);
    Order* orders = malloc(sizeof(Order) * 100);
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    char* command = malloc(sizeof(char) * 50);
    do{
       
        printf("Enter command (or 'end' to finish): ");
        scanf("%s", command);
        if (strcmp(command, "Product") == 0) {
            Product product;
            printf("Enter product name: ");
            scanf("%s", product.name);
            printf("Enter product price: ");
            scanf("%f", &product.price);
            printf("Enter product ID: ");
            scanf("%d", &product.id);
            products[index1] = product;
            index1++;
        } else if (strcmp(command, "Order") == 0) {
            Order order;
            printf("Enter delivery address: ");
            scanf("%s", order.address);
            printf("Enter product ID: ");
            scanf("%d", &order.productID);
            orders[index2] = order;
            index2++;
        }
        for (size_t i = 0; i < index2; i++)
        {
            for (size_t j = 0; j < index1; j++)
            {
                if (orders[i].productID == products[j].id) {
                    printf("Client at %s ordered %s\n", orders[i].address, products[j].name);
                }
            }
        }
        
        

    }while (strcmp(command, "END") != 0);
    free(products);
    free(orders);
    free(command);
}

void Task3(){
    char** words = malloc(sizeof(char*) * 100);
    int index = 0;
    FILE* file = fopen("Task3.txt", "r");
    if (file != NULL) {

        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
        char* token = strtok(buffer, " \n");
        while (token != NULL) {
            words[index] = malloc(strlen(token) + 1);
            strcpy(words[index], token);
            index++;
            token = strtok(NULL, " \n");
        }
        }
        fclose(file);
    }

    char** finalWords = malloc(sizeof(char*) * 100);
    for (size_t i = 0; i < index; i++)
    {
        if (i == 0){
            finalWords[0] = malloc(sizeof(char) * 50);
            strcpy(finalWords[0], words[0]);
        } else {
            if(words[i - 1][strlen(words[i - 1])-1] == words[i][0]) {
                finalWords[i] = malloc(sizeof(char) * 50);
                char* word = malloc(sizeof(char) * 50);
                
                printf("Words[i]: %s\n", words[i]);
                strcpy(word, words[i]);
                printf("Word: %s\n", word);
                strcpy(finalWords[i], word);
                free(word);
            }
        }
    }
    printf("Words that end with the same letter as the next word starts:\n");
    for (size_t i = 0; i < index - 1; i++)
    {
        if (finalWords[i] != NULL) {
            printf("%s\n", finalWords[i]);
        }
    }
    free(words);
    free(finalWords);
}


void Task4() {
    char** words = malloc(sizeof(char*) * 100);
    char* fileName = malloc(sizeof(char) * 50);
    printf("Enter file name: ");
    scanf("%s", fileName);
    strcat(fileName, ".txt");
    fprintf(stderr, "File name: %s\n", fileName);
    FILE* file = fopen(fileName, "r");
    int index = 0;
    if (file != NULL) {
        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            char* token = strtok(buffer, " \n");
            while (token != NULL) {
                words[index] = malloc(20 + 1);
                strcpy(words[index], token);
                index++;
                token = strtok(NULL, " \n");
            }
        }
        fclose(file);
    } else {
        perror("Error opening file");
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);
    FILE* outputFile = fopen("Task4Output.txt", "w");
    if (outputFile != NULL) {
        for (size_t i = 0; i < index; i++)
        {
            for (size_t j = 0; words[i][j] != '\0'; j++) {
                words[i][j] += key;
            }
            fprintf(outputFile, "%s ", words[i]);
        }
        fclose(outputFile);
    } else {
        perror("Error opening file");
    }
}

void Task5() {
    char* wordToGuess = malloc(sizeof(char) * 50);
    printf("Enter a word to guess: ");
    scanf("%s", wordToGuess);
    int n = strlen(wordToGuess);
    char* guessedWord = malloc(sizeof(char) * (n * 2 - 1));
    for (size_t i = 0; i < n * 2 - 1; i += 2)
    {
        guessedWord[i] = '_';
        guessedWord[i + 1] = ' ';
    }
    guessedWord[n * 2 - 1] = '\0';
    int attempts = n + 2;
    while (attempts > 0) {
        printf("Guessed word: %s\n", guessedWord);
        printf("Enter a letter: ");
        char letter;
        scanf(" %c", &letter);
        int found = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (wordToGuess[i] == letter) {
                guessedWord[i * 2] = letter;
                found = 1;
                attempts--;
            }
        }
        if (!found) {
            attempts--;
            printf("Wrong guess! Attempts left: %d\n", attempts);
        } else {
            char tempGuessedWord[50];
            int index = 0;
            for (size_t i = 0; i < n * 2 - 1; i++)
            {
                if (guessedWord[i] != ' ') {
                    tempGuessedWord[index] = guessedWord[i];
                    index++;
                }
            }
            tempGuessedWord[index] = '\0';
            if (strcmp(tempGuessedWord, wordToGuess) == 0) {
                printf("Congratulations! You've guessed the word: %s\n", wordToGuess);
                break;
            }
        }
    }
}


int areAnagrams(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    
    int freq[256] = {0};
    
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

void Task6(){

    char* string1 = malloc(sizeof(char) * 50);
    char* string2 = malloc(sizeof(char) * 50);
    printf("Enter first string: ");
    scanf("%s", string1);
    printf("Enter second string: ");
    scanf("%s", string2);
    if (areAnagrams(string1, string2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }



}

float calculateWeeklySalary(float hourly, int hours) {
    float grossSalary;
    if (hours > 40) {
        grossSalary = (40 * hourly) + ((hours - 40) * hourly * 1.5);
    } else {
        grossSalary = hours * hourly;
    }
    float tax = grossSalary * 0.0365;
    return grossSalary - tax;
}

void Task7() {

    typedef struct Worker{
        int id;
        float hourlySalary;
        int hoursWorked;
        float weeklySalary;
    } Worker;
    char* command = malloc(sizeof(char) * 50);
    printf("Enter command (Add/Remove/Update/Display): ");
    scanf("%s", command);
    if (strcmp(command, "Add") == 0) {
        Worker worker;
        printf("Enter worker ID: ");
        scanf("%d", &worker.id);
        printf("Enter hourly salary: ");
        scanf("%f", &worker.hourlySalary);
        printf("Enter hours worked: ");
        scanf("%d", &worker.hoursWorked);
        worker.weeklySalary = calculateWeeklySalary(worker.hourlySalary, worker.hoursWorked);
        FILE* file = fopen("Task7.txt", "ab");
        if (file != NULL) {
            fprintf(file, "%d %f %d\n", worker.id, worker.hourlySalary, worker.hoursWorked);
            fclose(file);
        } else {
            perror("Error opening file");
        }
    }
    else if (strcmp(command, "Display") == 0) {
        FILE* file = fopen("Task7.txt", "rb");
        if (file != NULL) {
            char buffer[1024];
            printf("\n%-5s %-12s %-12s %-15s\n", "ID", "Hourly", "Hours", "Weekly Salary");
            printf("%-5s %-12s %-12s %-15s\n", "---", "------", "-----", "------");
            while (fgets(buffer, sizeof(buffer), file) != NULL) {
                Worker worker;
                sscanf(buffer, "%d %f %d", &worker.id, &worker.hourlySalary, &worker.hoursWorked);
                worker.weeklySalary = calculateWeeklySalary(worker.hourlySalary, worker.hoursWorked);
                printf("%-5d %-12.2f %-12d %-15.2f\n", worker.id, worker.hourlySalary, worker.hoursWorked, worker.weeklySalary);
            }
            fclose(file);
        } else {
            perror("Error opening file");
        }
    }
    Worker* workers = malloc(sizeof(Worker) * 30);
    FILE* file = fopen("Task7.txt", "rb");
    int index = 0;
    if (file != NULL) {
        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            Worker worker;
            sscanf(buffer, "%d %f %d", &worker.id, &worker.hourlySalary, &worker.hoursWorked);
            worker.weeklySalary = calculateWeeklySalary(worker.hourlySalary, worker.hoursWorked);
            workers[index] = worker;
            index++;
        }
        fclose(file);
    } else {
        perror("Error opening file");
    }
    free(command);
    free(workers);

}