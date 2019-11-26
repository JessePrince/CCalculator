/*Program for auto calculator
 * version1.0
 * problem:only int array,can it be int?*/
 //this program is an opensource program
 //code created by Jesse
 //计算器版本1.0，只能整数运算。 
 
 /*等待迭代的版本v2.0：
 支持浮点数输入以及运算，还有优先级！想法：分离字符后小数点前面的数照常相加，后面知道运算符之前的数按照除以10的方法进行运算
 */ 
 
 /* 2019.11.25版本更新：尝试浮点数读取函数*/ 
 //记录：失败 


#include <stdio.h>
#include"myfunctions.h"
#define length 20
#define chartonumber(x) (x-'0') //convert char to int
int main(void){
    char operator_array[length]={'0'};  //此数组存储运算符 
    init_array(operator_array,length);
    char userarray[length]={'0'}; //此数组存储用户输入 
    init_array(userarray,length);
    int num_array[length]={0};  //此数组存储转换后的数字 
    printf("calculator build 1.0 test\n");
    Getinput(userarray);  //取得用户输入 
    isOperator(userarray,length,operator_array);  //分离所有的运算符 
    numbers(userarray,length,num_array);  //分离所有的数字并且转换为正常数
    float result=summary(num_array,operator_array,length); //运算模块 
    print(result);  //输出 
    return 0;
}
