#include<iostream>
using namespace std;
#include <vector>
#include <typeinfo>
#include <string>

class Subject;//forward declaration

class Observer//class which are interested to get notified
{
public:
    virtual void update(Subject* s) = 0;//pure virtual function
    virtual ~Observer() {};
};

class Subject//Class in which even take place
{
    vector<Observer *> observers;
protected:
    void notify_observers()
    {
        vector<Observer *>::iterator iter;
        for (iter = observers.begin(); iter != observers.end(); ++iter)
            (*iter)->update(this);
    }

public:
    virtual ~Subject() {};
    void register_observer(Observer* o)//pushing the attached observers in a vector
    {
        observers.push_back(o);
    }
};

class Blog : public Subject
{
public:
    Blog()
    {
        cout << "New Article Posted." << "\n";
    }

    void eventTriggerNewArticle()
    {
        cout << "The new article event is triggered." << "\n";
        notify_observers();
    }

 int const get_Blog_id()
 //int get_Blog_id()
 {
  return 21022015;
  }
};

class User : public Observer
{
public:
    virtual void update(Subject* s)
    {
        Blog *a;
        a = dynamic_cast<Blog*>(s);
       cout << a->get_Blog_id() << "\n";
    }
};

int main ()
{
    Blog newArticle = Blog();
    User u = User();
    newArticle.register_observer(&u);
	newArticle.notify_observers();
// newArticle.eventTriggerNewArticle();
    return 0;
}
