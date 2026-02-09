#ifndef LINKSTACK_H
#define LINKSTACK_H
#include <iostream>
#include "Stack.h"
using namespace std;

class Node {
public:
    Node(int data, Node* next) : data(data), next(next) {}

    int getData() const {
        return data;
    }

    void setData(int data) {
        this->data = data;
    }

    Node* getNext() const {
        return next;
    }

    void setNext(Node* next) {
        this-> next = next;
    }

private:
    int data;
    Node* next;
};

class LinkStack : public Stack {
public:
    LinkStack() : top(nullptr) {}

    virtual ~LinkStack() {
        makeEmpty();
    }

    void push(int newEntry) override {
        Node* newNode = new Node(newEntry, top);
        top = newNode;
    }

    int pop() override {
        if (isEmpty()) {
            cout << "You cannot pop on an empty stack." << endl;
            return 0;
        }
        Node* temp = top;
        int data = temp->getData();
        top = top->getNext();
        delete temp;
        temp = nullptr;
        return data;
    }

    int peek() const override {
        if (isEmpty()) {
            cout << "You cannot peek at an empty stack." << endl;
            return 0;
        }
        return top->getData();
    }

    bool isEmpty() const override {
        return top == nullptr;
    }

    void makeEmpty() override {
        while(top != nullptr) {
            Node*temp = top;
            top = top->getNext();
            delete temp;
        }
    }

private:
    Node* top;
};

#endif
