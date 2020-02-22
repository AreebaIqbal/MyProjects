#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string>
#include<parkingprogram.h>

using namespace std;

int main()
{

		front_page();
	
	int u_input4;
	 char u_input;
	 int var1=1;
	 int var2=1;
	 int var3=1;
	 int var4=1;
	 int var5=1;
	 int temp1=0;
	 int temp2=0;
	 int temp3=0;
	 int temp4=0;
	 int temp5=0;
	 int r=0;
     int c=0;
     int b=0;
     int s=0;
     int z=0;
	 int amount=0;
	 int count;
	 int option;
	 char code;
	 int code1;

	 string n_plate;
	 string colour;
	 string p_code;
	 float p_time, e_time, TIME;
	 int hour,mint, e_hour,e_mint;
	 float Mint,E_Mint;
	 int remaining,T_time;
	
	
	
	
	
     while(true)
	{
		
	 FirstMenu:
	
	
	 cout<<"\n\n\n\t\t\tPRESS 1 FOR ARRIVAL.";
	 cout<<"\n\n\n\t\t\tPRESS 2 FOR DEPARTURE.";
	 cout<<"\n\n\n\t\t\tPRESS 3 TO SHOW THE TOTAL RECORD.";
	 cout<<"\n\n\n\t\t\tPRESS 4 TO DELETE THE RECORD.";
	 cout<<"\n\n\n\t\t\t YOUR CHOICE:";
	 
	 cin>>option;
     	
	 system("cls");
	
	
	
 	//MAIN MENU:
	
	     if(option==1)
	
		  {
		     cout<<"\n\n\n\t\tPRESS 'R' FOR RIKSHAW\n";
		     cout<<"\n\n\n\t\tPRESS 'C' FOR CAR\n";
		     cout<<"\n\n\n\t\tPRESS 'B' FOR BUS\n";
		     cout<<"\n\n\n\t\tPRESS 'Z' FOR SUZUKI\n";
		     cout<<"\n\n\n\t\tPRESS 'S' FOR SCOOTER\n";
		     cout<<"\n\n\n\t\tPRESS 'P' FOR PREVIOUS MENU\n";
		     


	
    	         while(true)
     	        {
	             cin>>u_input; 
                 system("CLS");
	    
	             if(u_input=='r'||u_input=='R')
     	            {  
	 
	                 system("cls");
	 	             if(r<10)
     	                {
		                 r=r+1;
		                 amount=amount+25;
		                 cout<<endl<<endl;
	                     temp1=	rickshaw(var1);
	  	                 cout<<temp1;
	  	                 var1=++temp1;
	  	                 cout<<endl;
	  	                 recipt();
	  	                
	  	                 cout<<"\npress any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	
	  	                 goto FirstMenu;	  	 
                        }
	                 else
	                    {
						 cout<<"NO SPACE FOR RIKSHAW\n";
	                     cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	  	                 goto FirstMenu;
                        }
                    }
	              
				 else if(u_input=='c'||u_input=='C')
                 	{
			         system("cls");
		
		             if(c<10)
     	                { 
		                 c=c+1;
		                 amount=amount+30; 
						 cout<<endl<<endl;	 
	                     temp2=	car(var2);
	  	                 cout<<temp2;
	  	                 var2=++temp2;
	  	                 cout<<endl;
	  	                 
	  	                recipt();
	  	 
	  	        
	  	                 cout<<"\npress any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	  	                 goto FirstMenu;
	                    }
	            
	  	 	         else
	                    {
						 cout<<"NO MORE SPACE FOR CAR\n";
	                     cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	  	                 goto FirstMenu;
     	                }
		           }
			   		

	
	
	
	
	             else if(u_input=='b'||u_input=='B')
	               {
		             if(b<10)
     	                {
		                 b=b+1;
		                 amount=amount+50;
		                 cout<<endl<<endl;
	                     var3=++temp3;
	  	                 cout<<endl;
	 	 
	                     temp3=	bus(var3);
	  	                 cout<<temp3;
	  	                 recipt();
	  	                 
	  	                 cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	   	                 system("cls");
	  	                 goto FirstMenu;
     	                }
		             else
	                    {
						 cout<<"NO MORE SPACE FOR BUS\n";
	                     cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	   	                 goto FirstMenu;		   		
	                    }
	                }
	 
	 
	             else if(u_input=='s'||u_input=='S')
	                    {
		                 if(s<10)
     	                {
		                 s=s+1;
		                 amount=amount+20;
		 
	 
                         cout<<endl<<endl;	 	 
	                     temp4=	scooter(var4);
	     
	  	                 cout<<temp4;
	  	                 
	  	                 var4=++temp4;
	  	                 cout<<endl;
	  	                 recipt();
	  	                 cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	  	                 goto FirstMenu;
	                    }
	  
	                 else
	                    {
					     cout<<"\n\tNO MORE SPACE FOR SCOOTERS\n";
	                     cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	  	                 goto FirstMenu;
     	               }
		            }          
		 
	             else if(u_input=='z'||u_input=='Z')
                 	{
		             if(z<10)
                       {
		                 z=z+1;
		                 amount=amount+40;
		                 cout<<endl<<endl;
	                     temp5=	suzuki(var5);
	  	                 cout<<temp5;
	  	                 recipt();
	  	                 var5=++temp5;
	  	                 cout<<endl;
	  	                 cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	  	                 goto FirstMenu;
	                    }

	                 else
	                    {
						 cout<<"NO MORE SPACE FOR SUZUKI\n";
    
		                 cout<<"press any key to continue\n";
	  	                 cin>>u_input;
	  	                 system("cls");
	  	                 goto FirstMenu;
                       }
                    }
                 else if(u_input=='p'||u_input=='P')
                    {
                    	system("cls");
                    	goto FirstMenu;
					}
		         else
		            {
		
			         cout<<"YOU PRESSED INVALID BUTTON, TRY AGAIN\n";
			         cout<<"press any key to continue\n";
	  	             cin>>u_input;
	  	             system("cls");
	  	             goto FirstMenu;
	                }
               }
			}           
	
	
	
	
	
	
	
	
	
     	 else if(option==2)
	       {   
	       	
             cout<<"\n\n\tENTER CURRENT TIME:\n";	
             cout<<"\n\n\tHOUR=";
             cin>>e_hour;
             cout<<"\n\n\tMINUTES=";
             cin>>e_mint;
             cout<<"\n\n\tENTER THE PARKING TIME:\n";
             cout<<"\n\n\tHOUR=";
             cin>>hour;
             cout<<"\n\n\tMINUTES=";
             cin>>mint;

             TIME= ((e_hour*3600+e_mint*60)-(hour*3600+mint*60))/3600;
             remaining=((e_hour*3600+e_mint*60)-(hour*3600+mint*60))%3600;
             T_time=remaining/remaining+TIME;
             cout<<	"\n\tYOUR CAR WAS PARKED FOR "<<T_time<<" HOUR(S)";
        
        
	       	 cout<<"\n\n\tENTER CODE PLEASE\n";
		     cout<<"\n\n\tFIRST LETTER=";
		     cin>>code;
		     cout<<"\n\n\tCODE=";
		     cin>>code1;
		     
             if(code=='r'||code=='R')
		        {
		 	      int T_charge=25+T_time*20;
                 cout<<"\n\n\tYOU HAVE TO PAY RS/= "<<T_charge;	
			     r=r-1;
			     count=count-1;
		         cout<<"\n\n\t\t\t\t*THANKS FOR COMING*";

		         cout<<"press any key to continue\n";
	  	         cin>>u_input;
	  	         system("cls");
	  	         goto FirstMenu;
		        }
		     else if(code=='c'||code=='C')
		        {
		         int T_charge=30+T_time*20;
                 cout<<"\n\n\tYOU HAVE TO PAY RS/= "<<T_charge;	
			     cout<<"\n\n\t\t\t\t*THANKS FOR COMING*";
		
		         c=c-1;
			     count=count-1;
			
			     cout<<"\npress any key to continue\n";
	  	         cin>>u_input;
	  	         system("cls");
	  	         goto FirstMenu;
		        }
		      
       	     else if(code=='s'||code=='S')
		        {
		  
		         int T_charge=20+T_time*20;
                 cout<<"\n\n\tYOU HAVE TO PAY RS/= "<<T_charge;	
			     cout<<"\n\n\t\t\t\t*THANKS FOR COMING*";
			     s=s-1;
			     count=count-1;
			     cout<<"THANKYOU FOR COMING\n\n";
			     cout<<"press any key to continue\n";
	  	         cin>>u_input;
	  	         system("cls");
	  	         goto FirstMenu;
		        }
		     else if(code=='b'||code=='B')
		        {
		  
		         int T_charge=50+T_time*20;
                 cout<<"\n\n\tYOU HAVE TO PAY RS/= "<<T_charge;	
			     cout<<"\n\n\t\t\t\t*THANKS FOR COMING*";
			     b=b-1;
			     count=count-1;
			     cout<<"THANKYOU FOR COMING\n\n";
			     cout<<"press any key to continue\n";
	  	         cin>>u_input;
	  	         system("cls");
	  	         goto FirstMenu;
	  	        }
		     else if(code=='z'||code=='Z')
		        { 
		  
		         int T_charge=40+T_time*20;
                 cout<<"\n\n\tYOU HAVE TO PAY RS/= "<<T_charge;	
			     cout<<"\n\n\t\t\t\t*THANKS FOR COMING*";
			     z=z-1;
			     count=count-1;
			     cout<<"THANKYOU FOR COMING\n\n";
			     cout<<"press any key to continue\n";
	  	         cin>>u_input;
	  	         system("cls");
	  	         goto FirstMenu;
		        }
		    
		        cout<<"\npress any key to return back to MAIN MENU\n";
		        cin>>u_input;
		        system("cls");
		        goto FirstMenu;
		       
		    }      
        
        	
	
	
	
	
		 else if(option==3)
		    {
	         count=r+s+z+b+c;
	         if(count<0)
	            {count=0;}
	         if(r<0)
	            { r=0;}
	         if(c<0)
                 {c=0;}
	         if(s<0)
	             {s=0;}
	         if(b<0)
 	             {b=0;}
	         if(z<0)
	             {z=0;}
			    
			       
			       
			        cout<<"***********************************************************************************************************************\n";
	             cout<<"**************************************************R  E  C  O  R  D*****************************************************\n\n\n";
	             cout<<"\t\t\t\t ___________________________________________ \n";
                 cout<<"\t\t\t\t|SCOOTERS: \t\t"; cout<<s;                    
                 cout<<"\n\t\t\t\t|___________________________________________|\n";
                 cout<<"\t\t\t\t|___________________________________________|\n";
                 cout<<"\t\t\t\t|RICKSHAWS: \t\t";    cout<<r;                             
	             cout<<"\n\t\t\t\t|___________________________________________|\n";
                 cout<<"\t\t\t\t|CARS:      \t\t";    cout<<c;                 
	             cout<<"\n\t\t\t\t|___________________________________________|";     
	             cout<<"\n\t\t\t\t|___________________________________________|\n";
                 cout<<"\t\t\t\t|BUSES:      \t\t";    cout<<b;                 
	             cout<<"\n\t\t\t\t|___________________________________________|";              
                 cout<<"\n\t\t\t\t|___________________________________________|\n";
                 cout<<"\t\t\t\t|SUZUKI:      \t\t";    cout<<z;                 
	             cout<<"\n\t\t\t\t|___________________________________________|";   
	             cout<<"\n\t\t\t\t|___________________________________________|";
                 cout<<"\n\t\t\t\t|TOTAL VEHICLES:\t";cout<<count;    
	             cout<<"\n\t\t\t\t|                                           |";             
                 cout<<"\n\t\t\t\t|___________________________________________|";  
                 cout<<"\n\t\t\t\t|___________________________________________|";
                 cout<<"\n\t\t\t\t|TOTAL AMOUNT:\t\t";cout<<amount;    
	             cout<<"\n\t\t\t\t|                                           |";             
                 cout<<"\n\t\t\t\t|___________________________________________|\n";  
                 cout<<"***********************************************************************************************************************\n";   
			       
			       
			       
			       
	             cout<<"press any key to continue\n";
	  	         cin>>u_input;
	  	         system("cls");
	  	         goto FirstMenu;
                }	

	
	







	     else if(option==4)
		    {
		    	s=0;
		    	r=0;
		    	c=0;
		    	b=0;
		    	z=0;
		    	count=0;
		    	amount=0;
			
              cout<<"***********************************************************************************************************************\n";
             cout<<"**************************************************R  E  C  O  R  D*****************************************************\n\n\n";
	         cout<<"\t\t\t\t ___________________________________________ \n";
             cout<<"\t\t\t\t|SCOOTERS: \t\t"; cout<<s;                    
             cout<<"\n\t\t\t\t|___________________________________________|\n";
             cout<<"\t\t\t\t|___________________________________________|\n";
             cout<<"\t\t\t\t|RICKSHAWS: \t\t";    cout<<r;                             
	         cout<<"\n\t\t\t\t|___________________________________________|\n";
             cout<<"\t\t\t\t|CARS:      \t\t";    cout<<c;                 
	         cout<<"\n\t\t\t\t|___________________________________________|";     
             cout<<"\n\t\t\t\t|___________________________________________|\n";
             cout<<"\t\t\t\t|BUSES:      \t\t";    cout<<b;                 
	         cout<<"\n\t\t\t\t|___________________________________________|";              
             cout<<"\n\t\t\t\t|___________________________________________|\n";
             cout<<"\t\t\t\t|SUZUKI:      \t\t";    cout<<z;                 
             cout<<"\n\t\t\t\t|___________________________________________|";   
	         cout<<"\n\t\t\t\t|___________________________________________|";
             cout<<"\n\t\t\t\t|TOTAL VEHICLES:\t";cout<<count;    
	         cout<<"\n\t\t\t\t|                                           |";             
             cout<<"\n\t\t\t\t|___________________________________________|";  
             cout<<"\n\t\t\t\t|___________________________________________|";
             cout<<"\n\t\t\t\t|TOTAL AMOUNT:\t\t";cout<<amount;    
	         cout<<"\n\t\t\t\t|                                           |";             
             cout<<"\n\t\t\t\t|___________________________________________|\n";
             cout<<"***********************************************************************************************************************\n";
             
             
		     cout<<"press any key to continue\n";
	  	     cin>>u_input;
	  	     system("cls");
	  	     goto FirstMenu;
		   }
	     else
	     {
	     	cout<<"YOU PRESSED INVALID BUTTON, TRY AGAIN";
	     	 goto FirstMenu; 
		 }
	



        getch();
		return 0;
    }
}

