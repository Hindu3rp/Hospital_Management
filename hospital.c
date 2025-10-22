#include <stdio.h>
#include <string.h>

struct Hospital {
    char name[50];
    char city[50];
    int beds;
    float price;
    float rating;
    int reviews;
};

struct Patient {
    char name[50];
    int age;
};

void printHospital(struct Hospital hosp) {
    printf("Hospital Name: %s\n", hosp.name);
    printf("City: %s\n", hosp.city);
    printf("Total Beds: %d\n", hosp.beds);
    printf("Price per Bed: $%.2f\n", hosp.price);
    printf("Rating: %.1f\n", hosp.rating);
    printf("Reviews: %d\n", hosp.reviews);
    printf("\n");
}

void printPatient(struct Patient patient) {
    printf("Patient Name: %s\n", patient.name);
    printf("Age: %d\n", patient.age);
    printf("\n");
}

void sortByPrice(struct Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].price > hospitals[j + 1].price) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }
}

void sortByBeds(struct Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].beds < hospitals[j + 1].beds) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }
}

void sortByName(struct Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(hospitals[j].name, hospitals[j + 1].name) > 0) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }
}

void sortByRating(struct Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].rating * hospitals[j].reviews < hospitals[j + 1].rating * hospitals[j + 1].reviews) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Hospital hospitals[3] = {
        {"Hospital A", "New York", 100, 200.0, 4.5, 100},
        {"Hospital B", "Los Angeles", 200, 150.0, 4.0, 200},
        {"Hospital C", "Chicago", 150, 300.0, 4.8, 150}
    };

    struct Patient patients[3] = {
        {"Patient A", 25},
        {"Patient B", 30},
        {"Patient C", 35}
    };

    printf("Hospital Data:\n");
    for (int i = 0; i < 3; i++) {
        printHospital(hospitals[i]);
    }

    printf("Patients Data:\n");
    for (int i = 0; i < 3; i++) {
        printPatient(patients[i]);
    }

    sortByPrice(hospitals, 3);
    printf("Hospitals sorted by bed price:\n");
    for (int i = 0; i < 3; i++) {
        printHospital(hospitals[i]);
    }

    sortByBeds(hospitals, 3);
    printf("Hospitals sorted by available beds:\n");
    for (int i = 0; i < 3; i++) {
        printHospital(hospitals[i]);
    }

    sortByName(hospitals, 3);
    printf("Hospitals sorted by name:\n");
    for (int i = 0; i < 3; i++) {
        printHospital(hospitals[i]);

Source: Conversation with Bing, 4/1/2024
(1) Hospital Management System in C - GeeksforGeeks. https://www.geeksforgeeks.org/c-program-for-hospital-management-system/.
(2) Hospital Management System in C++ - GeeksforGeeks. https://www.geeksforgeeks.org/hospital-management-system-in-c/.
(3) hospital-management-system · GitHub Topics · GitHub. https://github.com/topics/hospital-management-system?l=c.