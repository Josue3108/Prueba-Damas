#include <iostream>
#include "Dama.h"
#include <list>

using namespace std;

int matrix [8][8];

int Init(){
    list<Dama> myList;
    for(int a = 1; a <= 3; a++){

    };
    cout << "a";
    return 0;
};

int SearchMovement(list<Dama> & ml){
    //Recorrer la lista
    //for(lsita hasta el final){
        //list<int> ola = Movement(Checker, cherker.column, checker.row)
        //if(ola no contiene -1){
            //for(recorrer ola)
            //asignar nuevos valores de posicion
        //}
    //}
};

list<int> Movement(Dama ex, int com, int r){
    int column = com;
    int row = r;
    if (ex.crowned){
        if(ex.column == 0){
            for(int i = 0; i < 2; i++){
                if(i == 0){
                    list<int> pos = SearchRightBack(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }else{
                    list<int> pos = SearchRight(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }
            }
        }else if(ex.column == 7){
            for(int i = 0; i < 2; i++){
                if(i == 0){
                    list<int> pos = SearchLeftBack(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }else{
                    list<int> pos = SearchLeft(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }
            }
        }else{
            for(int i = 0; i < 4; i++){
                if(i == 0){
                    list<int> pos = SearchLeftBack(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }else if(i == 1){
                    list<int> pos = SearchRightBack(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }else if (i == 2){
                    list<int> pos = SearchLeft(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }else{
                    list<int> pos = SearchRight(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }
            }

        }
    }else{
        if(ex.column == 0){
            //row
            list<int> pos = SearchRight(column, row, false);
            //return pos
        }else if(ex.column == 7){
            list<int> pos = SearchLeft(column, row, false);
            //return pos
        }else{
            for(int i = 0; i < 2; i++){
                if(i == 0){
                    list<int> pos = SearchLeft(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }else{
                    list<int> pos = SearchRight(column, row, false);
                    //Search in pos for -1 
                    //Case isn't one return pos
                }
            }

        }
    };
};

list<int> SearchRight(int c, int r, float e ){
    int column = c + 1;
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

list<int> SearchLeft(int c, int r, float e ){
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

list<int> SearchRightBack(int c, int r, float e ){
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

list<int> SearchLeftBack(int c, int r, float e ){
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