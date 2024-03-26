#include<iostream>
using namespace std;

template<typename T>
class array{
    private:
    int size=0;
    int capacity;
    T *arr;
    public:
        array(int capacity){
            arr= new T[capacity];
            this->capacity=capacity;
        }

        void insert_end(T element){
            if(size<capacity){
                arr[size++]=element;
            }
            else{
                cout<<"Array Full"<<endl;
            }
        }
        
        void display_front(){
            if(size==0){
                cout<<"Array empty"<<endl;
            }
            else{
                for(int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
            }
        }

        void display_last(){
            if(size==0){
                cout<<"Array empty"<<endl;
            }
            else{
                for(int i=size-1;i>=0;--i){
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
            }
        }
        
        void delete_last(){
            if(size==0){
                cout<<"Array empty"<<endl;
            }
            else{
                size--;
            }
        }

        void delete_front(){
            if(size==0){
                cout<<"Array empty";
            }
            else{
                for(int i=0;i<size-1;i++){
                    arr[i]=arr[i+1];
                }
                size--;
            }
        }

        void insert_front(T element){
            if(size<capacity){
                for(int i=size-1;i>=0;--i){
                    arr[i+1]=arr[i];
                }
                arr[0]=element;
                size++;
            }
            else{
                cout<<"Array full"<<endl;
            }
        }

        void access_index(int index){
            if(0<=index && index<size){
                cout<<arr[index]<<endl;
            }
            else{
                cout<<"Index out of range\n";
            }
        }
        
        void write_at_index(int index,T element){
            if(0<=index && index<size){
                arr[index]=element;
            }
            else{
                cout<<"Index out of range\n";
            }
        }

        int possible(int n){
            if((capacity-size)>=n){
                return 1;
            }
            return 0;
        }
        void insert_at_index(int i,T element){
            if(size<capacity && i>=0 && i<size){
                for(int j=size;j>=i;j--){
                    arr[j]=arr[j-1];
                }
                arr[i]=element;
                size++;
            }
            
            else{
                cout<<"Index out of range"<<endl;
            }
        }

        void delete_at_index(int i){
            if(i>=0 && i<size){
                for(int j=i;j<size-1;j++){
                    arr[j]=arr[j+1];
                }
                size--;
            }
            else{
                cout<<"Index out of range\n";
            }
        }
        
        void first_occurence_index(T element){
            for(int i=0;i<size;i++){
                if(arr[i]==element){
                    cout<<"Index :"<<i<<"\n";
                    return;
                }
            }
            cout<<"Element not found"<<endl;

        }

        void all_occurence_index(T element){
            int count=0;
            for(int i=0;i<size;i++){
                if(arr[i]==element){
                    cout<<"Found at index: "<<i<<endl;
                    count++;
                }
            }
            if(count==0){
                cout<<"Element not found\n";
            }
        }
        void insert_before_firstof_v(T element,T v){
            int i;
            for(int j=0;j<size;j++){
                if(arr[j]==v){
                    i=j;
                    break;
                }
            }
            if(i>=0 or i<size){
                this->insert_at_index(i,element);
            }
        }
        void delete_before_firstof_v(T v){
            int i;
            int count=0;
            for(int j=0;j<size;i++){
                if(arr[j]==v){
                    i=j-1;
                    count++;
                    break;
                }
            }
            if(count==0){
                cout<<"Element not found\n";
            }
            else{
                this->delete_at_index(i);
            }
        }
        void insert_after_firstof_v(T element,T v){
            int i;
            int count=0;
            for(int j=0;j<size;i++){
                if(arr[i]==v){
                    i=j+1;
                    count++;
                    break;
                }
            }
            if(count==0){
                cout<<"Element not found"<<endl;
            }
            else{
                this->insert_at_index(i,element);
            }
        }
        void delete_after_firstof_v(int v){
            int j;
            int count=0;
            for(int i=0;i<size;i++){
                if(arr[i]==v){
                    j=i+1;
                    count=1;
                    break;
                }
            }
            if(count==0){
                cout<<"Element not found"<<endl;
            }
            else{
                this->delete_at_index(j);
            }
        }
};

int main(){
    cout<<"-------------Menu driven Genric array opeation program--------------\n"<<endl;
    /*int type;
    cout<<"1.INTEGER datatype\n2.DOUBLE datatype\n3.STRING datatype\nEnter Array datatype Option: ";
    cin>>type;*/
    int capacity;
    cout<<"Enter array capacity: ";
    cin>>capacity;
    array<int> l(capacity);

    /*switch (type){
    case 1:{
        l=array<int>(capacity);
        break;
    }
    case 2:{
        l=array<double>(capacity); 
        break;
    }
    case 3:{
        l=array<string>(capacity);
        break;
    }
    default:
        cout<<"Invalid Input"<<endl;
        return 0;
    }*/
    int choice;
    int index;
    int element;
    int v;
    while(1){
        cout<<"\n1.Insert_end\n2.Display_from_front\n3.Delete_last_element\n4.Insert_front\n5.Display_from_last\n6.Delete_front_element\n7.Access_value_byIndex\n8.Write_at_index\n9.Insert_x_values\n10.Insert_value_at__index\n11.Delete_at_index\n12.Search_indexof_first_occurence_value\n13.Search_indexof_all_occurenece\n14.Insert_u_before_firstof_v\n15.Delete_value_before_first_v\n16.Insert_after_firstof_v\n17.Delete_after_firstof_v\nEnter choice: ";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter element: ";
            cin>>element;
            l.insert_end(element);
            break;
        
        case 2:
            l.display_front();
            break;
        
        case 3:
            l.delete_last();
            break;
        case 4:
            cout<<"Enter element: ";
            cin>>element;
            l.insert_front(element);
            break; 
        case 5:
            l.display_last(); 
            break;
        
        case 6:
            l.delete_front();
            break;
        
        case 7:
            cout<<"Enter index: ";
            cin>>index;
            l.access_index(index);;
            break;
        
        case 8:
            cout<<"Enter index: ";
            cin>>index;
            cout<<"Enter element: ";
            cin>>element;
            l.write_at_index(index,element);
            break;

        case 9:
            int n;
            cout<<"Enter number of values: ";
            cin>>n;
            if (l.possible(n)){
                for(int i=0;i<n;i++){
                    cout<<"Enter element: ";
                    cin>>element;
                    l.insert_end(element);
                }
            }
            else{
                cout<<"Number of elements are larger than availbe space\n";
            }
            break;
        
        case 10:
            cout<<"Enter index: ";
            cin>>index;
            cout<<"Enter element: ";
            cin>>element;
            l.insert_at_index(index,element);
            break;

        case 11:
            cout<<"Enter index: ";
            cin>>index;
            l.delete_at_index(index);
            break;
        case 12:
            cout<<"Enter element: ";
            cin>>element;
            l.first_occurence_index(element);
            break;
        
        case 13:
            cout<<"Enter element: ";
            cin>>element;
            l.all_occurence_index(element);
            break;
        case 14:
            cout<<"Enter element: ";
            cin>>element;
            int v;
            cout<<"Enter v: ";
            cin>>v;
            l.insert_before_firstof_v(element,v);
            break;

        case 15:
            cout<<"Enter v: ";
            cin>>v;
            l.delete_before_firstof_v(v);
            break;
        
        case 16:
            cout<<"Enter element: ";
            cin>>element;
            cout<<"Enter v:";
            cin>>v;
            l.insert_after_firstof_v(element,v);
            break;
        case 17:
            cout<<"Enter v: ";
            cin>>v;
            l.delete_after_firstof_v(v);
            break;
        }
    }

}