



#include <iostream>
using namespace std;

class Point
{
    int X;
    int Y;
public:
    
    Point()
    {
        X=Y=0;
    }
    
    void SetPoint(int iX,int iY)
    {
        X=iX;
        Y=iY;
    }
    
    void Show(){
        cout<<"----------------------------\n\n";
        cout<<X<<"\t"<<Y<<"\n\n";
        cout<<"----------------------------\n\n";
    }
};

class Figura
{
    Point*obj;
    int count;
    int color;
public:
    Figura()
    {
        count=color=0;
        obj=NULL;
    }
    void CreateFigura(int cr,int ct){
        // если углов меньше трех - это не фигура
        if(ct<3) exit(0);
        //инициализация цвета и количества углов
        count=ct;
        color=cr;
        // выдделение памяти под массив точек
        obj=new Point[count];
        if(!obj) exit(0);
        
        //установка координат точек
        int tempX,tempY;
        for(int i=0;i<count;i++){
            cout<<"Set X\n";
            cin>>tempX;
            cout<<"Set Y\n";
            cin>>tempY;
            obj[i].SetPoint(tempX,tempY);
        }
    }
    
    //показ фигуры
    void ShowFigura(){
        cout<<"----------------------------\n\n";
        cout<<"Color"<<color<<"\n\nPoints - "<<count<<"\n\n";
        for(int i=0;i<count;i++){
            obj[i].Show();
        } 
    }
    //если фигура была очистить память
    ~Figura()
    {
        if(obj!=NULL) delete[]obj;
    }
};
class View
{
    Figura* z;
public:
    View()
    {
        
        for (int i=0;i<2;++i)
        {
        z[i].CreateFigura(arc4random()%100,arc4random()%300);
        }
        
    }
    void ShowAgr(Figura* temp)
    {
            temp->CreateFigura(arc4random()%100,arc4random()%300);
    }
    void ShowAgr2(Figura* temp1)
    {
            temp1->CreateFigura(arc4random()%100,arc4random()%300);
    }
    
  ~View()
    {}
    
};
//Добавить к программе класс, который будет содержать в себе несколько объектов класса фигура, создавая тем самым композицию.

int main()
{
    Figura f;
    f.CreateFigura(255,3);
    f.ShowFigura();
  
//    View f;
//    cout<<&f;
    
}