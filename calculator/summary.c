//function to total
// Created by jesse on 2019/11/22.
//v1.0

//��forһ������е�*/ȫ�������˴��һ��������forһ��ѼӼ��������ڶ������� ������������ӾͿ��� 
#include<stdio.h>
float summary(int nums[],char operates[],int length){
	//printf("in summary\n");
	//for(int i=0;i<length;i++){
		//printf("nums[%d]=%d\n",i,nums[i]);
	//}
//	for(int i=0;i<length;i++){
		//printf("operates[%d]=%c\n",i,operates[i]);
	//}
	
    float total=nums[0];
    for(int i=1;i<(length-1);i++){
        if(operates[i-1]=='+'){
            total+=nums[i];
        }else if(operates[i-1]=='-'){
            total-=nums[i];
        }else if(operates[i-1]=='*'){
            total*=nums[i];
        }else if(operates[i-1]=='/'){
            total/=nums[i];
        }
        //printf("%f\n",total);
    }
    return total; 
    //operates�����������Ŷ�Ӧnums����ź�һ�ţ�operates���������һ�Ŷ�Ӧһ�źͶ��� 
    //3*5*2/4
}

