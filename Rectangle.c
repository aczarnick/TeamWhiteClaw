#include <stdio.h>

typedef struct RectangleClass {
    int x1, x2, y1, y2;
    int (*width)( const struct RectangleClass *rect);
    int (*height)( const struct RectangleClass *rect);
    double (*area)( const struct RectangleClass *rect);
} RectangleClass;

void rectangle_new(RectangleClass *rect, int x1, int y1, int x2, int y2);
static int rectangle_width(const RectangleClass *rect);
static int rectangle_height(const RectangleClass *rect);
static double rectangle_area(const RectangleClass *rect);

void rectangle_new(RectangleClass *rect, int x1, int y1, int x2, int y2){
    rect->x1 = x1;
    rect->y1 = y1;
    rect->x2 = x2;
    rect->y2 = y2;
    rect->width = &rectangle_width;
    rect->height = &rectangle_height;
    rect->area = &rectangle_area;
}

static int rectangle_width(const RectangleClass *rect){
    return rect->x2 - rect->x1;
}
static int rectangle_height(const RectangleClass *rect){
    return rect->y2 - rect->y1;
}
static double rectangle_area(const RectangleClass *rect){
    return (*rect->width)(rect) * (*rect->height)(rect);
}

int main(){
    RectangleClass rect1;
    rectangle_new(&rect1, 0,0,10,10);
    printf("%f\n", rectangle_area(&rect1));

    RectangleClass rect2;
    rectangle_new(&rect2, 5, 5, 10, 10);
    printf("%f\n", rectangle_area(&rect2));

    return 0;
}