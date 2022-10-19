#include<stdio.h>
#include<string.h>

int counter[105],num=0;									//num存当前已经出现的单词个数,counter用来计数
char word[105][20];										//word来实时更新已经读到的单词列表
char temp[20];											//temp来存目前读到的单词

int main()
{
	 memset(counter,0,sizeof(counter));
	 memset(word,0,sizeof(word));						//初始化函数
	 //可以将第一个参数内第三个参数空间大小的值全部初始化为第二个参数
	 //等价于for(int i=0;i<n;i++) counter[i]=0;       	//n为counte数组的长度
	 while(scanf("%s",temp)!=EOF){						//采用字符串读入的方法
	 	 int address=-1;								//adress存当前单词即将放到word中的哪个位置
	 	 for(int i=0;i<num;i++){						//num为以前读入的不同的单词个数,遍历它们依次判断
	 	 	 int flag=1,pointer=0;
	 	 	 //必须所有位置上的字母都相等才是旧单词,否则出现一个不相等的,便使flag=0,标记为新单词
	 	 	 while(pointer==0||(temp[pointer-1]!='\000'||word[i][pointer-1]!='\000')){
	 	 	 	 if(temp[pointer]!=word[i][pointer]){	//不相等,标记为新单词
	 	 	 	 	 flag=0;
	 	 	 	 	 break;
				 }else pointer++;						//相等,继续判断下一个字母
			 }
			 if(flag==1){								//如果是旧单词
			 	  address=i;							//获取address的值
			 	  counter[address]++;					//更新counter内对应位置的值
			 }
		 }
		 if(address==-1){								//如果address值没有更新过,即是新单词
		 	 strcpy(word[num],temp);					//将temp赋到word下一个位置上
		 	 counter[num++]=1;							//对应counter位置等于1
		 }
	 }
	 
	 int maxd=0,flag=-1;								//maxd来存出现最多的次数,flag来存最多者的下标
	 for(int i=0;i<num;i++){							//遍历出现的单词,寻找出现次数最多者
	 	 if(counter[i]>maxd){							//如果遇到更多的
	 	 	 flag=i;
	 	 	 maxd=counter[i];							//更新maxd与flag
		 }
	 }
	 
	 printf("%s\n",word[flag]);							//最后输出word中下标为flag处的单词
	 return 0;											//必须return 0;
}