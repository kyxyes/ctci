//
//  main.cpp
//  proj1
//
//  Created by  Yuxin Kang on 8/24/14.
//  Copyright (c) 2014  Yuxin Kang. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std; //for cin and cout

    //==================cin & cout ===================
   /* 
    int main(int argc, const char * argv[])
    {
    int x;
    // insert code here...
    std::cout << "Hello, World!!\n";
    std::cout << "Please enter x\n";
    std::cin >> x;
    if (cin.fail()){
        cout << "Bad input\n";
        return 0;
    }
    std::cout << "you have entered the number of "<<x<<"\n";
    return 0;
    }
    */
    //====================================================
    
    ///==============memset================================
   
//   int main(int argc, const char * argv[])
//   {
//   char str[] = "almost every programmer should know memset";
//    memset (str,'-',6);
//    puts (str);
//    return 0;
//    }
    //=====================================================
    
    //==============ASCII_cout=============================
    //   int main(int argc, const char * argv[])
    //   {
//    string s="09aZ i am kang ";
//    for(int i=0;i< 5; ++i){
//        int v = (int)s[i];
//        cout << v <<"\n" ;
//    }
//    
//    for (int i=1 ;i< 128;i++)
//    {
//        cout<<i<<"=="<<(char)i<<"\n";
//    }
//    }
    //===================================================
    
    //===================================================
    //1. 1 Implement an algorithm to determine if a string has all unique characters What if you can not use additional data structures?
//    int main(int argc, const char * argv[])
//    {
//    string s1= "czc";
//    int check = 0;
//    int len = s1.length();
//    for(int i=0;i<len;i++)
//    {
//        int v= (int)(s1[i]-'a');
//        int s=check & (1<<v);
//        if(s)
//        {
//           cout << " \n bad  [1<<v] ="<<(1<<v)<<"(check & (1<<v))="<<(check & (1<<v));
//            cout <<"\n duplicate char ,no."<<i <<"and check now is "<<check;
//            return false;
//        }
//        else
//        {
//            cout << "\n check="<<check;
//            cout << "  [1<<v] ="<<(1<<v)
//                 << " (check & (1<<v))="<<(check & (1<<v));
//            check |=(1<<v);
//            cout << "then check="<<check;
//        }
//        
//    }
//    return true;
//    }
    //=====================================================

//===========================================================
//1 2 Write code to reverse a C-Style String (C-String means that “abcd” is represented as five characters, including the null character )
//
//void swap3(char&a,char&b)
//{
//    a=a^b;
//    b=a^b;
//    a=a^b;
//}
//
//void reverse(char* str)
//{
//    char* end= str;
//    //char temp;
//    while(*end)
//    {
//        end++;
//    }
//    end--;
//    while(str<end)
//    {
////        temp=*str;
////        *str++ =*end;//把＊end 的值给＊str然后指针后移一位
////        *end-- =temp;
//        //swap(*str++,*end--);//调用了内部函数＝＝
//        swap3(*str++,*end--);
//        
//    }
//}
//
//int main(int argc, const char * argv[])
//{
//    char s[]="123456";
//    reverse(s);
//    cout<<s;
//}
//===============================================================================


