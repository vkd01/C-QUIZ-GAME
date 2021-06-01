C Quiz Game.C
#include"stdio.h"
#include"stdlib.h"
int n;
struct play {
    char name[20];
    int score;
    int rat;
}p;
void high_score();
void start();
void help();
void main() {
    int chc=0; 
    printf("Press\n1 to start the game\n2 to see high scores \n3 to see game help \n0 to exit \n");
    scanf("%d",&chc);
    switch(chc) {
        case 1:
        start();
        break;
        case 2:
        high_score();
        break;
        case 3:
        help();
        break;
        default:
        exit(1);
    }
}
void help() {
    int ch;
    
    printf("\n\n\t**********GAME HELP**********");
    printf("\n---------------------------------------------------------");
    printf("\n........C PROGRAM QUIZ GAME.........\n");
    printf("\n>>There will be a total 25 questions");
    printf("\n>>You will be g iven 4 options and you have to press 1,2,3 or 4 for the CORRECT OPTION");
    printf("\n>>Each question will carry 5 points");
    printf("\n>>You will be asked questions continuously");
    printf("\n>>There is no negative marking for the wrong answer");
    printf("\n\n*******BEST OF LUCK ....!********");
    printf("\n\nContinuously playing ? (1/0) : ");
    scanf("%d",&ch);
    if(ch==1) {
        start();
    }
    else {
        exit(1);
    }
}
void start() {
    int ans;
    int count=0;
    char rating[20];
    FILE*fp;
     if((fp=fopen("\\tmp\play2.txt","a"))==NULL)   {
        printf("Error opening file\n");
    }
    printf("\nPlease Enter Your NAME\n");
    scanf("%s", p.name);
    printf("\n*********Welcome\"%s\" to C quiz Game**********\n\n",p.name);
    printf("Q(1). Comment on the output of this code\n int main(){\nint a[5]= {1,2,3,4,5};\nint i;\nfor(i=0;i<5;i++)\nif((char)a[i]=='5')\nprintf(""%d"",a[i]);\nelse\nprintf(""FAIL"");\n}\n\n1.The compiler will flag an error \t\t2. Program will compile and print the putput 5. \n3.Program will compile and print ASCII value of 5. \t\t4. Program will compile and print FAIL for 5 times\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==4){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 4");
    }
    printf("Q(2). The format identifier '%i' is also used for_____ data type ?\n1. Char\t\t2. int\n3. float \t\t 4. double\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==2){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 2");
    }
    printf("Q(3). Which data type is suitable for storing a number 65k in 32-bit system ?\n1. short \t\t2. int\n3. long\t\t4.double\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==1){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 1");
    }
    printf("Q(4). Which of the following is a user defined data type ?\n1. typedef int Boolean\t\t2. typedef enum {Monday,Tuesday,Friday}working days;\n3. struct{char name[10],int age};\t\t4. All of the mentioned\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==4){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 4");
    }
    printf("Q(5). What is the size of an int data type ?\n1. 4 Bytes\t\t2. 8 Bytes\n3. Depends on the system\\compiler\t\t4. Cannot be determined\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==3){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 3");
    }
    printf("Q(6). What is the output of this C code ?\nint main(){\nvoid foo(),f();\nf();\n}\nvoid foo{\nprintf(""2"")\n}\nvoid f(){\nprintf(""1"");\nfoo();\n}\n1. Compile time error as foo is local to main\t\t2. 1 2\n3. Compile time error due to declaration of functions inside main\t\t4. 2 1\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==2){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 2");
    }
    printf("Q(7). What is the output of this code ?\nvoid foo();\nint main(){\nvoid foo();\nfoo();\nreturn 0;\n}\nvoid foo(){\nprintf(""2"")\n}\n1. Compile time error\t\t2. 2\n3. Depends on the compiler\t\t4. Depends on the standard\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==2){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 2");
    }
    printf("Q(8). Which of the following is a correct format for declaration of function?\n1.return-type function-name(argument type);\t\t2. return-type function-name(argument type){}\n3. return type(argument type)function-name;\t\t4. Both(1) and (2)\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==1){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 1");
    }
    printf("Q(9). Which of the following function declaration is illegal?\n1. int 1bhk(int);\t\t2. int 1bhk(int a);\n3. int 2bhk(int*, int[]);\t\t4. All of these\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==4){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 4");
    }
    printf("Q(10). Which of the following definition will Run correctly?\n1. int sum(int a,int b)\t\tint sum(int a, int b)\n  return (a+b);\t\t {return(a+b);}\n3. int sum(a,b)\t\t4. Both(1) and (2)\n  return (a+b);\n");
    printf("Enter the correct option : ");
    scanf("%d",&ans);
    if(ans==2){
        printf("Correct! +5 points\n\n");
        ++count;
    }
    else {
        printf("Wrong answer! Correct answer is option 2");
    }
if(count > 0){  
                printf("Thanks for playing, You scored: %d points \n", count*5);  
                p.score=count*5;  
                if(p.score >= 40){  
                    printf("Rating: * * * * *");  
                    p.rat=5;  
                }  
                else if(p.score >= 30 && p.score < 40){  
                    printf("Rating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 20 && p.score < 30){  
                    printf("Rating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 10 && p.score < 20){  
                    printf("Rating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 10){  
                    printf("Rating: *");  
                     p.rat=1;  
                }
                    fprintf(fp,"%s %d %d", p.name,p.score,p.rat);  
                    fclose(fp);  
        }  
        else{  
            printf("Try again!");  
        }  
}   
void high_score(){  
    int ch;  
    FILE *fp;  
    if((fp=fopen("\\tmp\play2.txt", "r"))==NULL){    
                printf("\nNo games played yet!\n");  
            }  
            else{  
    printf("\n*********** HIGH SCORES ***********\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.rat) !=EOF)  {  
        printf("__________\n");  
        printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.rat);  
    }  
    fclose(fp);  
    }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  
    if(ch==1)  {  
        start();  
    }  
    else  {  
        exit(1);  
    }  

}



