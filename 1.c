#include <stdio.h>
#include <math.h>
#include <string.h>
int scoreOfString(char* s) {
    int i,sum=0;
    char *l=s;
    for(i=0;i<strlen(l)-1;i++){
        sum +=abs(*s-*(s+1)); 
        s++;                 
    }
    return sum;
}
int main() {
    // 测试数据
    char *testString = "hello";
    // 调用函数并打印结果
    int result = scoreOfString(testString);
    printf("答案是 '%s' 他的: %d\n", testString, result);
    return 0;
}