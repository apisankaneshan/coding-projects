#include <stdio.h> /*include standard input output library and math library*/
#include <math.h>

int
main (void)
{
	double quiz1, quiz2, quiz3, quiz4, quiz5, quiz6, quiz7, quiz8, quiz9, quiz10, midterm, exam, quizavg, midterm_m, exam_m, mark; /*introduce needed variables*/
	
	printf("Please enter the mark of the first quiz out of 10: "); /*ask user for each quiz mark and adress them to their variable*/
	scanf("%lf", &quiz1);
	
	printf("Please enter the mark of the second quiz out of 10: ");
	scanf("%lf", &quiz2);
	
	printf("Please enter the mark of the third quiz out of 10: ");
	scanf("%lf", &quiz3);
	
	printf("Please enter the mark of the fourth quiz out of 10: ");
	scanf("%lf", &quiz4);
	
	printf("Please enter the mark of the fifth quiz out of 10: ");
	scanf("%lf", &quiz5);
	
	printf("Please enter the mark of the sixth quiz out of 10: ");
	scanf("%lf", &quiz6);
	
	printf("Please enter the mark of the seventh quiz out of 10: ");
	scanf("%lf", &quiz7);
	
	printf("Please enter the mark of the eighth quiz out of 10: ");
	scanf("%lf", &quiz8);
	
	printf("Please enter the mark of the ninth quiz out of 10: ");
	scanf("%lf", &quiz9);
	
	printf("Please enter the mark of the tenth quiz out of 10: ");
	scanf("%lf", &quiz10);
	
	printf("Please enter the mark of the midterm test out of 100: "); /*ask user for midterm and exam mark*/
	scanf("%lf", &midterm);
	
	printf("Please enter the mark of the final exam out of 100: ");
	scanf("%lf", &exam);
	
	/*dropping lowest quiz mark*/
	if(quiz1<=quiz2&&quiz1<=quiz3&&quiz1<=quiz4&&quiz1<=quiz5&&quiz1<=quiz6&&quiz1<=quiz7&&quiz1<=quiz8&&quiz1<=quiz9&&quiz1<=quiz10){ /*if quiz 1 and 2 are lowest drop them*/
		quizavg = ((quiz2+quiz3+quiz4+quiz5+quiz6+quiz7+quiz8+quiz9+quiz10)/10)/9;
	}
	if(quiz2<=quiz1&&quiz2<=quiz3&&quiz2<=quiz4&&quiz2<=quiz5&&quiz2<=quiz6&&quiz2<=quiz7&&quiz2<=quiz8&&quiz2<=quiz9&&quiz2<=quiz10){
		quizavg = ((quiz1+quiz3+quiz4+quiz5+quiz6+quiz7+quiz8+quiz9+quiz10)/10)/9;
	}
	if(quiz3<=quiz1&&quiz3<=quiz2&&quiz3<=quiz4&&quiz3<=quiz5&&quiz3<=quiz6&&quiz3<=quiz7&&quiz3<=quiz8&&quiz3<=quiz9&&quiz3<=quiz10){
		quizavg = ((quiz1+quiz2+quiz4+quiz5+quiz6+quiz7+quiz8+quiz9+quiz10)/10)/9;
	}
	if(quiz4<=quiz1&&quiz4<=quiz2&&quiz4<=quiz3&&quiz4<=quiz5&&quiz4<=quiz6&&quiz4<=quiz7&&quiz4<=quiz8&&quiz4<=quiz9&&quiz4<=quiz10){
		quizavg = ((quiz1+quiz2+quiz3+quiz5+quiz6+quiz7+quiz8+quiz9+quiz10)/10)/9;
	}
	if(quiz5<=quiz1&&quiz5<=quiz2&&quiz5<=quiz3&&quiz5<=quiz4&&quiz5<=quiz6&&quiz5<=quiz7&&quiz5<=quiz8&&quiz5<=quiz9&&quiz5<=quiz10){
		quizavg = ((quiz1+quiz2+quiz3+quiz4+quiz6+quiz7+quiz8+quiz9+quiz10)/10)/9;
	}
	if(quiz6<=quiz1&&quiz6<=quiz2&&quiz6<=quiz3&&quiz6<=quiz4&&quiz6<=quiz5&&quiz6<=quiz7&&quiz6<=quiz8&&quiz6<=quiz9&&quiz6<=quiz10){
		quizavg = ((quiz1+quiz2+quiz3+quiz4+quiz5+quiz7+quiz8+quiz9+quiz10)/10)/9;
	}
	if(quiz7<=quiz1&&quiz7<=quiz2&&quiz7<=quiz3&&quiz7<=quiz4&&quiz7<=quiz5&&quiz7<=quiz6&&quiz7<=quiz8&&quiz7<=quiz9&&quiz7<=quiz10){
		quizavg = ((quiz1+quiz2+quiz3+quiz4+quiz5+quiz6+quiz8+quiz9+quiz10)/10)/9;
	}
	if(quiz8<=quiz1&&quiz8<=quiz2&&quiz8<=quiz3&&quiz8<=quiz4&&quiz8<=quiz5&&quiz8<=quiz6&&quiz8<=quiz7&&quiz8<=quiz9&&quiz8<=quiz10){
		quizavg = ((quiz1+quiz2+quiz3+quiz4+quiz5+quiz6+quiz7+quiz9+quiz10)/10)/9;
	}
	if(quiz9<=quiz1&&quiz9<=quiz2&&quiz9<=quiz3&&quiz9<=quiz4&&quiz9<=quiz5&&quiz9<=quiz6&&quiz9<=quiz7&&quiz9<=quiz8&&quiz9<=quiz10){
		quizavg = ((quiz1+quiz2+quiz3+quiz4+quiz5+quiz6+quiz7+quiz8+quiz10)/10)/9;
	}
	if(quiz10<=quiz1&&quiz10<=quiz2&&quiz10<=quiz3&&quiz10<=quiz4&&quiz10<=quiz5&&quiz10<=quiz6&&quiz10<=quiz7&&quiz10<=quiz8&&quiz10<=quiz9){
		quizavg = ((quiz1+quiz2+quiz3+quiz4+quiz5+quiz6+quiz7+quiz8+quiz9)/10)/9;
	}
	/*calculating final mark based on if midterm mark is higher than or equal to final mark*/
	if(midterm>=exam){
		midterm_m = midterm/100; /*calculate midterm's weight on final mark*/
		exam_m = exam/100; /*calculate exam's weight on final mark*/
		mark = (quizavg*25)+(midterm_m*35)+(exam_m*40); /*calculate final mark*/
		printf("\nThe final grade is %.2lf%%.", mark); /*show the user the final mark*/
	}
	else{
		midterm_m = midterm/100;
		exam_m = exam/100;
		mark = (quizavg*25)+(midterm_m*25)+(exam_m*50);
		printf("\nThe final grade is %.2lf%%.", mark);
	}
	
	
	return(0);
}
