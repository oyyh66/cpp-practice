/*#include<iostream>;
using namespace std;
int main()
{
	int age; 
	cout<<"你多大？";
	cin>>age;

if(age<18)
cout<<"抱歉，你还是个孩子。"<<endl;
 cout<<"你不能单独入内。"<<endl;
  
	return 0;
}*/
/*{
	int x{};
	cout<<"输入一个整数："; 
	cin>>x;
	
	if(x>20)
	cout<<x;
else if(x<=20&&x>=0)
cout<<x<<"\tx在0到20之间\n";

else if(x<0)
cout<<x<<"\tx是负数\n";
	
	
	
	
	return 0; 
}*/
/*/
	int x{},y{};
	cout<<"请输入两个整数：";
	cin>>x>>y;
	
	if(int t=x;x>y)
	{
		t=x;x=y;y=t;
		cout<<"需要交换，交换后x="<<x<<",y="<<y<<endl;
	}
	else
	cout<<"不需要交换,x="<<x<<",y="<<y<<endl;
	
	
	return 0;
}*/
/*{
char score;
cout<<"请输入你的成绩等级（A/B/C/D）";
cin>>score;

switch(score)
{
case'A':
case'a':
	cout<<"太棒啦，优秀！"<<endl;break;
case'B':
case'b':
	cout<<"真不错"<<endl;break;
case'C':
case'c':
	cout<<"及格万岁"<<endl;break;
case'D':
case'd':
	cout<<"一定要努力哦"<<endl;break;
default:
	cout<<"成绩有误"<<endl;
		 
	
	
	
}	
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int year{},month{},day{},d{};
	cout<<"请输入年月日（形式为1990 3 10）";
	cin>>year>>month>>day;
	for(int i=1980;i<year;i++)
	 if((i%4==0&&i%100!=0)||(i%400==0))//闰年 
	d+=366;
	else d+=365;
	
	for(int i=1;i<month;i++)
{
		switch(i)
    { 
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		d+=31;break; 
	case 4:case 6:case 9:case 11:
		d+=30;break;
	case 2:
		if((i%4==0&&i%100!=0)||(i%400==0))
		d+=29;
		else d+=28;
	}
}
d+=day;	
int ans=((d-1)%7+2)%7;
if(ans==0)
cout<<"星期日"<<endl;
else cout<<"星期"<<ans<<endl; 

	return 0;
}





















