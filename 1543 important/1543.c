#include<stdio.h>
#include<string.h>

int counter[105],num=0;									//num�浱ǰ�Ѿ����ֵĵ��ʸ���,counter��������
char word[105][20];										//word��ʵʱ�����Ѿ������ĵ����б�
char temp[20];											//temp����Ŀǰ�����ĵ���

int main()
{
	 memset(counter,0,sizeof(counter));
	 memset(word,0,sizeof(word));						//��ʼ������
	 //���Խ���һ�������ڵ����������ռ��С��ֵȫ����ʼ��Ϊ�ڶ�������
	 //�ȼ���for(int i=0;i<n;i++) counter[i]=0;       	//nΪcounte����ĳ���
	 while(scanf("%s",temp)!=EOF){						//�����ַ�������ķ���
	 	 int address=-1;								//adress�浱ǰ���ʼ����ŵ�word�е��ĸ�λ��
	 	 for(int i=0;i<num;i++){						//numΪ��ǰ����Ĳ�ͬ�ĵ��ʸ���,�������������ж�
	 	 	 int flag=1,pointer=0;
	 	 	 //��������λ���ϵ���ĸ����Ȳ��Ǿɵ���,�������һ������ȵ�,��ʹflag=0,���Ϊ�µ���
	 	 	 while(pointer==0||(temp[pointer-1]!='\000'||word[i][pointer-1]!='\000')){
	 	 	 	 if(temp[pointer]!=word[i][pointer]){	//�����,���Ϊ�µ���
	 	 	 	 	 flag=0;
	 	 	 	 	 break;
				 }else pointer++;						//���,�����ж���һ����ĸ
			 }
			 if(flag==1){								//����Ǿɵ���
			 	  address=i;							//��ȡaddress��ֵ
			 	  counter[address]++;					//����counter�ڶ�Ӧλ�õ�ֵ
			 }
		 }
		 if(address==-1){								//���addressֵû�и��¹�,�����µ���
		 	 strcpy(word[num],temp);					//��temp����word��һ��λ����
		 	 counter[num++]=1;							//��Ӧcounterλ�õ���1
		 }
	 }
	 
	 int maxd=0,flag=-1;								//maxd����������Ĵ���,flag��������ߵ��±�
	 for(int i=0;i<num;i++){							//�������ֵĵ���,Ѱ�ҳ��ִ��������
	 	 if(counter[i]>maxd){							//������������
	 	 	 flag=i;
	 	 	 maxd=counter[i];							//����maxd��flag
		 }
	 }
	 
	 printf("%s\n",word[flag]);							//������word���±�Ϊflag���ĵ���
	 return 0;											//����return 0;
}