//=====1 3===Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer NOTE: One or two additional variables are fine An extra copy of the array is not
//P指向开始重复的字母，依次检查后面不重复的字母，将后面不重复的cover前面重复的字母
// 不重复｜重复的－－－－加\0截断
//void removeDuplicate(char s[])
//{
//    cout<<"add  :"<<(void*)&s[0]<<"\n";//强制输出第一个值的地址
//    cout<<"add= :"<<&s<<"\n";
//    cout<<"add_ :"<<(void*)&s<<"\n"; //地址的地址 ：指针的地址
//    int len = strlen(s);
//    if(len<2) return;
//    int check =0,p=0;
//    for(int i=0; i<len; ++i)
//    {
//        int v=(int)(s[i]-'a');
//        if((check&(1<<v))==0)
//        {
//            s[p++] = s[i];
//            check |= (1<<v);
//           // cout<<s<<"==== \n";
//        }
//       //cout<<s<<"\n";
//    }
//    s[p]='\0';
//
//}
//
//
//string removeDuplicate1(string s)  //check检查，不重复的加到str上
//{
//    int check =0;
//    int len = s.length();
//    if(len<2) return s;
//    string str = "";
//    for(int i=0; i<len; ++i)
//    {
//        int v = (int)(s[i]-'a');
//        if((check&(1<<v))==0)
//        {
//            str+= s[i];
//            check |=(1<<v);
//        }
//    }
//    return str;
//    
//}
//
//string removeDuplicate2(string s)   //循环两个指针 i,j j指在后面寻找不一样的，加到str上
//{
//    int len= s.length();
//    if(len<2) return s;
//    string str="";
//    for(int i=0;i<len;++i)
//    {
//        if(s[i]!='\0')
//        {
//        str+=s[i];
//        for(int j=i+1;j<len;++j)
//        {
//            if(s[i]==s[j])
//                s[j]='\0';
//        }
//        }
//    }
//    return str;
//}
//
//void removeDuplicate3( char s [])
//{
//    int len = strlen(s);
//    if (len<2) return;
//    bool c[256];
//    memset(c,0,sizeof(c));
//    int p =0;
//    for(int i=0; i<len; ++i)
//    {
//        if(!c[s[i]]) //s[i]之前不存在
//        {
//            s[p++]=s[i];
//            c[s[i]] = true;
//        }
//    }
//}
//
//int main()
//{
//    char s[]="ababababdfcZZ";
//    cout<<"add2 :"<<&s<<"\n";
//    cout<<"add2_:"<<&s<<"\n";
//    removeDuplicate(s);
//    cout<<"add3:"<<&s<<"\n";
//    cout<<"final--"<<s;
//    char s1[]="ababababdfcZZ";
//    string s2="ababababdfcZZ";
//    removeDuplicate1(s2);
//    cout<<"\n[go string]:\n(1)"<<removeDuplicate1(s1)
//        <<"\n"<<removeDuplicate1(s2)
//        <<"\n(2)"<<removeDuplicate2(s2);
//
//    
//   // cout<<"\n***abc\0dd"; //'\0后面截断'
//    
//}
//===========================================================================

//=======1 4 Write a method to decide if two strings are anagrams or not=========



//bool isAnagram(string s, string t)
//{
//    sort(&s[0],&s[0]+s.length());
//    sort(&t[0],&t[0]+t.length());
//    if(s==t) return true;
//    else return false;
//}
//
//bool isAnagram1(string s, string t)
//{
//    if(s==""||t=="") return false;
//    if(s.length() !=t.length()) return false;
//    int len = (int)s.length();
//    int c[256];
//    memset(c,0,sizeof(c));
//    for(int i=0;i<len;++i)
//    {
//        ++c[(int)s[i]];
//        --c[(int)t[i]];
//    }
//    for(int i=0; i<256; ++i)
//        if(c[i]!=0)
//            return false;
//    return true;
//}
//int main()
//{
//    char s[]="AZaaabbbc";
//    char t[]="AZabaabbc";
//    cout<<isAnagram1(s,t);
//    
//}
//
//
//
//
//


//1 5 Write a method to replace all spaces in a string with ‘%20’
//先计算空格总数 新的数组长度＝原来数组长＋2*空格数
//char* replace1(char *c)  //返回指向char的指针  char*
//{
//    int len= (int)strlen(c);
//    int cnt=0; // space num
//    for(int i=0;i<len;++i)
//    {
//        if(c[i]==' ')
//            ++cnt;
//    }
//    char * newString = new char[len+cnt*2];
//    int p=0;
//    for(int i=0;i<len;++i)
//    {
//        if(c[i]!=' ')
//        {
//            newString[p]=c[i];
//            p++;
//        }
//        else
//        {
//            newString[p]='%';
//            newString[p+1]='2';
//            newString[p+2]='0';
//            p+=3;
//        }
//        newString[p]='\0';
//    }
//    //cout<<newString;
//    return newString;
//}
//int main()
//{
//    const int len =10;
//    char c[len]=" ab c";
//    cout<<replace1(c);
//   
//}

//1 6 Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees Can you do this in place?


//void rotate(int matrix[][4],int n)
//{
//    for(int layer=0;layer<n/2;layer++)  //管第几层旋转
//    {
//        int first = layer; //每层起始点
//        int last = n - layer -1; //每层长度
//        //0,3  1,2
//        for(int j=first;j<last;j++)            //matrix[纵坐标(向下增大)][横坐标（右增大） ]
//        {
//            int offset=j-first;
//            int top=matrix[first][j];
//            //left->top
//            matrix[first][j]=matrix[last-offset][first];
//            //bottom->left
//            matrix[last-offset][first]=matrix[last][last-offset];
//            //right->bottem
//            matrix[last][last-offset]=matrix[j][last];
//            //top->right
//            matrix[j][last] = top;
//            
//        }
//        
//    }
//}
//
//void transpose(int a[][4], int n){
//    for(int i=0; i<n; ++i)                     //先对角线互换
//        for(int j=i+1; j<n; ++j)
//            swap(a[i][j], a[j][i]);
//    for(int i=0; i<n/2; ++i)                    //再上下换（1，4行，2，3行）
//        for(int j=0; j<n; ++j)
//            swap(a[i][j], a[n-1-i][j]);
//}
////1 2 3 4
////5 6 7 8
////9 10 11 12
////13 14 15 16
////
////1 5 9 13
////2 6 10 14
////3 7 11 15
////4 8 12 16
////
////4 8 12 16
////3 7 11 15
////2 6 10 14
////1 5 9 13
//
//int main(){
//    int a[4][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//        {13, 14, 15, 16}
//    };
//    for(int i=0; i<4; ++i){
//        for(int j=0; j<4; ++j)
//            cout<<a[i][j]<<" ";
//        cout<<endl;
//    }
//    cout<<endl;
//    //rotate(a, 4);
//    transpose(a,4);
//    for(int i=0; i<4; ++i){
//        for(int j=0; j<4; ++j)
//            cout<<a[i][j]<<" ";
//        cout<<endl;
//    }
//    return 0;
//}
//
//
//1 7 Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0

