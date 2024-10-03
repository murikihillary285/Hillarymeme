   //program to apply loan
     /*
     program to apply loan 
     author:meme Hillary Muriki
     reg: CT102/G/23227/24
     date:02/10/2024
    */
        
    #include <stdio.h>

    int main() {
    int age;
    float income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}