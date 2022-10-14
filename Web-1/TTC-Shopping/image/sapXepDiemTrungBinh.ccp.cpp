#include <iostream>
#include <iomanip>
using namespace std;
struct SinhVien
{
    string name;
    float Diem[10];
    float DTB;
};
struct SinhVien sv[100];
int main()
{
    int n,m,i,j;
    cout<<"Nhap so SV:"; cin>>n;
    cout<<"Nhap so Mon hoc: "; cin>>m;
    for(i=0; i<n; i++)
    {
        cout<<"Nhap ho ten sv thu "<<i+1<<":";
        cin.ignore();
        getline(cin,sv[i].name);
        for(j=0; j<m; j++)
        {
            cout<<"Nhap diem mon thu "<<j+1<<":";
            cin>>sv[i].Diem[j];
        }
    }
    float tong;
    for(i=0; i<n; i++)
    {
        tong=0;
        for(j=0; j<m; j++)
            tong=tong+sv[i].Diem[j];
        sv[i].DTB=tong/m;
    }
    cout<<"Danh sach sv la:\n";
    cout<<setw(3)<<"STT"<<setw(15)<<"Ho va Ten";
        for(j=0; j<m; j++)
            cout<<setw(5)<<fixed<<setprecision(1)<<"Mon"<<j+1;
        cout<<setw(7)<<setprecision(1)<<"DiemTB"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<setw(3)<<i+1<<setw(15)<<sv[i].name;
        for(j=0; j<m; j++)
            cout<<setw(6)<<fixed<<setprecision(1)<<sv[i].Diem[j];
        cout<<setw(7)<<setprecision(1)<<sv[i].DTB<<endl;
    }
    
    
    for(int i = 0; i < n; i++) {
    	for(int j= 0; j < n; j++) {
    		if(sv[i].DTB > sv[j].DTB) {
    			SinhVien tg = sv[i];    			
    			sv[i] = sv[j];
    			sv[j] = tg;
			}
	}
}


cout<<"Diem Trung Binh Sap Xep Tu Lon Den Be La:\n";
	for(i=0; i<n; i++)
    {
        cout<<setw(3)<<i+1<<setw(15)<<sv[i].name;
        for(j=0; j<m; j++)
            cout<<setw(6)<<fixed<<setprecision(1)<<sv[i].Diem[j];
        cout<<setw(7)<<setprecision(1)<<sv[i].DTB<<endl;
    }
   

    return 0;
}
