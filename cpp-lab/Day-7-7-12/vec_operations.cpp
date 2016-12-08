#include<iostream>
#include<vector>

using namespace std;

template <class T>
class vec {
    vector<T> g;
public:
    vec() {}
    void create()
    {
        createUtil();
    }
    void modify()
    {
        T mod, with;
        cout<<"Enter value of element to modify: ";
        cin>>mod;
        cout<<"Enter value to modify to: ";
        cin>>with;
        modifyUtil(mod, with);
    }
    void mult()
    {
        int m;
        cout<<"Enter value to multiply with (int): ";
        cin>>m;
        multUtil(m);
    }
    void display()
    {
        displayUtil();
    }
private:
    void createUtil()
    {
        //cout<<"Press -1 to stop pushing to vector\n";
        T element;
        char ch;
        while(true) {
            cout<<"Want to exit ? [y/n]: ";
            cin>>ch;
            if(ch=='Y'||ch=='y') {
                break;
            }
            cin>>element;
            g.push_back(element);
        }
    }
    void modifyUtil(T mod, T with)
    {
        int i;
        for(i=0;i<g.size();i++) {
            if(g[i]==mod) {
                g[i]=with;
            }
        }
    }
    void multUtil(int m)
    {
        int i;
        for(i=0;i<g.size();i++) {
            g[i]*=m;
        }
    }
    void displayUtil()
    {
        cout<<"Current Vector: \n";
        int i;
        for(i=0;i<g.size();i++) {
            cout<<g[i]<<" "<<endl;
        }
        cout<<"\n---------------------\n";
    }
};

int main()
{
    vec<int> st;
    st.create();
    st.display();
    st.modify();
    st.display();
    st.mult();
    st.display();
    return 0;
}
