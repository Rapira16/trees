#include "../geek.h"
#include "../geek.c"//нужные функции из урока h
int i = 0;
int j = 0;
// number 1
void preOrderTravers(BinTreeIntNode *root) { 
    if (root) {
        printf("%2d ", root->key);
        preOrderTravers(root->left);
        while (root->left != NULL) { //находим количество узлов
            i++;
        }
        preOrderTravers(root->right);
        while (root->right != NULL) { //находим количество узлов
            j++;
        }
    }
}
int main (const int argc, const char** argv){
    BinTreeIntNode *tree = treeInsert(tree, 10);
    treeInsert(tree, 8);
    treeInsert(tree, 19);
    treeInsert(tree, 5);
    treeInsert(tree, 9);
    treeInsert(tree, 19);
    treeInsert(tree, 21);
    treeInsert(tree, 16);
    printBinTree(tree);
    printf(" \n");
    if (i == j){ // проверяем на баланс
        printf("Balanced");
    } else {
        printf("Not balanced");
    }
    return 0;
}