#include <stdio.h>

int main() {
    double w, h;
    
    printf("Enter room width (meters): ");
    scanf("%lf", &w);
    
    printf("Enter room height (meters): ");
    scanf("%lf", &h);
    
    // Convert to centimeters
    double w_cm = w * 100;
    double h_cm = h * 100;
    
    // Size of one desk
    double desk_width = 70;   // cm
    double desk_height = 120; // cm
    
    // Corridor width
    double corridor_width = 100; // cm
    
    // Number of desks on the left side
    double left_width = (w_cm - corridor_width) / 2;
    int desks_per_row_left = (int)(left_width / desk_width);
    int rows_left = (int)(h_cm / desk_height);
    int desks_left = desks_per_row_left * rows_left;
    
    // Number of desks on the right side
    double right_width = (w_cm - corridor_width) / 2;
    int desks_per_row_right = (int)(right_width / desk_width);
    int rows_right = (int)(h_cm / desk_height);
    int desks_right = desks_per_row_right * rows_right;
    
    // Total number of desks
    int total_desks = desks_left + desks_right;
    
    // Subtract lost spaces
    total_desks -= 1;  // entrance door
    total_desks -= 2;  // teacher's desk
    
    printf("\nNumber of workstations: %d\n", total_desks);
    
    return 0;
}