#include<iostream>
using namespace std;

class SparseMatrix {
    public:
        int r, c, i, j, idx = 0, non_zero_quantity = 0;
        int sparse[20][20];
        int triplet[20][20];
        int non_zero_elems[20];
        int row_col_matrix[20][2];

        public:
            void getData() {
                cout << "Enter Number of rows and coloumns";
                cin >> r >> c;

                cout << "Enter elements of Sparse matrix" << endl;

                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        cin >> sparse[i][j];
                    }
                }
            }

            void process_triplet() {
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        if (sparse[i][j] != 0)  {
                            non_zero_quantity++;

                            non_zero_elems[idx] = sparse[i][j];
                            row_col_matrix[idx][0] = i;
                            row_col_matrix[idx][1] = j;

                            idx++;
                        }
                        else continue;
                    }
                }

            //    for (i = 0; i < non_zero_quantity; i++) {
            //         for (j = 0; j < 2; j++) {
            //             triplet[i][j] = 
            //         }
            //    }
            }
};

int main () {
    // int mat1[20][20], i, j, n, mat2[20][20], add[20][20];
    
    

    // cout << "Enter elements of second matrix" << endl;

    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         cin >> mat2[i][j];
    //     }
    // }

    // cout << "The addition of the two matrix" << endl;

    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         add[i][j] = mat1[i][j] + mat2[i][j];
    //         cout << add[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // return 0;

    SparseMatrix s;
    s.getData();
    s.process_triplet();

    return 0;
}
