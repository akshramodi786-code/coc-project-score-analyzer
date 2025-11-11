#include<stdio.h>
#include<conio.h>
int main(){
    int n,i; //n=no. of students

    //Step1: Ask no. of students
printf("Enter the no. of students: ");
scanf("%d",&n);

//The no. of student can't be 0

if(n<=0){
    printf("Invalid no. of students");
    return 1;
}
//Step2: Get score of students
float scores[n];
printf("Enter scores of %d student\n",n);

//For valid no. of student we will store data

for(i=0;i<n;i++){ //i<n , because it works from 0 to n-1
    printf("Score of %d student: ",i);
    scanf("%f",&scores[i]);
}
//Step3:Find Class Average
{
float sum=0,average;
for(i=0;i<n;i++){
    sum=sum+scores[i];
}
average=sum/n;
printf("Class Average: %.2f\n",average);
}
//Step4: Find Highest score and Lowest no.
{
    //
float max_score_so_far = scores[0]; // start with first score
    float min_score_so_far = scores[0]; // start with first score for lowest

    for(int i = 1; i < n; i++) {
        if(scores[i] > max_score_so_far) {
            max_score_so_far = scores[i];
        }
        if(scores[i] < min_score_so_far) {
            min_score_so_far = scores[i];
        }
    }
    printf("Highest Score: %.2f\n",max_score_so_far);
    printf("Lowest Score: %.2f",min_score_so_far);
}
    return 0;
}