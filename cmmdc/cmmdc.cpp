#include<stdio.h>

/** 
 * https://infoarena.ro/problema/cmmdc
*/
int main(){

    FILE *in, *out;
    int a,b,d;

    in = fopen("cmmdc.in","r");
    out = fopen("cmmdc.out", "w");
    
    fscanf(in,"%d",&a);
    fscanf(in, "%d", &b );

    d = 0;

    for(int i=2; i<=a; i++){
        if(a%i==0 && b%i==0){
            d=i;
        }
    }


    fprintf(out, "%d",d);

    return 0;

}