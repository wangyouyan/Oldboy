#include "sign_up.h"
#include "display_all.h"
#include "sign_in.h"
#include "menu_main.h"

int main()
{
	menu_main();
	while (1)
	{
	int id;
	printf("#");
	scanf("%d",&id);
	switch(id)
	{
	case 1:
	sign_up();
	menu_main();
	break;
	case 2:
	sign_in();
	break;
	default:break;
	}
	}
	return 0;
}
