#include<iostream>
#include<string>
using namespace std;

class Artificial_Christmas_tree
{
private:
    string name_of_producer;
    int height;
    int price;
    string production_material;
    
public:
    Artificial_Christmas_tree(string name_of_producer,
                              int height,
                              int price,
                              string production_material)
    {
        this->name_of_producer=name_of_producer;
        this->height=height;
        this->price=price;
        this->production_material=production_material;
    }
    Artificial_Christmas_tree()
    {
        
    }
    string GetNameOfProducer()
    {
        return name_of_producer;
    }
    int GetHeight()
    {
        return height;
    }
    int GetPrice()
    {
        return price;
    }
    string GetProductionMaterial()
    {
        return production_material;
    }
    void SetArtificialChristmasTreeInfo()
    {
        cout<<"Set name of producer:";
        getline(cin,name_of_producer);
        cout<<"Set height:";
        cin>>height;
        cout<<"Set price:";
        cin>>price;
        cout<<"Set production material:";
        getline(cin,production_material);
    }
    void PrintAll()
    {
        cout<<endl<<endl<<endl<<"Name of producer:"<<name_of_producer<<endl<<
        "Height:"<<height<<endl<<
        "Price:"<<price<<endl<<
        "Production material:"<<production_material<<endl;
    }
    ~Artificial_Christmas_tree()
    {
        
    }
    
};


int main()
{
    Artificial_Christmas_tree Christmas_tree;
    Christmas_tree.SetArtificialChristmasTreeInfo();
    Christmas_tree.PrintAll();
    return 0;
}