//void zero(int **a, int m, int n)
//{
//    bool row[m],col[n];  //用两个一纬数组 代表行列
//    memset(row,false,sizeof(row));
//    memset(col,false,sizeof(col));
//    for(int i=0;i<m;i++)
//        for(int j=0;j<n;j++)
//            if(a[i][j]==0)
//            {
//                row[i]=true;
//                col[j]=true;
//            }
//    for(int i=0;i<m;i++)
//        for(int j=0; j<n;j++)
//            if(row[i]||col[j]) // ||代表整行或者正列
//                a[i][j]=0;
//}
//
//int main()
//{
//    int m,n;
//    cout<<"please enter the size of array:\n";
//    cin>>m>>n;
//    int **a;
//    a=new int*[m];
//    for(int i=0;i<m;++i)
//        a[i]= new int[n];     //依次存 n大小的数组
//    for(int i=0;i<m;i++)
//        for(int j=0;j<n;j++)
//            cin>>a[i][j];
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<a[i][j]<<" ";
//        }
//        cout<<endl<<"\n";//same like cout<<"\n";
//    }
//    
//
////    a——》
////      ｜｜指针1－－－》数组1
////      ｜｜指针2－－－》数组2
////      ｜｜指针3－－－》数组3
//    
//    zero(a,m,n);
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<a[i][j]<<" ";
//        }
//        cout<<endl;//same like cout<<"\n";
//    }
//
//}


//1 8 Assume you have a method isSubstring which checks if one word is a substring of another Given two strings,s1 and s2,write code to check if s2 is a rotation of s1 using only one call to isSubstring (i e , “waterbottle” is a rotation of “erbottlewat”)

//bool isSubstring(string s1, string s2)
//{
//    if(s1.find(s2)!=string::npos) return true;  //As a return value, it is usually used to indicate no matches.
//    return false;
//}
//
//bool isRotation(string s1, string s2)
//{
//    if(s1.length()!=s2.length())
//        return false;
//    return isSubstring(s1+s1,s2);
//}
// int main()
//{
//    string a = "apple";
//    string b = "pleap";
//    cout<<isRotation(a,b)<<endl;
//    
//}


//2 1 Write code to remove duplicates from an unsorted linked list FOLLOW UP How would you solve this problem if a temporary buffer is not allowed?

//
//typedef struct node
//{
//    int data;
//    node *next;
//}node;
//bool hash1[100];
//
//node* init(int a[],int n)
//{
//    node *head , *p;  //p:previous
//    for(int i=0;i<n;i++)
//    {
//        node *nd= new node();
//        nd->data=a[i];
//        if(i==0)
//        {
//            head=p=nd;  //p指向第一个节点  相当于创建了节点nd，装入p节点中
//            continue;
//        }
//        p->next=nd;
//        p=nd;
//    }
//    return head;
//}
//
//void removeduplicate(node *head)
//{
//    if(head==NULL) return ;
//    node *p=head, *q=head->next;
//    hash1[head->data]=true;  //因为数组坐标是唯一的 将head的值去占位，表示已经存在
//    while(q)
//    {
//     if(hash1[q->data])  //表示下一个节点（p）在hash数组里面寻找
//     {
//         //存在
//         node *t=q; //待删除节点
//         p->next=q->next;
//         q=p->next;
//         delete t;
//     }
//    else
//    {
//        //not exist ,move
//        hash1[q->data]=true;
//        p=q;
//        q=q->next;
//        
//    }
//    }
//}
//
//
//void removeduplicate2(node *head)
//{
//    if(head==NULL) return;
//    node *p,*q,*c=head; //定义三个指针，c指向当前要检测的节点，p和q两个负责分别往后去检测有没有和c相同的节点，然后进行删除
//    while(c)
//    {
//        p=c;q=c->next;
//        int curdata = c->data;
//        while(q)
//        {
//            if(curdata==q->data)
//            {
//                node *t =q; //准备删除q
//                p->next=q->next;
//                q=p->next;
//            }
//            else
//            {
//                p=q;
//                q=q->next;
//            }
//        }
//        c=c->next;
//    }
//    
//}
//
//void print(node* head)
//{
//    while(head)
//    {
//        cout<<head->data;
//        head=head->next;
//    }
//}
//
//int main()
//{
//    int n=6;
//    int a[]={3,2,2,1,4,1};  //里面的值去对应hash1数组的编号
//    memset(hash1,false,sizeof(hash1));
//    node *head=init(a, n);
//    removeduplicate(head);
//    print(head);
//    return 0;
//}
//

