#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const vector<vector<int>> new_matrix = matrix;

        for(int i = 0; i < new_matrix.size(); i++){
            for(int j = 0; j < new_matrix.size(); j++){
                cout << new_matrix[i][j]<< " ";
            }
            cout << "\n";
        }
        cout << endl;
        for(int j = 0; j <= new_matrix.size() - 1; j++){
            vector<int> buf = {};
            for(int i = new_matrix.size() - 1; i >= 0; i--){
                buf.push_back(new_matrix[i][j]);
                cout << new_matrix[i][j] << "[" << i << ";" << j <<  "]" << " ";
            }
            cout << "\n";
            matrix.erase(matrix.begin() + j);
            matrix.insert(matrix.begin() + j, buf);
        }
        cout << endl;
        for(int i = 0; i < new_matrix.size(); i++){
            for(int j = 0; j < new_matrix.size(); j++){
                cout << matrix[i][j]<< " ";
            }
            cout << "\n";
        }
    }
};




int main() {
    Solution a;
    vector<vector<int>> mat = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    a.rotate(mat);
}
