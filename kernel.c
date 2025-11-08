#include "base.h"

void kernel_main()
{
        int n=0;
        int xx;
        char Yellow=14;
        int i=320/2;
        int ii=0;
        char c=Yellow;
        char Black=0;
	cls(Yellow);
        for(xx=1;xx<150;xx++){
             line(i-xx/2,xx,xx/2+i,xx,Black);
        }
        while(1){}
	
	
}


