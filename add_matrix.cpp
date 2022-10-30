#include<iostream>
#include<math.h>
using namespace std;



void matrix_add(int mat1[3][3], int mat2[3][3]){
    int res[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}


int main(int argc, char const *argv[])
{    

    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3] = {{1,1,8},{3,0,8},{2,1,3}};
    matrix_add(mat1,mat2);

    cout << "\n";
    return 0;
}
