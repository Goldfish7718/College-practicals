#include<iostream>
using namespace std;

class SparseMatrix {
    public:
        int r, c, i, j, idx = 1, non_zero_quantity = 0;
        int sparse[20][20];
        int triplet[20][20];
        int non_zero_elems[20];
        int row_col_matrix[20][3];

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

                row_col_matrix[0][0] = r;
                row_col_matrix[0][1] = c;

                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        if (sparse[i][j] != 0)  {
                            non_zero_quantity++;

                            row_col_matrix[idx][0] = i + 1;
                            row_col_matrix[idx][1] = j + 1;
                            row_col_matrix[idx][2] = sparse[i][j];

                            idx++;
                        }
                        else continue;
                    }
                }

                cout << "\n\n";

                row_col_matrix[0][2] = non_zero_quantity;

                for (i = 0; i <= non_zero_quantity; i++) {
                    for (j = 0; j < 3; j++) {
                        cout << row_col_matrix[i][j] << " ";
                    }
                    cout << endl;
                }
            }
};

int main () {

    SparseMatrix s;
    s.getData();
    s.process_triplet();

    return 0;
}
