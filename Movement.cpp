#include <iostream>
#include "Dama.cpp"
#include <list>

using namespace std;

int matrix [8][8];

int Init(){
    list<Checker> myList;
    for(int a = 1; a <= 3; a++){

    };
    cout << "a";
    return 0;
};

int SearchMovement(list<Checker> & ml){
    //Recorrer la lista
    //for(lsita hasta el final){
        //list<int> ola = Movement(Checker, cherker.column, checker.row)
        //if(ola no contiene -1){
            //for(recorrer ola)
            //asignar nuevos valores de posicion
        //}
    //}
};

list<int> Movement(Checker ex, int com, int r){
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
            //create the list
            //return list<column><row>
        }else{
            //create the list
            //return list<-1><-1>
        }
    }else{
        if(matrix[column][row] == 0){
            //create the list
            //return list<column><row>
        }else if(matrix[column][row] == 2){
            // list<int> sasa = SearchRight(column, row, true)
            //Delete Checker
            //return sasa
        }else{
            //return list<-1><-1>
        }
    }
}

list<int> SearchLeft(int c, int r, float e ){
    int column = c + 1;
    int row = r - 1;
    if(e){
        if(matrix[column][row] == 0){
            //create the list
            //return list<column><row>
        }else{
            //create the list
            //return list<-1><-1>
        }
    }else{
        if(matrix[column][row] == 0){
            //create the list
            //return list<column><row>
        }else if(matrix[column][row] == 2){
            // list<int> sasa = SearchLeft(column, row, true)
            //Delete Checker
            //return sasa
        }else{
            //return list<-1><-1>
        }
    }
}

list<int> SearchRightBack(int c, int r, float e ){
    int column = c - 1;
    int row = r + 1;
    if(e){
        if(matrix[column][row] == 0){
            //create the list
            //return list<column><row>
        }else{
            //create the list
            //return list<-1><-1>
        }
    }else{
        if(matrix[column][row] == 0){
            //create the list
            //return list<column><row>
        }else if(matrix[column][row] == 2){
            // list<int> sasa = SearchRight(column, row, true)
            //Delete Checker
            //return sasa
        }else{
            //return list<-1><-1>
        }
    }
}

list<int> SearchLeftBack(int c, int r, float e ){
    int column = c - 1;
    int row = r - 1;
    if(e){
        if(matrix[column][row] == 0){
            //create the list
            //return list<column><row>
        }else{
            //create the list
            //return list<-1><-1>
        }
    }else{
        if(matrix[column][row] == 0){
            //create the list
            //return list<column><row>
        }else if(matrix[column][row] == 2){
            // list<int> sasa = SearchLeft(column, row, true)
            //Delete Checker
            //return sasa
        }else{
            //return list<-1><-1>
        }
    }
}