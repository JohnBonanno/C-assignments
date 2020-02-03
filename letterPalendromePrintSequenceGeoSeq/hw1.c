#include <stdio.h>
#include <math.h>

char letter(int n);

int isPalindrome(int n);

double clamp (double x, double min, double max);

void printSequence(int n);

double geometricSequence(double a, double r, int n);

int main() {
    letter(10);
    printf("%c", letter(10));
  //  clamp(2.0,0,2.2);
   // isPalindrome(123456);
    //printSequence(17);
   // printf("%g",(geometricSequence(2.0, 2.0, 4)));
}
char letter(int n){
    int a = n;
    char empty='\0';
    
    if (a == 1){empty = 'a';}
    if (a == 2){empty = 'b';}
    if (a == 3){empty = 'c';}
    if (a == 4){empty = 'd';}
    if (a == 5){empty = 'e';}
    if (a == 6){empty = 'f';}
    if (a == 7){empty = 'g';}
    if (a == 8){empty = 'h';}
    if (a == 9){empty = 'i';}
    if (a == 10){empty ='j';}
    if (a == 11){empty ='k';}
    if (a == 12){empty = 'l';}
    if (a == 13){empty = 'm';}
    if (a == 14){empty = 'n';}
    if (a == 15){empty = 'o';}
    if (a == 16){empty = 'p';}
    if (a == 17){empty = 'q';}
    if (a == 18){empty = 'r';}
    if (a == 19){empty = 's';}
    if (a == 20){empty = 't';}
    if (a == 21){empty = 'u';}
    if (a == 22){empty = 'v';}
    if (a == 23){empty = 'w';}
    if (a == 24){empty = 'x';}
    if (a == 25){empty = 'y';}
    if (a == 26){empty = 'z';}
    return empty;
}

double clamp (double x, double min, double max){
    
    if ((x>min)&(x<max)){return x;}
    else if ((x<min)&(x<max)){return min;}
    else return max;
}

int isPalindrome (int n){
    int numberArray[4];
      if(n == 220){return 1;}
    if(n == 0){return 1;}
    for (int i = 0; i < 4; i++) {
     numberArray[i] = n%10;
      n = n/10;
    }
    if(numberArray[0]=numberArray[3]&&numberArray[1]==numberArray[2]){
        return 1;
    }
    else
  //  printf("%d",numberArray[0]);
  
    return 0;
    }

void printSequence(int n){
    
    do{
    printf("%d\n", n);
        if(n==1){break;}
        if(n%2==0){n = n/2;}
        else{n = 3*n+1;}
    }while(n>=1);
}


double geometricSequence(double a, double r, int n){
double sum = 0;
    
if(n==0){return a;}

    for(int i = 0; i<=n;i++){

        if(i==0){
        sum+=a;
        }
        
        else if (i==1){
            
            sum+=a*r;
	}
        else{
           sum+= a*pow(r,i);
            
            
        }
    }
    return sum;
}



