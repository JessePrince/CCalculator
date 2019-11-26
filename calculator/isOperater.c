//This function is aimed to find operate
// Created by jesse on 2019/11/22.
//V1.0
#include<stdio.h>
void isOperator(char *array,int length,char *operate){
	//printf("in isoperator\n");
	int j=0;
	//printf("here in loop,array=%s\n",array[0]);
    for(int i=0;i<length;i++){
        if(array[i]=='+'){
            operate[j]='+';
            j++;
        }else if(array[i]=='-'){
            operate[j]='-';
            j++;
        }else if(array[i]=='*'){
            operate[j]='*';
            j++;
        }else if(array[i]=='/'){
            operate[j]='/';
            j++;
        }
        //printf("here in loop,array[%d]=%c\n",i,operate[i]);
    }
    //printf("here in loop,array=%s\n",array[0]);
}

 

