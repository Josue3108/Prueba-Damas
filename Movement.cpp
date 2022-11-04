#include <iostream>
#include "Dama.h"
#include <list>
#include <iterator>
#include <iostream>


using namespace std;

int matrix [8][8];
list<Dama> myList;

//Crear Delete
//Terminar Init
int Init(){
    for(int i = 0; i < 3; i++){
        int a = 0;
        if (i == 1){
            a = 1;
        }
        for(a; a < 8; a = a + 2){
            Dama dama = Dama(a,i);
            myList.push_front(dama);
        }
    }
    list <Dama>::iterator p = myList.begin();
    while(p != myList.end()){
        cout << p->column << ' ';
        cout << p->row << endl; 
        p++;
    }

    return 0;
};

list<int> SearchRight(int c, int r, bool e){
    int column = c + 1;
    int row = r - 1;
    if(e){
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }else{
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else if(matrix[column][row] == 2){
            list<int> l = SearchRight(column, row, true);
            if(l.front() != -1){
                //Delete checker
                return l;
            }else{
                list<int> l = {-1,-1};
                return l;
            }
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }
}

list<int> SearchLeft(int c, int r, bool e){
    int column = c + 1;
    int row = r - 1;
    if(e){
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }else{
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else if(matrix[column][row] == 2){
            list<int> l = SearchLeft(column, row, true);
            if(l.front() != -1){
                //Delete checker
                return l;
            }else{
                list<int> l = {-1,-1};
                return l;
            }
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }
}

list<int> SearchRightBack(int c, int r, bool e ){
    int column = c - 1;
    int row = r + 1;
    if(e){
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }else{
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else if(matrix[column][row] == 2){
            list<int> l = SearchRightBack(column, row, true);
            if(l.front() != -1){
                //Delete checker
                return l;
            }else{
                list<int> l = {-1,-1};
                return l;
            }
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }
}

list<int> SearchLeftBack(int c, int r, bool e){
    int column = c - 1;
    int row = r - 1;
    if(e){
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }else{
        if(matrix[column][row] == 0){
            list<int> l = {column,row}; 
            return l;
        }else if(matrix[column][row] == 2){
            list<int> l = SearchLeftBack(column, row, true);
            if(l.front() != -1){
                //Delete checker
                return l;
            }else{
                list<int> l = {-1,-1};
                return l;
            }
        }else{
            list<int> l = {-1,-1};
            return l;
        }
    }
}

list<int> Movement(Dama ex, int com, int r){
    int column = com;
    int row = r;
    if (ex.crowned){
        if(ex.column == 0){
            for(int i = 0; i < 2; i++){
                if(i == 0){
                    list<int> pos = SearchRightBack(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }
                }else{
                    list<int> pos = SearchRight(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }else {
                        list<int> l = {-1, -1};
                        return l;
                    }
                }
            }
        }else if(ex.column == 7){
            for(int i = 0; i < 2; i++){
                if(i == 0){
                    list<int> pos = SearchLeftBack(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }
                }else{
                    list<int> pos = SearchLeft(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }else{
                        list<int> l = {-1,-1};
                        return l;
                    }
                }
            }
        }else{
            for(int i = 0; i < 4; i++){
                if(i == 0){
                    list<int> pos = SearchLeftBack(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }
                }else if(i == 1){
                    list<int> pos = SearchRightBack(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }
                }else if (i == 2){
                    list<int> pos = SearchLeft(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }
                }else{
                    list<int> pos = SearchRight(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }else {
                        list<int> l = {-1, -1};
                        return l;
                    }
                }
            }

        }
    }else{
        if(ex.column == 0){//row
            list<int> pos = SearchRight(column, row, false);
            if(pos.front() != -1){
                return pos;
            }else {
                list<int> l = {-1, -1};
                return l;
            }
        }else if(ex.column == 7){
            list<int> pos = SearchLeft(column, row, false);
            if(pos.front() != -1){
                return pos;
            }else {
                list<int> l = {-1, -1};
                return l;
            }
        }else{
            for(int i = 0; i < 2; i++){
                if(i == 0){
                    list<int> pos = SearchLeft(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }
                }else{
                    list<int> pos = SearchRight(column, row, false);
                    if(pos.front() != -1){
                        return pos;
                    }else {
                        list<int> l = {-1, -1};
                        return l;
                    }
                }
            }

        }
    }
}

int SearchMovement(){
    //Recorrer la lista
    list <Dama>::iterator p = myList.begin();

    while(p != myList.end()){
        list<int> s = Movement(p, p->column,p->row);
        if(s.front() != -1){
            p->UpdateCoords(s.front(),s.back());
            break;
        }
        p++;
    }
    return 0;
};

int main(){
    Init();
}
