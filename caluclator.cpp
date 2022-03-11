#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"ENTER THE OPERATION:\n";
	cout<<"1.ARTHEMATICAL OPERATIONS\n";
	cout<<"2.POWERS AND EXPONENTIALS\n";
	cout<<"3.TRIGANOMENTRY VALUES\n";
	cout<<"4.DIFFERENTIATION AND INTEGRATIONS";
	cout<<"5.BASIC MATRIX OPERATIONS\n";
	cin>>choice;
	switch(choice)
	{
		case 1 : 
		int n;
	    cout<<"ENTER FIRST NUMBER:\n";
	    cin>>n;
	    int m;
	    cout<<"ENTER SECOND  NUMBER:\n";
	    cin>>m;
	    int op;
	    cout<<"ENTER THE ARTEMATICAL OPERATION:\n";
	    cout<<"1.ADDITON\n 2.SUBTRACTION\n 3.MULTILICATION\n 4.DIVISION\n";
	    cin>>op;
	    switch(op)
	    {
	    	case 1 : cout<<"THE ADDITON IS:"<<n+m;
	    	break;
	    	case 2 : cout<<"THE SUBTRACTION IS:"<<n-m;
	    	break;
	    	case 3 : cout<<"THE MULTILICATION IS:"<<n*m;
	    	break;
	    	case 4 : cout<<"THE DIVISION IS:"<<n/m;
	    	break;
	    	default : cout<<"ENTER THE CORRECT OPERATION/n THANKYOU";
	    	
	    	
		}
			break ;
		
		case 2 :
			int a ;
			cout<<"ENTER A NUMBER TO FIND THE POWER OF THE NUMBER:\n";
			cin>>a;
			int power;
			cout<<" 1.SQUARE OF THE GIVEN NUMBER\n 2.CUBE OF THE GIVEN NUMBER\n 3. POWER OF N VALUE OF NTH POWER\n";
			cin>>power;
			switch(power)
			{
				case 1 :
					cout<<"THE SQUARE OF GIVEN NUMBER IS :"<<a*a;
					break;
				case 2 :
					cout<<"THE CUBE OF GIVEN NUMBER IS :"<<a*a*a;
					break;
				case 3 :
					cout<<"THE POWER FOR N TH VALUE CURRETLY NOT AVALIABLE";
					break;
				default :
					cout<<"PLEASE ENTER AN VALID OPTION:";
			}
			break ;
		
		case 3 :
			int trigano ;
		    cout<<"ENTER THE OPERATION: \n 1.TANX\n 2.SINX\n 3.COSX\n 4.COSECX\n 5. SECX\n 6.cotx"<<endl;
		    cout<<"her x = theata "<<endl;
		    cin>>trigano;
		    switch(trigano)
		        {
		        	case 1 :
		        		int tanangle ;
		        		cout<<"SELECT THE ANGLE:\n 1.30\n 2.45 \n 3.60\n 4.75\n 5.90"<<endl;
		        		cin>>tanangle;
		        		switch(tanangle)
		        		{
		        			case 1 :
		        				cout<<"the tan30 value is sqrt3/2"<<endl;
		        			break;
		        			case 2 :
		        				cout<<"the tan45 value is 1"<<endl;
		        			break;
		        			case 3 :
		        				cout<<"the tan60 value is sqrt3"<<endl;
		        			break;
		        			case 4 :
		        				cout<<"the tan90 value is undefined "<<endl;
		        			break;
		        			default :
		        				cout<<"enter valid options";
		        			
						}
					  break;
				      case 2 :
				        
						int sinangle ;
		        		cout<<"SELECT THE ANGLE: 1.30\n 2.45 \n 3.60\n 4.75\n 5.90"<<endl;
		        		cin>>sinangle;
		        		switch(sinangle)
		        		{
		        			case 1 :
		        				cout<<"the sin30 value is 1/2"<<endl;
		        			break;
		        			case 2 :
		        				cout<<"the sin45 value is 1/sqrt2"<<endl;
		        			break;
		        			case 3 :
		        				cout<<"the sin60 value is sqrt3/2"<<endl;
		        			break;
		        			case 4 :
		        				cout<<"the sin90 value is 1(one) "<<endl;
		        			break;
		        			default :
		        				cout<<"enter valid options";
		        	   }
		        	   break;
		        	   case 3 :
		        	   int cosangle ;
		        		cout<<"SELECT THE ANGLE: 1.30\n 2.45 \n 3.60\n 4.75\n 5.90"<<endl;
		        		cin>>cosangle;
		        		switch(cosangle)
		        		{
		        			case 1 :
		        				cout<<"the cos30 value is 1"<<endl;
		        			break;
		        			case 2 :
		        				cout<<"the cos45 value is sqrt3/2"<<endl;
		        			break;
		        			case 3 :
		        				cout<<"the cos60 value is 1/sqrt2"<<endl;
		        			break;
		        			case 4 :
		        				cout<<"the cos90 value is 0(zero) "<<endl;
		        			break;
		        			default :
		        				cout<<"enter valid options";
		        	   }
		        	   break;
		        	   case 4 :
		        	   int cosecangle ;
		        		cout<<"SELECT THE ANGLE: 1.30\n 2.45 \n 3.60\n 4.75\n 5.90"<<endl;
		        		cin>>cosecangle;
		        		switch(cosecangle)
		        		{
		        			case 1 :
		        				cout<<"the cosec30 value is 2"<<endl;
		        			break;
		        			case 2 :
		        				cout<<"the cosec45 value is sqrt2 "<<endl;
		        			break;
		        			case 3 :
		        				cout<<"the cosec60 value is 2/sqrt3"<<endl;
		        			break;
		        			case 4 :
		        				cout<<"the cosec90 value is 1 "<<endl;
		        			break;
		        			default :
		        				cout<<"enter valid options";
		        	    }
		        	    break;
		        	    case 5 :
		        	    int secangle ;
		        		cout<<"SELECT THE ANGLE: 1.30\n 2.45 \n 3.60\n 4.75\n 5.90"<<endl;
		        		cin>>secangle;
		        		switch(secangle)
		        		{
		        			case 1 :
		        				cout<<"the sec30 value is 2/sqrt3"<<endl;
		        			break;
		        			case 2 :
		        				cout<<"the sec45 value is sqrt2 "<<endl;
		        			break;
		        			case 3 :
		        				cout<<"the sec60 value is 2"<<endl;
		        			break;
		        			case 4 :
		        				cout<<"the sec90 value is not defined "<<endl;
		        			break;
		        			default :
		        				cout<<"enter valid options";
		        	    }
		        	    break;
		        	    case 6 :
		        	   int cotangle ;
		        		cout<<"SELECT THE ANGLE: 1.30\n 2.45 \n 3.60\n 4.75\n 5.90"<<endl;
		        		cin>>cotangle;
		        		switch(cotangle)
		        		{
		        			case 1 :
		        				cout<<"the cot30 value is sqrt2"<<endl;
		        			break;
		        			case 2 :
		        				cout<<"the cot45 value is 1 "<<endl;
		        			break;
		        			case 3 :
		        				cout<<"the cot60 value is 1/sqrt3"<<endl;
		        			break;
		        			case 4 :
		        				cout<<"the cot90 value is 0 "<<endl;
		        			break;
		        			default :
		        				cout<<"enter valid options";
		        	    }
		        	    break;
		        	    default :
		        	    	cout<<"enter valid option";
		        	    break;
		        	    
		    }
		        	   
			break;
			
		case 4 :
			int deffer ;
			cout<<"ENTER THE DIIFERNTATION OPPERTIATE "
			
			
			
			
			
			
			
			break;
		case 5 :
			int s;
		      cout<<"ENTER THE SQAURE MATRIX S VALUE FOR MATRIX OPERATION :\n";
	          cin>>s;
	          int b[s][s];
	          cout<<"ENTER THE VALUES OF MATRIX : \n";
			  for(int i=0;i<s;i++)
				{
				  for(int j=0;j<s;j++)
				{
					cin>>b[i][j];
				}
				}
				int matrix;
				cout<<"ENTER THE MATRIX OPERATIONS :\n";
				cout<<"1.THE FORMED MATRIX  \n 2.THE TRANSPOSE OF MATRIX \n 3.THE ADIITION OF FORMED MATRIX AND TRANSPOSE OF MATRIX \n 4.THE SUBTRACTION OF FORMED MATRIX AND TRANSPOSE OF MATRIX:\n";
				cin>>matrix;
				switch(matrix)
				{
					case 1 :
						cout<<"THE FORMED MATRIX IS : \n";
					for(int i=0;i<s;i++)
						{
							for(int j=0;j<s;j++)
								{
									cout<<b[i][j]<<" ";
								}
								cout<<endl;
						}
					break;
	
					case 2 : 
					     cout<<"THE TRANSPOSE OF MATRIX IS :\n";
					for(int i=0;i<s;i++)
						{
							for(int j=0;j<s;j++)
						{			
							cout<<b[j][i]<<" ";
						}
						cout<<endl;
						}
					break;
					case 3 : 
					     cout<<"THE ADIITION OF FORMED MATRIX AND TRANSPOSE OF MATRIX :\n";
					for(int i=0;i<s;i++)
						{
							for(int j=0;j<s;j++)
						{			
							cout<<b[i][j]+b[j][i]<<" ";
						}
						cout<<endl;
						}
					break;
					case 4 : 
					     cout<<"THE SUBTRACTION OF FORMED MATRIX AND TRANSPOSE OF MATRIX :\n";
					for(int i=0;i<s;i++)
						{
							for(int j=0;j<s;j++)
						{			
							cout<<b[i][j]-b[j][i]<<" ";
						}
						cout<<endl;
						}
					break;
					default : cout<<"ENTER THE CORRECT OPERATION/n THANKYOU";
				}
			break;
  }

}

