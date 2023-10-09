#include <iostream>
#include <memory>
#include <fstream>


using namespace std;
struct TreeSort {
private:
    struct TreeNode {                       // тип узла дерева
        unique_ptr <TreeNode> left, right;  //указатели на левое и правое поддерево
        int value;                          //значение
        TreeNode(const int avalue) {
            value = avalue;
        }
    };
    unique_ptr <TreeNode> tree_root;        // указатель на корень дерева

        //рекурсиваня вставка элемента
    void insert_recursive(const int value, const unique_ptr <TreeNode> &cur_node) {
        if (value < cur_node->value) {  //если элемент меньше текущего
            if (cur_node->left == nullptr) {  //если левая ветвь не существует
                cur_node->left = make_unique<TreeNode>(value);  //вставить элемент в левую подветвь
            }
            else {
                insert_recursive(value, cur_node->left);  //иначе вызвать процелуру вставки для левой подветви
            }
        }
        else {  //если элемент больше или равен текущему
            if (cur_node->right == nullptr) { //если правая ветвь не существует
                cur_node->right = make_unique<TreeNode>(value);  //вставить элемент в правую подветвь
            }
            else {
                insert_recursive(value, cur_node->right);  //иначе вызвать процелуру вставки для правой подветви
            }
        }
    }
    //рекурсивный вывод дерева
    void print_recursive(const unique_ptr<TreeNode>& node) {
        //если левая подветвь существует, то вывести ее
        if (node->left != nullptr) {
            print_recursive(node->left);
        }
        //вывести значение узла
        cout << node->value << "\n";
        //если правая подветвь существует, то вывести ее
        if (node->right != nullptr) {
            print_recursive((node->right));
        }
    }

public:
    //процедура вставки, рассматривающая крайний (начальный) случай
    void insert_value(const int value) {
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

    TreeSort tr;
    ifstream fin("data.txt");
    while (!fin.eof()) {
        int x;
        fin >> x;
        tr.insert_value(x);
    }

    tr.print_tree();

    tr.clear();

}