//typedef struct node
//{
//    node* next;
//    int data;
//}node;
//
//node* init(int a[], int n)
//{
//    node* head,*p;
//    for(int i=0;i<n;i++)
//    {
//        node* nd=new node(); //create node for list
//        nd->data=a[i];
//        if(i==0)
//        {
//            head=p=nd;
//            continue;
//        }
//        p->next=nd;
//        p=nd;
//    }
//    return head;
//}
//
//node* nthTolast(node* head,int n)
//{
//    if(head==NULL||n<1)
//        return NULL;
//    node* p1=head;
//    node* p2=head;
//    for(int i=0;i<n-1;i++)
//    {
//        if(p2==NULL)
//            return NULL;//总长度不够
//        p2=p2->next;
//    }
//    
//    while(p2->next!=NULL)
//    {
//        p1=p1->next;
//        p2=p2->next;
//    }
//    return p1;
//}
//int main()
//{
//    int n=10;
//    int a[]={9,2,3,5,6,7,8,9,1,0};
//    node* head = init(a, n);
//    node *p=nthTolast(head, 5);
//    if(p) cout<<p->data<<endl;
//}




//2 3
//Implement an algorithm to delete a node in the middle of a single linked list, given only access to that node
//in the middle of 在。。。内部

//
//typedef struct node
//{
//    node* next;
//    int data;
//}node;
//
//node* init(int a[],int n)
//{
//    node* head ,*p ;
//    for(int i=0;i<n;i++)
//    {
//        node* nd=new node();//create node in the list
//        nd->data=a[i];
//        if(i==0)
//        {
//            head=p=nd;
//            continue;
//        }
//        p->next=nd;
//        p=nd;
//    }
//    return head;
//}
//
//bool remove(node* p)
//{
//    if(p==NULL||p->next==NULL) return false;
//    //删除节点
//    node* t = p->next;
//    p->next=t->next;
//    delete t;
//    
//    return true;
//}
//
//void print (node* head)
//{
//    while(head)
//    {
//        cout<<head->data;
//        head=head->next;
//    }
//}
//int main()
//{
//    int a[]={9,2,3,5,6,7,8,9,1,0};
//    //node* head=init(a,10);//第二个参数必须是变量；error
//    int n=10;
//    node*p,* head;
//    head=p=init(a,n); //初始化数组到list中
//    cout<<"please enter the number of nd in the list you want to delete";
//    int m;   //要删除第m个
//    cin>>m;
//    for (int i=1;i<m-1;i++)
//        p=p->next;  //p指针向后移动
//    if(remove(p)&&m!=1)
//        print(head);
//    else
//        cout<<"failure";
//    
//}
//


//2 4
//You have two numbers represented by a linked list, where each node contains a sin- gle digit The digits are stored in reverse order, such that the 1’s digit is at the head of the list Write a function that adds the two numbers and returns the sum as a linked list

