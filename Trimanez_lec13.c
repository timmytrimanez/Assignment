#include <stdio.h>
#include <math.h>

// Structure for a point
typedef struct {
    double x;
    double y;
} Point;

// Function to calculate the slope
double solveSlope(Point p1, Point p2) {
    return (p2.y - p1.y) / (p2.x - p1.x);
}

// Function to calculate the midpoint
Point solveMidpoint(Point p1, Point p2) {
    Point midpoint;
    midpoint.x = (p1.x + p2.x) / 2;
    midpoint.y = (p1.y + p2.y) / 2;
    return midpoint;
}

// Function to calculate the distance
double solveDistance(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

// Function to calculate the slope-intercept form
void solveSlopeIntercept(Point p1, Point p2) {
    double slope = solveSlope(p1, p2);
    double intercept = p1.y - slope * p1.x;
    printf("Slope-intercept form: y = %.2fx + %.2f\n", slope, intercept);
}

int main() {
    Point p1, p2;

    printf("Enter the x and y coordinates of Point 1: ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Enter the x and y coordinates of Point 2: ");
    scanf("%lf %lf", &p2.x, &p2.y);

    double slope = solveSlope(p1, p2);
    printf("Slope: %.2f\n", slope);

    Point midpoint = solveMidpoint(p1, p2);
    printf("Midpoint: (%.2f, %.2f)\n", midpoint.x, midpoint.y);

    double distance = solveDistance(p1, p2);
    printf("Distance between 2 points: %.2f\n", distance);

    solveSlopeIntercept(p1, p2);

    return 0;
}