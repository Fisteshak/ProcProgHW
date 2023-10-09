#include <iostream>
#include <memory>
#include <fstream>


using namespace std;
template <typename T>
struct TreeSort {
private:
    struct TreeNode {
        unique_ptr <TreeNode> left, right;
        T value;
        TreeNode(const T avalue) {
            value = avalue;
        }
    };
    unique_ptr <TreeNode> tree_root;

    void insert_recursive(const T value, const unique_ptr <TreeNode> &cur_node) {
        if (value < cur_node->value) {
            if (cur_node->left == nullptr) {
                cur_node->left = make_unique<TreeNode>(value);
            }
            else {
                insert_recursive(value, cur_node->left);
            }
        }
        else {
            if (cur_node->right == nullptr) {
                cur_node->right = make_unique<TreeNode>(value);
            }
            else {
                insert_recursive(value, cur_node->right);
            }
        }
    }

    void print_recursive(const unique_ptr<TreeNode>& node) {
        if (node->left != nullptr) {
            print_recursive(node->left);
        }
        cout << node->value << "\n";
        if (node->right != nullptr) {
            print_recursive((node->right));
        }
    }

public:
    void insert_value(const T value) {
        if (tree_root == nullptr) {
            tree_root = make_unique<TreeNode>(value);
        }
        else {
            insert_recursive(value, tree_root);
        }
    }

    void print_tree() {
        print_recursive(tree_root);
    }

    void clear() {
        tree_root.reset();
    }

};

int main()
{

    TreeSort <int> tr;
    ifstream fin("data.txt");
    while (!fin.eof()) {
        int x;
        fin >> x;
        tr.insert_value(x);
    }

    tr.print_tree();

    tr.clear();

}