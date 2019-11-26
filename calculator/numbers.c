//find numbers
// Created by jesse on 2019/11/22.
//v2.0
#include<stdio.h>
#include<math.h>
#define chartonumber(x) (x-'0') //convert char to int
void numbers(char *num_array,int length,int *nums){
    int cnt=0;
    int i=0,j=0,k=0;
    int temp=0;
    int temp1=0;
    int temp2=0;
    int record=0;
    for(i=0;i<length;i++){
    	j=record;
    	while(num_array[j]>='0'&&num_array[j]<='9'){
    		cnt++;
    		j++;
		}
        temp1=cnt;
        temp2=record+cnt;
        for(k=record;k<temp2;k++){
            nums[temp]+=chartonumber(num_array[k])*pow(10,cnt-1);
            cnt--;
        }  
        record+=temp1+1;  
        temp++;
        cnt=0;
        if(num_array[k+1]=='e'){
        	break;
		}
    }
}

