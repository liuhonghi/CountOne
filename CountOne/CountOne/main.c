//
//  main.c
//  CountOne
//
//  Created by HiLau on 2023/6/15.
//

#include <stdio.h>

//求一个数的二进制数中1的个数
//如:13 - 1101

int main()
{
    int a = 13; //1101(实际上前面还有很多0，看操作系统是32位还是64位，此处简略不影响结果)
    int count = 0;
    while(a>0)
    {
        if(a&1 == 1) //按位与1
        {
            count++;
        }
        a=a>>1;//a（二进制）右移1
    }
    printf("count = %d\n",count);
    return 0;
    
}
