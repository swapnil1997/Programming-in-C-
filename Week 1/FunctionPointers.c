/*The following code describes the wide scenario of structure,union,enum and also dictates the concept of Function Pointers in C
Programming Language
*/
#include <stdio.h>

//Creates Structure called GeoObject....
//Size of this Derived data type would be comprises of enum and union..

struct GeoObject{
    
    //enum consist of data which is belong to int data type..
    //And it operates on a select subset....
    
    enum{cir = 0 , rec , trg}gcode;
   
    //union is another user defined type.
    //Here size of this type would be maximum size of it's any internal element...
  
    union{
        //All three structure part of union..
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

//Function Pointer definition
//Gives Alias as "struct GeoObect go"
//Through this we can now access this Function Pointer...

typedef void(*drawfunc) (struct GeoObject go);

//Function declaration for different operation...

void drawcir(struct GeoObject go){
    printf("Circle : (%lf,%lf,%lf)\n",go.c.x,go.c.y,go.c.r);
}
void drawrec(struct GeoObject go){
    printf("Rectangle : (%lf,%lf,%lf,%lf)\n",go.r.x,go.r.y,go.r.w,go.r.h);
}
void drawtrg(struct GeoObject go){
    printf("Triangle : (%lf,%lf,%lf,%lf)\n",go.t.x,go.t.y,go.t.b,go.t.h);
}

//Here there is a return type "drawfunc" which will return address for Function Pointer..
//through drawarray then we can access the functions for different operations..

drawfunc drawarray[] = {drawcir,drawrec,drawtrg};

//Driving Code.....
int main(){
    struct GeoObject go;
    go.gcode = cir;
    go.c.x=2.3;
    go.c.y=4.5;
    go.c.r=2;
    drawarray[go.gcode](go);
    return 0;
}
