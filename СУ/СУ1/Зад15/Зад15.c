#include <stdio.h>
int main()
{
    int n, w, l, m, o;
    printf("Square length: ");
    scanf("%d", &n);
    printf("Tile width: ");
    scanf("%d", &w);
    printf("Tile length: ");
    scanf("%d", &l);
    printf("Bench width: ");
    scanf("%d", &m);
    printf("Bench length: ");
    scanf("%d", &o);

    double time = 0.2;
    int area_square = n * n;
    int area_tile = w * l;
    int area_bench = m * o;
    int area_to_cover = area_square - area_bench;
    double tiles_needed = (double)area_to_cover / area_tile;
    double total_time = tiles_needed * time;
    printf("Required time: %.2f minutes\n", total_time);
    return 0;
}