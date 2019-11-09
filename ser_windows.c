#include <stdio.h>
#include <stdlib.h>
int main(){
    int port;
    char st[256];
    printf("port: ");
    scanf("%d", &port);
    sprintf(st, "ffmpeg -r:v 30 -s:v 1600x900 -f gdigrab -i desktop -c:v libx264 -b:v 8M -preset ultrafast -tune zerolatency -f h264 udp://255.255.255.255:%d?broadcast=1", port);
    system(st);
    return 0;
}
