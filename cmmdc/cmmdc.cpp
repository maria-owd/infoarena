#include<stdio.h>

/** 
 * https://infoarena.ro/problema/cmmdc
*/
int main(){

    FILE *in, *out;
    int a,b;

    in = fopen("cmmdc.in","r");
    out = fopen("cmmdc.out", "w");
    
    fscanf(in,"%d",&a);
    fscanf(in, "%d", &b );

    // Algoritmul lui Euclid
    
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }


    fprintf(out, "%d",a);

    return 0;

}