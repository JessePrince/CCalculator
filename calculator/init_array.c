#include<stdio.h>
void init_array(char *array,int length){
	for(int i=0;i<length;i++){
		array[i]='e';  //e作为结束字符，读到e表示为空 
	}
}
