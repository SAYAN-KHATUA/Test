// A digital clock using C

// Import the header files
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
   int hour = 3;
   int minute = 56;
   int second = 0;
   while(1) {
       // Clear the output on screen
       // for windows use system("cls")
       system("clear"); 
       
       // Print the time in HH : MM : SS format
       printf("%02d : %02d : %02d ",hour,minute,second);
       
       // Clear the output buffer in gcc
       fflush(stdout);
       
       // Increment second
       second++;

       // Update hour, minute and second
       if(second == 60) {
           minute += 1;
           second = 0;
       }
    
       if(minute == 60) {
           hour += 1;
           minute = 0;
       }
    
       if(hour == 24) {
           hour = 0;
           minute = 0;
           second = 0;
       }

       // Wait for 1 second
       sleep(1);  
   }
   return 0;
} 
// #include <stdio.h>
// #include <unistd.h>  // For sleep function

// // Define the structure for time
// struct Time {
//     int hour;
//     int minute;
//     int second;
// };

// // Function to update the time
// void updateTime(struct Time *t) {
//     t->second++;
//     if (t->second == 60) {
//         t->second = 0;
//         t->minute++;
//     }
//     if (t->minute == 60) {
//         t->minute = 0;
//         t->hour++;
//     }
//     if (t->hour == 24) {
//         t->hour = 0;
//     }
// }

// // Function to display the time
// void displayTime(struct Time t) {
//     printf("%02d:%02d:%02d\n", t.hour, t.minute, t.second);
// }

// int main() {
//     // Initialize the time
//     struct Time currentTime = {0, 0, 0};

//     // Infinite loop to keep the clock running
//     while (1) {
//         // Clear the screen (this is for Unix-based systems)
//         printf("\033[H\033[J");

//         // Display the current time
//         displayTime(currentTime);

//         // Update the time
//         updateTime(&currentTime);

//         // Sleep for 1 second
//         sleep(1);
//     }

//     return 0;
// }
