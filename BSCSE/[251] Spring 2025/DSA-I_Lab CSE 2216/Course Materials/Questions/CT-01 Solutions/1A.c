#include<stdio.h>

int main() {
    char ch1[100];
    char ch2[100];
    scanf("%s%s", &ch1, &ch2);
    int temp[26] = {0};
    for(int i = 0; ch1[i] != '\0'; i++) {
        temp[ch1[i] - 'a']++;
    }
    for(int i = 0; ch2[i] != '\0'; i++) {
        temp[ch2[i] - 'a']--;
    }
    int flag = 1;
    for(int i=0;i<26;i++) {
        if(temp[i] != 0) {
            flag = 0;
        }
    }
    if(flag == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}