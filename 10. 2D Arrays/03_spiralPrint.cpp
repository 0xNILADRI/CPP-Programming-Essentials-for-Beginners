#include <iostream>
using namespace std;

void spiralPrint(int arr[][100],int n, int m){
    /*
    The function should consists of four section -
    - start row
    - end col
    - end row 
    - start col
    
    We will begin with start row which will print from start col -> end col,
    then .. end col which will print from start row + 1 -> end row,
    then .. end row which will print from end col - 1 -> start col,
    then .. start col which will print from end row - 1 -> start row + 1
    .. start row++, end col--, end row--, start col++
    */

    // assign 4 variables
    int startRow=0, endRow=n-1, startCol=0, endCol=m-1;

    // outer loop -- traverse array boundary
    while(startCol<=endCol and startRow<=endRow){
        // start row
        for(int col=startCol; col<=endCol; col++){
            cout<<arr[startRow][col]<<" ";
        }

        // end col
        for(int row=startRow + 1; row<=endRow; row++){
            cout<<arr[row][endCol]<<" ";
        }

        // end Row
        for(int col=endCol-1; col>=startCol; col--){
            if(startRow==endRow) break;
            cout<<arr[endRow][col]<< " ";
        }

        // start col
        for(int row=endRow-1; row>=startRow+1; row--){
            if(startCol==endCol) break;
            cout<<arr[row][startCol]<<" ";
        }

        // update the variables to point to iner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
   }
}

int main(){
    int arr[100][100], n, m;
    // size of the array -- n rows and m colums
    cin >> n>> m;
    // input values
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    spiralPrint(arr,n,m);
    return 0;
}