//typedef struct node
//{
//    node* next;
//    int data;
//}node;
//
//node* init(int a[] ,int n)
//{
//
//    node* head,*p;
//    for(int i=0;i<n;i++)
//    {
//        node* nd=new node();
//        nd->data=a[i];
//        if(i==0)
//        {
//            head=p=nd;
//            continue;
//        }
//        p->next=nd;
//        p=nd;
//    }
//    return  head;
//}
//
//node* addlink(node*p,node*q)
//{
//    if(p==NULL) return q;
//    if(q==NULL) return p;
//    node* head =NULL;//计算后结果保存的node的头指针 的存在意义是为了以后为了返回整个list
//    node* cur = NULL;//current point 的存在意义是为了链接新生成的节点
//    int c=0; //前面计算的进位
//    while(p&&q)
//    {
//        node* r=new node();
//        int t=(q->data)+(p->data);
//        r->data=(c+t)%10;
//        c=t/10;
//        p=p->next;
//        q=q->next;
//        if(cur)
//        {
//            cur->next=r;
//            cur=r;
//        }
//        else
//        {
//            head=cur=r;
//        }
//    }
//    
//    while(p)
//    {
//        int t= p->data+c;
//        node* r = new node();
//        r->data=t%10;
//        c=t/10;
//        cur->next=r;
//        cur=r;
//        p=p->next;
//    }
//    while(q)
//    {
//        int t= q->data+c;
//        node* r = new node();
//        r->data=t%10;
//        c=t/10;
//        cur->next=r;
//        cur=r;
//        q=q->next;
//    }
//    if(c>0)
//    {
//        node* r=new node();
//        r->data=c;
//        cur->next=r;
//    }
//    
//    return head;
//}
//
//void print(node* head)
//{
//    while(head)
//    {
//        cout<<head->data;
//        head=head->next;
//    }
//    cout<<"\n";
//}
//int main()
//{
//    int a[]={1,2,9,9,3};
//    int b[]={9,9,2};
//    int m=sizeof(a)/4;
//    int n=sizeof(b)/4;
//    node *p1,*p2,*res;
//    p1=init(a,m);
//    p2=init(b,n);
//    print(p1);
//    print(p2);
//    res=addlink(p1,p2);
//    print(res);
//}




//2 5
//Given a circular linked list, implement an algorithm which returns node at the begin- ning of the loop


//typedef struct node
//{
//    node* next;
//    int data;
//}node;
//
//node* init(int a[],int m,int n)
//{
//    node* head,*p; //head负责回传头指针 p负责链接每个节点
//    node* q;//负责指向环链接的开始
//    for(int i=0;i<n;i++)
//    {
//        node* nd=new node();
//        nd->data=a[i];
//        if(i==0)
//        {
//            head=p=nd;
//            continue;
//        }
//        if(i==m)
//        {
//            q=nd; //q负责指向环链接的开始
//        }
//        p->next=nd;
//        p=nd;
//    }
//    p->next=q;
//    return head;
//}
//
//
//void loopstart(node* head)
//{
//    node* fast,*slow; //
//    fast=slow=head;
//    do
//    {
//    if(fast->next->next==NULL||slow->next==NULL)
//    {
//        break;
//       // return 0;
//    }
//        fast=fast->next->next;
//        slow=slow->next;
//    }while(slow!=fast);
//    slow=head;//slow回到起点
//    while(slow!=fast)
//    {
//        fast=fast->next;
//        slow=slow->next;
//    }
//   // return fast;
//    cout<<"the starting point of the cycle is "<<fast->data<<endl;
//}
//
//int main()
//{
//    int a[]={3, 2, 1, 3, 5, 6, 2, 6, 3, 1 };
//    int m=7;
//    int n=10;
//    node* head=init(a,m,n);
//    loopstart(head);
//}


//3 1 Describe how you could use a single array to implement three stacks

//typedef struct node
//{
//    int val;//当前的值
//    int preIdx;//前面的值的编号  这样每个node之后是以数组存储
//}node;
//class stack
//{
//public:
//    stack(int totalSize=900) //第一次见
//    {
//        buf = new node[totalSize];
//        ptop[0]=ptop[1]=ptop[1]=-1;
//        this->totalSize=totalSize; //----->不理解
//        cur=0;//当前第几个数组
//    }
//    ~stack()
//    {
//        delete []buf;
//    }
//    
//    void push(int stackNum, int val) // 当前组,当前数字
//    {
//        buf[cur].val=val;
//        buf[cur].preIdx=ptop[stackNum];
//        ptop[stackNum]=cur;  //保存最高点的－位置编号
//        ++cur;
//    }
//    
//    void pop(int stackNum)
//    {
//        ptop[stackNum]=buf[ptop[stackNum]].preIdx; //将指向顶部的编号指向前一个编号
//    }
//    
//    int top(int stackNum)
//    {
//        return buf[ptop[stackNum]].val;
//    }
//private:   //stack的每个属性
//    node *buf;
//    int ptop[3]; //分三段 标记顶的值
//    int totalSize;
//    int cur;
//};
//
//
//int main()
//{
//    stack mystack;
//    for(int i=0;i<10;i++)
//        mystack.push(0,i);
//    for(int i=10;i<20;i++)
//        mystack.push(1,i);
//    for(int i=100;i<200;i++)
//        mystack.push(2, i);
//    
//    for(int i=0;i<3;i++)
//    {
//        //cout<<mystack.ptop[i]; //错误‘ptop is a private memeber of stack’
//        cout<<mystack.top(i)<<endl;
//    }
//    
//    for(int i=0;i<3;i++) //pop
//    {
//        mystack.pop(i);
//        cout<<mystack.top(i)<<endl;
//    }
//    mystack.push(0, 111);
//    mystack.push(1, 222);
//    mystack.push(2, 333);
//    
//    for(int i=0;i<3;i++)
//    {
//        //cout<<mystack.ptop[i]; //错误‘ptop is a private memeber of stack’
//        cout<<mystack.top(i)<<endl;
//    }
//
//}
//

