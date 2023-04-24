//
//  doubleendedqueue.h
//  csii_project
//


#ifndef doubleendedqueue_h
#define doubleendedqueue_h

#include <iostream>
using namespace std;

template <typename T>
class node
{
public:
    T plane;
    node* next;
};


template <typename T>
class doubleendedqueue
{
private:
    node<T>* front;
    node<T>* rear;
    int length;

public:
    doubleendedqueue()
    {
        front = nullptr;
        rear = nullptr;
        length = 0;
    }

    ~doubleendedqueue()
    {
        node<T>* temp;
        while (front != nullptr)
        {
            temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
        length = 0;
    }

    bool DEQisEmpty()
    {
        return (length == 0);
    }

    void Add_Front(T value)
    {
        node<T>* pnew = new node<T>();
        pnew->plane = value;
        pnew->next = front;
        front = pnew;
        if (rear == nullptr)
        {
            rear = front;
        }
        length++;
    }

    void Add_Rear(T value)
    {
        node<T>* pnew = new node<T>();
        pnew->plane = value;
        pnew->next = nullptr;
        if (rear == nullptr)
        {
            rear = pnew;
            front = rear;
        }
        else
        {
            rear->next = pnew;
            rear = pnew;
        }
        length++;
    }

    T Remove_Front()
    {
        if (front == nullptr)
        {
            cout << "queue is empty!" << endl;
            exit(1);
        }
        node<T>* temp = front;
        T value = front->plane;
        front = front->next;
        delete temp;
        if (front == nullptr)
        {
            rear = nullptr;
        }
        length--;
        return value;
    }

    T Remove_Rear()
    {
        if (rear == nullptr)
        {
            cout << "queue is empty!" << endl;
            exit(1);
        }
        node<T>* temp = front;
        T value = rear->plane;
        while (temp->next != rear)
        {
            temp = temp->next;
        }
        rear = temp;
        temp = temp->next;
        delete temp;
        if (rear == nullptr)
        {
            front = nullptr;
        }
        length--;
        return value;
    }

    T View_Front()
    {
        if (front == nullptr)
        {
            cout << "queue is empty!" << endl;
            exit(1);
        }
        return front->plane;
    }

    T View_Rear()
    {
        if (rear == nullptr)
        {
            cout << "queue is empty!" << endl;
            exit(1);
        }
        return rear->plane;
    }

    int DEQ_Length()
    {
        return length;
    }
};



#endif /* doubleendedqueue_h */
