#include <iostream>
using namespace std ;
int main(){
	while(1){
	int year,month,day,x ,sum=0;
	cout<<"�п�J�~(�褸)�B��B��"<<endl<<"�~(�褸):" ;
	cin>>year ;
	cout<<"��:" ;
	cin>>month ;
	cout<<"��:" ;
	cin>>day ;
	cout<<"�z��J���O: �褸"<<year<<"�~"<<month<<"��"<<day<<"��" <<endl ;
	
	if(year%4==0){
		x=1 ;
	}	
	else{
		x=0 ;
	}
	
	if(x==1){
		switch(month){
			case 1: sum+=0  ;break;
			case 2: sum+=31 ;break;
			case 3: sum+=60 ;break;
			case 4: sum+=91 ;break;
			case 5: sum+=121 ;break;
			case 6: sum+=152 ;break;
			case 7: sum+=182 ;break;
			case 8: sum+=213 ;break;
			case 9: sum+=244 ;break;
			case 10: sum+=274 ;break;
			case 11: sum+=305;break;
			case 12: sum+=335 ;break;
		}
		sum+=day ;
	}
	
	if(x==0){
		switch(month){
			case 1: sum+=0  ;break;
			case 2: sum+=31 ;break;
			case 3: sum+=59 ;break;
			case 4: sum+=90 ;break;
			case 5: sum+=120 ;break;
			case 6: sum+=151 ;break;
			case 7: sum+=181 ;break;
			case 8: sum+=212 ;break;
			case 9: sum+=243 ;break;
			case 10: sum+=273 ;break;
			case 11: sum+=304;break;
			case 12: sum+=334 ;break;
		}
		sum+=day ;	
	}
	cout<<"���褸"<<year<<"�~����"<<sum<<"��"<<endl ;	
	cout<<"------------------------------------"<<endl ;
	}	
}
 
