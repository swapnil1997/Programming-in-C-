#include <stdio.h>

struct GeoObject{
    enum{cir = 0 , rec , trg}gcode;
    union{
        struct cir{
            double x,y,r;
        }c;
        struct rec{
            double x,y,w,h;
        }r;
        struct trg{
            double x,y,b,h;
        }t;
    };
};

typedef void(*drawfunc) (struct GeoObject go);

void drawcir(struct GeoObject go){
    printf("Circle : (%lf,%lf,%lf)\n",go.c.x,go.c.y,go.c.r);
}
void drawrec(struct GeoObject go){
    printf("Rectangle : (%lf,%lf,%lf,%lf)\n",go.r.x,go.r.y,go.r.w,go.r.h);
}
void drawtrg(struct GeoObject go){
    printf("Triangle : (%lf,%lf,%lf,%lf)\n",go.t.x,go.t.y,go.t.b,go.t.h);
}

drawfunc drawarray[] = {drawcir,drawrec,drawtrg};

int main(){
    struct GeoObject go;
    go.gcode = cir;
    go.c.x=2.3;
    go.c.y=4.5;
    go.c.r=2;
    drawarray[go.gcode](go);
    return 0;
}