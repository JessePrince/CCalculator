//this function is aimed to get input
// Created by jesse on 2019/11/22.
//v1.0
#include<stdio.h>
void Getinput(char *array){
//	printf("in getinput\n");
    int i=0;
    char y;
    do{
        scanf("%s",&array[i]);
        i++;
    }while(y=getchar()!='\n');
    //for(int i=0;i<20;i++){
    	//printf("%c\n",array[i]);
	//}
}

