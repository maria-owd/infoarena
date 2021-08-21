#include<stdio.h>

/** 
 * https://infoarena.ro/problema/adunare
*/
int main(){

    FILE *in, *out;
    int a,b,s;

    in = fopen("adunare.in","r");
    out = fopen("adunare.out", "w");
    
    fscanf(in,"%d",&a);
    fscanf(in, "%d", &b );


    s=a+b;
    fprintf(out, "%d",s);

    return 0;

}