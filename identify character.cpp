#include <stdio.h>
int main()
{
    char c;
    int character;
    printf("Enter anything: ");
    scanf("%c",&c);

	for(int allcaps=65;allcaps<=90;allcaps++)
    {if(c==allcaps)
    printf("You have Entered a Capital Letter.");
	}
	
	for(int smallcaps=97;smallcaps<=122;smallcaps++)
	{if(c==smallcaps)
	printf("You have Entered a Small Letter.");
	}
	
	for(int num=48;num<57;num++)
	{if(c==num)
	printf("You have Entered a Number.");
	}
	
	for(int sc1=0;sc1<47;sc1++)
	{if(c==sc1)
	printf("You have Entered a Special Character.");
	}
	
	for(int sc2=58;sc2<64;sc2++)
	{if(c==sc2)
	printf("You have Entered a Special Character.");
	}
	
	for(int sc3=91;sc3<96;sc3++)
	{if(c==sc3)
	printf("You have Entered a Special Character.");
	}
	
	for(int sc4=123;sc4<125;sc4++)
	{if(c==sc4)
	printf("You have Entered a Special Character.");
	}
	
	return 0;
}
