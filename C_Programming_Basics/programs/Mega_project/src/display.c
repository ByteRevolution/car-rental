void display_menu()
{
 printf("\n ************** MENU **************");
 printf("\npress the corresponding number to use that function\n");
printf("\n 1 : show available car "); 
printf("\n 2 : rent a car "); 
printf("\n 3 : register new customer"); 
printf("\n 4 : add new car "); 
printf("\n 0 : exit "); 
printf("\n ");   

astrick(60);
int choice;
printf("\n please enter your choice : ");
scanf("%d",&choice);
printf("\nyou have entered %d ",choice);

switch(choice)
{
    case 1 :
        init_display();
        
    case 2:
        init_display();
        show_car_list();
        display_menu();
    case 3 : 
        init_display();
        break;
    case 4 :
        add_car();
    case 0 :
        astrick(999999);
        break;
}


}


