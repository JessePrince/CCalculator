/*Program for auto calculator
 * version1.0
 * problem:only int array,can it be int?*/
 //this program is an opensource program
 //code created by Jesse
 //�������汾1.0��ֻ���������㡣 
 
 /*�ȴ������İ汾v2.0��
 ֧�ָ����������Լ����㣬�������ȼ����뷨�������ַ���С����ǰ������ճ���ӣ�����֪�������֮ǰ�������ճ���10�ķ�����������
 */ 
 
 /* 2019.11.25�汾���£����Ը�������ȡ����*/ 
 //��¼��ʧ�� 


#include <stdio.h>
#include"myfunctions.h"
#define length 20
#define chartonumber(x) (x-'0') //convert char to int
int main(void){
    char operator_array[length]={'0'};  //������洢����� 
    init_array(operator_array,length);
    char userarray[length]={'0'}; //������洢�û����� 
    init_array(userarray,length);
    int num_array[length]={0};  //������洢ת��������� 
    printf("calculator build 1.0 test\n");
    Getinput(userarray);  //ȡ���û����� 
    isOperator(userarray,length,operator_array);  //�������е������ 
    numbers(userarray,length,num_array);  //�������е����ֲ���ת��Ϊ������
    float result=summary(num_array,operator_array,length); //����ģ�� 
    print(result);  //��� 
    return 0;
}
