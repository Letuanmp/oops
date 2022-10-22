#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct KhachHang{
	string TenKhachHang,DiaChi,SoDT;
	int MaKhachHang,TongTienTT;
	
};

typedef struct KhachHang KH;
struct Node{
	KH data;
	Node *next;
	Node *pev;
};

typedef struct Node node;

struct List{
	node *head;
	node *tail;
};

typedef struct List ds;

void KhoiTao(ds &l){
	l.head=NULL;
	l.tail=NULL;
}

node* taonode(KH x){
	node *p;
	p=new node;
	if(p!=NULL){
		p->next=NULL;
		p->data=x;
		p->pev=NULL;
	}
	return p;
}

void ChenCuoi(ds &l,node *p){
	if(l.head==NULL){
		l.head=l.tail=p;
	}
	else {
		l.tail->next=p;
		p->pev=l.tail;
		l.tail=p;
	}
}

void Nhap(KH &x){
	cout<<"Nhap ma khach hang: ";
	cin>>x.MaKhachHang;
	cout<<"Nhap ten khach hang: ";
	fflush(stdin);
	getline(cin,x.TenKhachHang);
	cout<<"Nhap dia chi: ";
	getline(cin,x.DiaChi);
	cout<<"Nhap so dien thoai: ";
	getline(cin,x.SoDT);
	cout<<"Nhap tong tien thanh toan: ";
	cin>>x.TongTienTT;
}

void xuat(KH x){
	cout<<x.MaKhachHang<<x.TenKhachHang<<x.DiaChi<<x.SoDT<<x.TongTienTT;
}

void xuat(ds l){
	for(node *k=l.head;k!=NULL;k=k->next){
		xuat(k->data);
	}
}
int main(){
	
}
	
