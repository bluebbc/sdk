#include "sdp.h"
#include <stdio.h>

static void sdp_test1(void)
{
	FILE* fp;
	void* sdp;
	char buffer[5*1024] = {0};
	fp = fopen("sdp/sdp1.txt", "r");
	fread(buffer, 1, sizeof(buffer), fp);
	sdp = sdp_parse(buffer);
	sdp_destroy(sdp);
	fclose(fp);
}

static void sdp_test2(void)
{
	FILE* fp;
	void* sdp;
	char buffer[5*1024] = {0};
	fp = fopen("sdp/sdp2.txt", "r");
	fread(buffer, 1, sizeof(buffer), fp);
	sdp = sdp_parse(buffer);
	sdp_destroy(sdp);
	fclose(fp);
}

void sdp_test(void)
{
	sdp_test1();
	sdp_test2();
}