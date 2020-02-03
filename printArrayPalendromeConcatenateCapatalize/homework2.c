#include <stdio.h>
#include <math.h>

void printArray(double data[], int n);
int computePopulations(double P0, double r, double P[], int n);
int concatenate(char *dest, int destSize, const char *s1, const char *s2);
int capitalize(char *str);

int main(int argc, const char * argv[]) {
    
    double data[] = {20, -5, 6};
    int n = 2;
    printArray(data,n);
    

    double P0 = 4;
    double r = .8;
    n = 3;
    double P[n];
    int  a = computePopulations(P0,r,P,n);
    printf("%d\n",a);
 
    
    int destSize = 10;
    char *aString = "Kevin ";
    char *bString = "Bacon";
    char concatenated[destSize];
    int length = concatenate(concatenated, 10, aString, bString);
    printf("%d\n",length);
    
   
    
    char az[] = "Single";
   char* str = az;
    int b = capitalize(str);
  //  printf("%d",b);

    
    return 0;
}
void printArray(double data[], int n){
    int count = 0;
    if(count<n){
        for(int i = 0; i < n; i++){
          printf("%f\n",data[i]);
        }
    }
}

int computePopulations(double P0, double r, double P[], int n){
    int counter = 0;

    double cPop = 0.0;
    double max = pow(10,9);
   
 
        
        for (int i = 0;(i<n)&&(cPop<=max);i++){
            cPop = P0*(exp(r*i));
                P[i]=cPop;
              counter=i+1;
        }
        
    return counter;
}



//create buffer s1+s2 and a byte for '\0'
//for i in literals cp buffer
//add null
//
//**$for not null increment counter--sum total subtract destSize from it return that
//Pseudo:
//read *s1 and s2 into separate char arrays.
//assign char* someVar = s1; will then point to s1[0]
//someVar++= s1[0+?]
//maybe dont use dest n until you have final string in char* variable
//



int concatenate(char *dest, int destSize, const char *s1, const char *s2){
    int rs=0;
    
    if (*s1 == '\0' && *s2 == '\0') {
        *dest = '\0';
        return 0;
    }
    else {
        int j = 0;
        int i = 0;
    
        for(; i < destSize-1; i++){
            if(!(s1[i] == '\0') && j == 0){
                dest[i]=s1[i];
            
            }
            else if (!(s2[j] == '\0')){
                dest[i] = s2[j];
                j++;
            }
            else {
                    dest[i] = '\0';
                    return i;
            }
        }
        dest[i] = '\0';
        return i;
    }
}
        



int capitalize(char *str){
    int count = 0;
    int i = 0;
    
    while(str[i] != '\0'){
        
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i]=str[i] - ('a' - 'A');
         count++;
        }
        
        i++;
    }
    
     return count;
}
   



