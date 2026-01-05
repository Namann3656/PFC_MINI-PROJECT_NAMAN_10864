// NAMAN KUMAR
// ERP - 10864

// PROJECT TITLE - RAILWAY TICKET BOOKING SYSTEM

// AIM - The aim of this project is to create a Railway Ticket Booking System that allows users to book , cancel and view the status of seats using an array-based approach .

// DETAILED WALKTHROUGH ( HOW TO APPROACH THE PROBLEM ) - Create a 1D array where each index represents a seat. Initialize all seats as available.
// Use a loop-based menu system. Check seat status before booking or canceling.  Update array values based on user actions. Display current seat status using loops.


#include <stdio.h>
#define TOTAL_SEATS 10

int main() {
    int seats[TOTAL_SEATS];
    int choice, seatNumber;

    for (int i = 0; i < TOTAL_SEATS; i++) {
        seats[i] = 0;
    }

    while (1) {
        printf("\n--- Railway Ticket Booking System ---\n");
        printf("1. Book Seat\n");
        printf("2. Cancel Seat\n");
        printf("3. View Seat Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter seat number (1-%d): ", TOTAL_SEATS);
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
                printf("Invalid seat number!\n");
            } 
            else if (seats[seatNumber - 1] == 1) {
                printf("Seat already booked!\n");
            } 
            else {
                seats[seatNumber - 1] = 1;
                printf("Seat booked successfully!\n");
            }
            break;

        case 2:
            printf("Enter seat number to cancel (1-%d): ", TOTAL_SEATS);
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
                printf("Invalid seat number!\n");
            } 
            else if (seats[seatNumber - 1] == 0) {
                printf("Seat is already available!\n");
            } 
            else {
                seats[seatNumber - 1] = 0;
                printf("Seat cancellation successful!\n");
            }
            break;

        case 3:
            printf("\nSeat Status:\n");
            for (int i = 0; i < TOTAL_SEATS; i++) {
                if (seats[i] == 0)
                    printf("Seat %d: Available\n", i + 1);
                else
                    printf("Seat %d: Booked\n", i + 1);
            }
            break;

        case 4:
            printf("Thank you for using the system!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
}