//3.2 How would you design a stack which, in addition to push and pop, also has a function min which returns the minimum element? Push, pop and min should all operate in O(1) time
//思路：节点数组，每个节点保存 节点的值 和当前最小值（进入后的最小值）
//const int MAX_INT = ~(1<<31);//2147483647
//
//typedef struct node
//{
//    int val;
//    int min;  //push后整个arrary的当前最小值
//}node;
//
//class StackWithMin
//{
//public:
//    
//    StackWithMin(int size=1000)// size of this stack
//    {
//        //init
//        buf=new node[size];
//        cur=-1;
//        buf[-1].min=MAX_INT;
//    }
//    void push(int val)
//    {
//        buf[++cur].val=val;
//        if(val<buf[cur-1].min)
//            buf[cur].min=val;
//        else
//            buf[cur].min=buf[cur-1].min;
//    }
//    void pop()
//    {
//        --cur;
//    }
//    int top()
//    {
//        return buf[cur].val;
//    }
//    int min()
//    {
//        return buf[cur].min;
//    }
//    void printStack()
//    {
//        for(int i=0;i<3;i++)
//        cout<<"val:"<< buf[i].val <<" min" <<buf[i].min<<endl;
//    }
//    
//private:  //外部不好直接访问
//    
//    node* buf; //该stack也是有数组组成，但是数组里存的是node
//    int cur;//current point
//    
//};
//
//class stack
//{
//public:
//    stack(int size=1000) //stack的大小
//    {
//        buf=new int[size];
//        cur=-1;
//    }
//    ~stack()
//    {
//        delete []buf;
//    }
//    void push(int val)
//    {
//        buf[++cur]=val;
//    }
//    void pop()
//    {
//        --cur;//当前指针往下
//    }
//    int top()
//    {
//        return buf[cur];
//    }
//    bool empty()
//    {
//        return cur==-1;
//    }
//
//private:
//    int* buf; //这个stack 每个节点需要由int组成，是个int数组
//    int cur; //指向当前的指针
//};
//
//
//class StackWithMin1
//{
//public:
//    StackWithMin1()
//    {}
//    ~StackWithMin1()
//    {}
//    void push(int val)
//    {
//        s.push(val);
//        if(val<min())
//            minStack.push(val);
//    }
//    void pop()
//    {
//        s.pop();
//        if(s.top()==min())
//            minStack.pop();
//    }
//    int top()
//    {
//        return s.top();
//    }
//    int min()
//    {
//        if(minStack.empty()) return MAX_INT;  //这步骤很重要
//        return minStack.top();
//    }
//
//private:
//    stack s;
//    stack minStack; //存储最小值
//};
//int main()
//{
//    StackWithMin1 mystack;
//    mystack.push(3);
//    mystack.push(100);
//    mystack.push(34);
//    cout<<"min:"<<mystack.min()<<" top:"<<mystack.top()<<endl;
//   // mystack.printStack();
//    
//    
//}
//

//============little test=======================
//int main()
//{
//    int a[] =  {1,2,3};
//    for(int i=0;i<3;)
//        cout<<a[++i]<<endl;
//    int a[] =  {1,2,3};
//    for(int i=0;i<3;)
//        cout<<a[i++]<<endl;
//}
//===============================================


//33 Imagine a (literal) stack of plates If the stack gets too high, it might topple There- fore, in real life, we would likely start a new stack when the previous stack exceeds some threshold Implement a data structure SetOfStacks that mimics this SetOf- Stacks should be composed of several stacks, and should create a new stack once the previous one exceeds capacity SetOfStacks push() and SetOfStacks pop() should behave identically to a single stack (that is, pop() should return the same values as it would if there were just a single stack)

