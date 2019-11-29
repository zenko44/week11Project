#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("\nPick an option.\n");
    scanf("%d", &n);

    switch(n){
    case 1:
        fizzBuzz();
        break;
    case 2:
        binaryToDecimal();
        break;
    }
   //fizzBuzz();

   return 0;
}


int fizzBuzz(){

    int x = 0;
    int Fizz = 3;
    int Buzz = 5;
    char fizz[4] = "Fizz";
    char buzz[4] = "Buzz";

    while (x <= 99){
        x++;

        if ((x % Fizz) == 0 && (x % Buzz) == 0){
            printf("FizzBuzz! \n");
        }
        else if ((x % Fizz) == 0){
                printf("Fizz \n");
        }
                else if ((x % Buzz) == 0){
                printf("Buzz \n");
        }
        else{
            printf("%d \n", x);
        }
    }
    main();
    return 0;
}


int binaryToDecimal(){
    int Binary[4] = {0,0,0,0};
    int i;
    int c = 0;

    for (int i =0; i<4; i++)
        {
            scanf("%d", &Binary[i]);

    }

    for(int i = 0; i<4; i++){
    if(Binary[i] == 0){
            c= c*2+Binary[i];
    }
    else{
        c = c*2+Binary[i];
    }

 }


            printf("%d\n", c);



main();
return 0;
}

int calculator(){






    main();
    return 0;
}
