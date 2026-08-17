#include<stdio.h>
int main(){
    float m1,m2,m3,m4;
    float max_marks_per_subject = 40;
    float total_max_marks = max_marks_per_subject * 4;
    printf("Maths:");
    scanf("%f",&m1);
    printf("Physics:");
    scanf("%f",&m2);
    printf("Chemistry:");
    scanf("%f",&m3);
    printf("English:");
    scanf("%f",&m4);
    if (m1 < 0 || m1 > max_marks_per_subject ||
        m2 < 0 || m2 > max_marks_per_subject ||   
        m3 < 0 || m3 > max_marks_per_subject ||
        m4 < 0 || m4 > max_marks_per_subject)
    {   printf("\n ERROR : MARKS CANNOT BE LESS THAN ZERO OR GREATER THAN 40",max_marks_per_subject);
    }
    else
    {
        float total_obtained = m1 + m2 + m3 + m4; 
        float percentage = (total_obtained / total_max_marks) * 100;
        printf("percentage: %f\n" , percentage);
    }
    return 0;
}