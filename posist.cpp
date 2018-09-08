#include<bits/stdc++.h>
#include<ctime>
using namespace std;
class data
{
public:
    string owner_id;
    string value;
    string owner_name;
    string hash_set_;
    data(){
    owner_id="";
    value="";
    owner_name="";

    }
    data(string owner_id,string value,string owner_name)
    {

        this->owner_id=owner_id;
        this->value=value;
        this->owner_name=owner_name;
        this->set_=hash_(owner_id,value,owner_name);
    }
};
string hash_(string owner_id,string value,string owner_name)
{

    return (owner_id+value+owner_name);
}
string hash_2(time_t timestamp,data data1,int node_number)
{

    return (data1.hash_set_+to_string(node_number));
}

class node
{

    time_t timestamp;
    data data1;
   static int node_number;
    string node_id;
    node* reference_node_id;
    vector<node*> child_refernce_id;
    node* genesis_reference_node_id;
    string hash_value;
public:
    node(date_ timestamp,int node_number,string node_id)
    {
        this->timestamp=timestamp;
        data1=new data();
        this->node_number=node_number;
        node_number++;
        this->node_id=node_id;
        this->reference_node_id=NULL;
        this->genesis_reference_node_id=NULL;
        has_value=hash_2(timestamp,data1,node_number);
}
void set_data()
{

    cout<<"enter the owner_id";
    string owner_id;
    cin>>owner_id;
    data1.owner_id=owner_id;
    cout<<"enter the value";
    string value;
    cin>>value;
    data1.value=value;
    cout<<"enter the owner name";
    string owner_name;
    cin>>owner_name;
    data1.owner_name=owner_name;


}
 friend void set_child_node(node*);
 friend void create_child_of_node(node* )
 void decryption()
 {
     cout<<this->data1.value;
 }
 void encryption()
 {
     cout<<this->data1.value;
 }
 void edit_value_of_node()
 {
     cout<<"enter the new value of the node";
     int value;
     cin>>value;
     this->data1.value=value;
 }
 void transfer_ownership()
 {
     cout<<"enter the owner detail";
     string owner_id;
     string value;
     string owner_name;
     cout<<"enter the new owner_id";
     cin>>owner_id;
     cout<<"enter the value";
     cin>>value;
     cout<<"enter the new owner_name";
     cin>>owner_name;
     this->data1.owner_id=owner_id;
     this->dat1.value=value;
     this->data1.owner_name=owner_name;

 }
 int longest_chain_of_genesis_node()
 {
     return child_reference_id.size();
 }
 int longest_chain_of_any_node()
 {
     return child_reference_id.size();
 }

};
void create_child_of_node(node* p1)
{
    ///time stamp node number,node id;
    date_ timestamp;

    string node_id;
    timestamp=time(0);
    cout<<"enter the node id":
        string node_id;
        cin>>node_id;
        node* p2=new node(timestamp,node_number,node_id);
        cout<<"enter the value of the node";
        int value;
        cin>>value;
        int limit=p1.data1.value;
        for(int i=0;i<child_refrence_id.size();i++)
        {

            limit-=child_reference_id[i].data1.value;

        }


   if(value<=limit)
   {
       child_reference_id.push_back(p2);

   }
   else
   {

       cout<<"child creation not possible";
   }
}
void set_child(node* child_node)
{

    cout<<"enter the value of the child node which has to be delete";
    int value;
    cin>>value;
    for(int i=0;i<child_refrence_node.size();i++)
    {

        if(child_reference_node[i].data1.value==value)
        {

            child_reference_node[i]=NULL;
            break;
        }
    }
}

int main()
{
int node_number=0;
int node_id=0;
    node *p1=new node(time(0),node_number,node_id);
    p1->set_data();///genesis node created
    set_child(p1);///setting the child node of node p1







}


