//function to total
// Created by jesse on 2019/11/22.
//v1.0

//先for一遍把所有的*/全部运算了存进一个变量再for一遍把加减运算存进第二个变量 ，两个变量相加就可以 
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
    //operates数组里面的零号对应nums的零号和一号，operates数组里面的一号对应一号和二号 
    //3*5*2/4
}

