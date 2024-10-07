

/* its a valid parser which covers most of our grammar rules*/

#include <stdio.h>

struct Node{
    int data;
};
int func(int a, int b){
    return a+b;
}
int main(){
    int a = 6;
    int arr[6] = {0 ,1 , 2,3 ,4 ,5};
    int c = a++;
    int b = 5;
    struct Node n;
    //n.data = 5;
    if (a>0){
        printf("a is greater than 0\n");

    }
    else if (b>0){
        printf("b is greater than 0\n");
    }
    else{
        printf("a and b are less than 0\n");
    }

    if (a && b || (a+b)){
        printf("a and b are non zero\n");
    }
    else if (a || b){
        printf("a or b is non zero\n");
    }
    else{
        printf("a and b are zero\n");
    }

    for (int i = 0; i < 6; i++){
        printf("%d\n",arr[i]);
    }

    c += func(a,b);
    printf("%d\n",c);
}