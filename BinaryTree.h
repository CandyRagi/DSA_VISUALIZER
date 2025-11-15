#include<iostream>

using namespace std;

class Tree
{
    private:
        int *a;
        int size;

    public:

        Tree(int*a,int size)
        {
            this->a=a;               
            this->size=size;
        }

    int* getNodeChildren(int node_index)
    {   
        int *children = new int[2]; 
        children[0] = -1;
        children[1] = -1;
    
        if(2*node_index+1 >= this->size)  
        {
            return children;                
        }
    
        children[0] = this->a[2*node_index+1];
    
        if(2*node_index+2 < size)  
        {   
            children[1] = this->a[2*node_index+2];
        }
    
        return children;
    }

        void printTree()
        {   
            int i=0;
            while(i<size-1)
            {
                cout<<a[i]<<"-->";
                i++;


            }
            cout<<a[i];
        }    

};