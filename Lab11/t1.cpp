#include <stdio.h>
#include <math.h>
typedef struct {
    double x, y;
} Point;
typedef struct {
    Point first, second;
} Line;
typedef struct {
    Line l1, l2, l3;
} Triangle;
double length(Line line);//Length of a line
double circumference(Triangle tri);//Circumference of triangle
int main(){
    Point points[] = {{1,5}, {2, 1}, {2, 7}, {4, 3}, {6, 8}, {8, 2}};
    Line lines[] = {{points[0], points[2]}, {points[3], points[4]}, {points[3], points[5]}, {points[4], points[5]}};
    Triangle t1 = {lines[1], lines[2], lines[3]};
    for (int i = 0; i < 6; i++)
        printf("Point: (%g, %g)\n", points[i].x, points[i].y);
    for (int i = 0; i < 4; i++)
        printf("Line: (%g, %g)-(%g, %g) Length: %g\n", lines[i].first.x, lines[i].first.y, lines[i].second.x, lines[i].second.y, length(lines[i]));
    printf("Triangle: (%g, %g)-(%g, %g)-(%g, %g) Circumferene: %g\n", points[3].x, points[3].y, points[4].x, points[4].y, points[5].x, points[5].y, circumference(t1));
    return 0;
}
double length(Line line){
    return sqrt(pow(line.second.y-line.first.y, 2) + pow(line.second.x-line.first.x, 2));
}
double circumference(Triangle tri){
    return length(tri.l1) + length(tri.l2) + length(tri.l3);
}