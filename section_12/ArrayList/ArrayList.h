#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>
#include "List.h"
using namespace std;

class ArrayList : public List {
public:
    ArrayList(int s = 16) : MAX_SIZE(s) {
        mArray = new int[MAX_SIZE];
        nNumElements = 0;
    }

    void add(int newEntry) override {
        if (nNumElements >= MAX_SIZE) {
            cout << "Cannot add more elements. List is full." << endl;
            return;
        }
        mArray[nNumElements++] = newEntry;
    }

    void add(int newEntry, int position) override {
        if (nNumElements >= MAX_SIZE) {
            cout << "Cannot add more elements. List is full." << endl;
            return;
        }
        if (position < 0 || position > nNumElements) {
            cout << "Position out of range." << endl;
            return;
        }
        for (int i = nNumElements; i > position; i--) {
            mArray[i] = mArray[i -1];
        }
        mArray[position] = newEntry;
        nNumElements++; 
    }

    void set(int newEntry, int position) override {
        if (position < 0 || position >= nNumElements) {
            cout << "Invalid position for set." << endl;
            return;
        }
        mArray[position] = newEntry;
    }

    bool contains(int entry) const override {
        for (int i = 0; i < nNumElements; i++) {
            if (mArray[i] == entry) {
                return true;
            }
        }
        return false;
    }

    int find(int entry) const override {
        for (int i = 0; i < nNumElements; i++) {
            if (mArray[i] == entry) {
                return i;
            }
        }
        return -1;
    }

    int remove(int position) override {
        if (position < 0 || position >= nNumElements) {
            cout << "Position out of range." << endl;
            return -1;
        }

        int value = mArray[position];
        for (int i = position; i < nNumElements - 1; i++) {
            mArray[i] = mArray[i + 1];
        }
        nNumElements--;
        return value;
    }

    void makeEmpty() override {
        nNumElements = 0;
    }

    int size() const override {
        return nNumElements;
    }

    bool isEmpty() const override {
        return nNumElements == 0;
    }

    void printList() const override {
        for (int i = 0; i < nNumElements; i++) {
            cout << mArray[i] << endl;
        }
    }

private:
    int * mArray;
    const int MAX_SIZE;
    int nNumElements;

};

#endif