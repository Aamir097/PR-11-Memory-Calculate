#include<iostream>
#include<vector>

using namespace std;

template <typename X, typename Y>

class MemoryCalculate
{
    public:
        vector<int> v1;
        vector<string> v2;

        X id;
        Y name;

        MemoryCalculate(int size)
        {
            for(int i=0;i<size;i++)
            {
                cout<<"Enter Student Id ["<<i<<"]";
                cin>>id;
                v1.push_back(id);

                cout<<"Enter Student Name ["<<i<<"]: ";
                cin>>name;
                v2.push_back(name);
            }
        }

            void displayStudent()
            {
                cout<<"Studnet Info"<<endl;

                for(int i=0;i<v1.size();i++)
                {
                    cout<<"Student Id ["<<i<<"]: "<<v1.at(i)<<endl;
                    cout<<"Studnet Name ["<<i<<"]: "<<v2.at(i)<<endl;
                }
            }

            void addStudent(X id, Y name)
            {
                v1.push_back(id);
                v2.push_back(name);
            }

            void removeStudent(X id)
            {
                for(int i=0;i<v1.size();i++)
                {
                    if(v1[i]==id)
                    {
                        v1.erase(v1.begin()+i);
                        v2.erase(v2.begin()+i);
                        cout<<"Remove student by id ["<<id<<"] successfully."<<endl;
                    }
                }
            }

            void searchStudent(X id)
            {
                
            }
            
};

int main()
{
    int size,ch,id;
    string name;

    cout<<"Enter size of vector: ";
    cin>>size;

    MemoryCalculate<int,string> obj(size);

    do{
        cout<<endl;
        cout<<"Enter 1 for add student: "<<endl;
        cout<<"Enter 2 for display student list: "<<endl;
        cout<<"Enter 3 for remove student: "<<endl;
        cout<<"Enter 4 for search student by id: "<<endl;
        cout<<"Enter 0 for exit."<<endl;
        cout<<endl;

        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter student id: ";
                cin>>id;

                cout<<"Enter student name: ";
                cin>>name;

                cout<<endl;
                obj.addStudent(id,name);
                break;

            case 2:
                cout<<endl;
                obj.displayStudent();
                break;
            
            case 3:
                cout<<"Enter Student Id  for remove from the list : ";
                cin>>id;

                cout<<endl;
                obj.removeStudent(id);
                break;
            
            case 4:
                cout<<"Enter Student Id for search from list: ";
                cin>>id;

                cout<<endl;
                obj.searchStudent(id);
                break;
            
            case 0:
                cout<<"Exit"<<endl;
                break;

            default:
                cout<<"Wrong Choice ! "<<endl;
                break;


        }
    }while(ch!=0);

    return 0;
}