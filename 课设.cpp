#include <stdio.h>
#include <iostream>
using namespace std;


typedef struct CTNODE{
	double cost;                         //��Ÿ��˾�������
	int person_num;	                    //��¼�ǵڼ��˵�ѡ��㣬ֵ���ڵ�ǰ������ڲ����-1,�ڼ�����ѡ����Ǽ�+1 
	int child_num;                     //��¼�ǵڼ�������ֵ����ĸ���Ĵ������ҵĵڼ����ӽ����
    char *travellist;	              //��¼�Ǳ�������Щ��㣬������ʱ�������
    double allcost ;                  //��¼�ܵķ��ã�������ʱ�������
	CTNODE* child;                //�ӽ��
};
 
 void inittree(CTNODE& rootnode, double cost[100][100],int n,int m) {   	//��Ҫ�ṩһ�����ڵ�����ã���cost����    nΪ������mΪ������ 
         
        rootnode.child =new CTNODE;
        if(!rootnode.child)
              cout<<"error!"<<endl;
    	rootnode.cost = 0; 
		rootnode.person_num = 0; 
		rootnode.child_num=0;     //��û���ӽڵ�ʱ������ 
	    rootnode.travellist=0;
		rootnode.allcost=0;
		int i,j;
		double a;
		for(i=0;i<n;i++) {
		   	      for(j=0;j<m;j++){
		   	      cin>>a; 
		          cost[i][j]=a;
		            }
		   
		   }
	}
		   
		   
	int main(){
	
     CTNODE rootnode;
     double cost[100][100];
     int m,n;
     cin>>n>>m;
     inittree(rootnode,cost,n,m);
     int i,j;
     for(i=0;i<n;i++)
       {
	       for(j=0;j<m;j++)
               cout<<cost[i][j]<<" ";
            cout<<endl;
		} 
	return 0;
}	     
