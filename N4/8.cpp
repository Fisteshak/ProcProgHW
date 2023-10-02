#include <iostream>
#include <vector>

using namespace std;

using Matrix = vector<vector<double>>;

Matrix multiply_matrix(Matrix A, Matrix B)
{
    Matrix C(A.size());

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B[0].size(); j++) {
            C[i].resize(B[0].size());
            double cur_el = 0;
            for (int k = 0; k < B.size(); k++) {
                cur_el += A[i][k] * B[k][j];
            }
            C[i][j] = cur_el;

        }

    }
    return C;

}

int main()
{


    Matrix A {
        { 5, 2, 0, 10},
        { 3, 5, 2, 5},
        {20, 0, 0, 0}
    };



    Matrix B {
        {1.20, 0.50},
        {2.80, 0.40},
        {5.00, 1.00},
        {2.00, 1.50}
    };

    Matrix C = multiply_matrix(A, B);

    for (int i = 0; i < C.size(); i++) {
        for (int j = 0; j < C[0].size(); j++) {
            cout << C[i][j] << ' ';
        }
        cout << endl;
    }

    double total_com = 0;
    double total_v = 0;
    double max_com = -100000000;
    double max_v = -100000000;
    double min_com = 100000000000000000;
    double min_v = 100000000000000000;
    double ans1_1;
    double ans1_2;
    double ans2_1;
    double ans2_2;
    for (int i = 0; i < 3; i++)
    {
        double current_v = C[i][0];
        double current_com = C[i][1];
        // cout << i+1 << " " << current_com << endl;
        total_com += current_com;
        total_v += current_v;
        if (current_v > max_v)
        {
            max_v = current_v;
            ans1_1 = i + 1;
        }
        if (current_v < min_v)
        {
            min_v = current_v;
            ans1_2 = i + 1;
        }
        if (current_com > max_com)
        {
            max_com = current_com;
            ans2_1 = i+1;
        }
        if (current_com < min_com)
        {
            min_com = current_com;
            ans2_2 = i+1;
        }
    }
    cout << "1) " << ans1_1 << " " << ans1_2 << endl;
    cout << "2) " << ans2_1 << " " << ans2_2 << endl;
    cout << "3) " << total_v << endl;
    cout << "4) " << total_com << endl;
    cout << "5) "<< total_v + total_com << endl;
    return 0;
}