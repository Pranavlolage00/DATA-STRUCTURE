 int main()
 {
    struct node *list=NULL;
    int ch;
    clrscr();
    do{
    printf(" \n 1-create \n 2-display\n 3-insert beginning \n 4-insert mid \n5-delete big\n 6-delete common");
    printf("\n 7-insert common\n");
    printf("\n enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:list=create(list);
	      break;
     case 2:disp(list);
	  break;
     case 3:printf("enter number:");
	    scanf("%d",&num);
	    list=insertbeg(list,num);
	    break;
     case 4:printf("enter position:");
	     scanf("%d",&pos);
	     printf("enter number:");
	    scanf("%d",&num);
	    list=insertmid(list,num,pos);
		 break;
     case 5:list=delbig(list);
	       break;
     case 6:printf("enter position:");
	     scanf("%d",&pos);
	     list=delete1(list,pos);
	     break;
     case 7:printf("enter position:");
	scanf("%d",&pos);
	printf("enter number:");
	scanf("%d",&num);
	  list=insert1(list,num,pos);
	   break;
	 }
   }while(ch<8);


  getch();
  return 0;

 }