//const int STACK_SIZE = 100;
//const int STACK_NUM = 10;
//class stack
//{
//private:
//    int *buf;
//    int cur;
//    int capacity;
//    
//public:
//    stack(int capa=STACK_SIZE)
//    {
//        buf=new int[capa]; //将stack扩充 由装有int的数组组成
//        cur=-1;
//        capacity=capa;
//    }
//    ~stack()
//    {
//        delete []buf;
//    }
//    void push(int val)
//    {
//        buf[++cur]=cur;
//    }
//    void pop()
//    {
//        --cur;
//    }
//    int top()
//    {
//        return buf[cur];
//    }
//    bool empty()
//    {
//        return cur==-1;
//    }
//    bool full()
//    {
//        return cur==capacity-1;
//    }
//};
//
//
//class SetOfStack  //new data structure
//{
//private:
//    stack* st; //
//    int cur;
//    int capacity;
//public:
//    SetOfStack(int capa=STACK_NUM)
//    {
//        st= new stack[capa]; //注意这里是由capa个stack组成的数组 每个stack最大是STACK_SIZE个int
//    }
//    ~SetOfStack()
//    {
//        delete []st;
//    }
//    void push(int val)
//    {
//        if(st[cur].full()) ++cur; //一个stack满了，就到下一个stack
//        st[cur].push(val);
//    }
//    void pop()
//    {
//        if(st[cur].empty()) --cur;
//        st[cur].pop();
//    }
//    int top()
//    {
//        if(st[cur].empty()) --cur;
//        return  st[cur].top();
//    }
//    int potAt(int idx)
//    {
//        if(st[idx].empty()) --idx;
//        return st[idx].top();
//    }
//    
//    bool empty()
//    {
//        if(cur==0) return st[0].empty();
//        else return false;
//    }
//    bool full()
//    {
//        if(cur==capacity-1)return st[cur].full();
//        else return false;
//        
//    }
//};
//
//int main()
//{
//    SetOfStack sos;
//    for(int i=0;i<3*STACK_SIZE+1;i++)
//    {
//        sos.push(i);
//    }
//}

//
//3 4
//In the classic problem of the Towers of Hanoi, you have 3 rods and N disks of different sizes which can slide on to any tower The puzzle starts with disks sorted in ascending order of size from top to bottom (e g , each disk sits on top of an even larger one) You have the following constraints:
//(A) Only one disk can be moved at a time
//(B) A disk is slid off the top of one rod onto the next rod
//(C) A disk can only be placed on top of a larger disk
//Write a program to move the disks from the first rod to the last using Stacks


//先试2个，2个可以移动，
//再试试3个，先移动1个，然后剩下2个，2个之前已经证明可以移动了
//移动4个，先1个，3个已经证明可以了


//#include <stack>
//struct op{
//    int begin, end;
//    char start,buff,dest;
//    op(){}  //op(){}
//    op(int pbegin,int pend, int pstart,int pbuff,int pdest):begin(pbegin), end(pend), start(pstart), buff(pbuff),dest(pdest){} //for struct init ,存放在stack里面
//};
//void haoni(int n, char start, char buff, char dest)
//{
//    stack<op> st; //生成存放op的stack
//    op temp;
//    st.push(op(1,n,start,buff,dest));
//    while (!st.empty())
//    {
//        temp=st.top();//获取stack中当前的op,开始就是main中输入的（A,B,C),输入进temp，然后循环获取top输入进temp
//        st.pop();//指针向下移动,又从－1开始 ，前面的相当于不在了，只是输给temp
//        
//    if(temp.begin!=temp.end)
//    {
//        //初始化这个op再压入stack
//        st.push(op(temp.begin,temp.end-1,temp.buff,temp.start,temp.dest));//递归完成从B柱－>到c柱 (3步骤)
//        st.push(op(temp.end,temp.end,temp.start,temp.buff,temp.dest));//Move disk 3 from A to C(2步骤)
//        st.push(op(temp.begin,temp.end-1,temp.start,temp.dest,temp.buff));//递归完成从A柱->到B柱 (1步骤)
//    }else
//    {
//        cout<<"Move disk "<<temp.begin<<" from "<<temp.start<<" to "<<temp.dest<<endl;
//    }
//    }
//}
//int main()
//{
//    int n=3;
//    haoni(n,'A','B','C');
//    return 0;
//}
//

//3.5Implement a MyQueue class which implements a queue using two stacks




