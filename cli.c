#include <stdio.h>
#include <stdlib.h>
int main(){
    int port;
    char st[256];
    printf("port: ");
    scanf("%d", &port);
    sprintf(st, "ffplay -f h264 -i udp://255.255.255.255:%d?broadcast=1", port);
    system(st);
    return 0;
}