//#include <iostream>
//#include <stack>
//#include <queue>
//template<typename T>
//class MyStack
//{
//public:
//    void push(T val)
//    {
//        qin.push(val);
//    }
//    void pop()
//    {
//        if(!qin.empty())
//            move(qin, qout);
//        else
//            move(qout,qin);
//    }
//    T top()
//    {
//        if(qin.empty())
//        {
//            return qout.back();
//        }
//        else return qin.back();
//    }
//    
//    void move(queue<T> &src, queue<T> &dest) //思想是不管从谁到谁，我只管我这个函数开始到目标，和输入无关
//    {
//        while(!src.empty())
//        {
//            T val= src.front();
//            src.pop();
//            if(src.empty()) break;
//            dest.push(val);
//            
//        }
//    }
//    int size()
//    {
//        return qin.size()+qout.size();
//    }
//    
//private:
//    queue<T> qin, qout;
//};
//
//
//
//template <typename T>
//class MyQueue
//{
//public:
//    MyQueue()
//    {
//    }
//    ~MyQueue()
//    {
//    }
//    void push(T val)
//    {
//        sin.push(val);
//    }
//    void pop()
//    {
//        move(sin,sout);
//        sout.pop();
//        
//    }
//    T front()
//    {
//        move(sin,sout);
//        return sout.top();
//    }
//    T back() //**和上面相反
//    {
//        move(sout,sin);
//        return sin.top();
//    }
//    int size()
//    {
//        return sin.size()+sout.size();
//    }
//    bool empty()
//    {
//        return sin.empty()&&sout.empty();
//    }
//    void move(stack<T> &src,stack<T> &dest)
//    {
//        if(dest.empty())
//        {
//        while(!src.empty())
//        {
//            dest.push(src.top());
//            src.pop();
//        }
//        }
//    }
//  
//private:
//    stack<T> sin, sout;
//};
//
//int main()
//{
//    MyStack<int> st;
//    for(int i=0;i<10;i++)
//    {
//        st.push(i);
//    }
//    cout<<"stack top: "<<st.top()<<endl;
//    st.pop();
//    cout<<"stack top after pop "<<st.top()<<endl;
//    
//    MyQueue<int> q;
//    for(int i=0;i<10;i++)
//    {
//        q.push(i);
//    }
//    
//    cout<<"front: "<<q.front()<<" back: "<<q.back()<<endl;
//    q.pop();
//    q.push(10);
//    cout<<"after pop and push,front: "<<q.front()<<" back "<<q.back()<<endl;
//    cout<<"size: "<<q.size()<<" empty? "<<q.empty()<<endl;
//}

//3 6 Write a program to sort a stack in ascending order You should not make any assump- tions about how the stack is implemented The following are the only functions that should be used to write this program: push | pop | peek | isEmpty
//great
//#include <stack>
//stack<int> sSort(stack<int> st)
//{
//    stack<int> newSt;
//    while (!st.empty()) {
//    int max = st.top();
//        st.pop();
//        while (!newSt.empty()&&newSt.top()>max) {
//            st.push(newSt.top());
//            newSt.pop();
//        }
//        newSt.push(max);
//    }
//    return newSt;
//}
//
//int main()
//{
//    stack<int> st;
//    for(int i=0;i<10;i++)
//    {
//        st.push(rand()%10);
//    }
//    stack<int> s = sSort(st);
//    while(!s.empty())
//    {
//        cout<<s.top();
//        s.pop();
//    }
//}


//4 1 Implement a function to check if a tree is balanced For the purposes of this question, a balanced tree is defined to be a tree such that no two leaf nodes differ in distance from the root by more than one

const int maxn=100;
typedef struct Node
{
    int key;
    Node* lchild, *rchild, *parent;
}Node;
Node* head,*p,node [maxn];
int cnt=0;

void init()
{
    head=p=NULL;
   
}
void insert(Node* &snode, int x)
{
    if(snode==NULL)
    {
        node[cnt].parent=p; //用数组 新节点
        node[cnt].key=x;
        snode=&node[cnt++];
        return;
    }
    p=snode;
    if(x<p->key)
        insert(snode->lchild,x); //一直循环找左子结点直到左为空，每个左子节点又是一个单独读节点
                                //已经存在父节点指向左节点指向关系
    else
        insert(snode->rchild,x);
}
int d=0;//当前的高度
int num=0;//从root到叶子节点的路线数目
int dep[maxn];
void getDepth(Node* head)
{
    if(head==NULL) return;
    d++;
    getDepth(head->lchild);
    if(head->lchild==NULL&&head->rchild==NULL)
    dep[num++]=d;
    getDepth(head->rchild);//当前表示rchild!=NULL当不用管里面是左还是右边，就是检测这个节点
    d--;//?????
}

int getHeight(Node* head) //获得当前节点的最高度
{
    if(head == NULL) return 0;
    else return max(getHeight(head->lchild),getHeight(head->rchild));
}
bool isBalance(Node *head)
{
    if(head==NULL) return true;
    int dif=getHeight(head->lchild)-getHeight(head->rchild);
    if(abs(dif)>1)
        return false;
    else
        return isBalance(head->lchild)&&isBalance(head->rchild);
}

int main()
{
    init();
    int a[]={5, 3, 8, 1, 4, 7, 10, 2, 6, 9, 11, 12};
    for(int i=0; i<10; i++)
        insert(head,a[i]);
    getDepth(head);
    for(int i=0; i<num ;i++)
        cout<<dep[i]<<" ";
}








