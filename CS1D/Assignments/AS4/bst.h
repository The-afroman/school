/**************************
* Faris Hijazi
* CS1D
* Assignment 4
**************************/

#include <iostream>
#include <iomanip>
using namespace std;

struct nod {
   nod *l, *r;
   int d;
}*r = NULL, *p = NULL, *np = NULL, *q;

void create() {
   int v,c = 0;
   while (c < 19) {
      if (r == NULL) {
         r = new nod;
         cout<<"enter value of root node\n";
         cin>>r->d;
         r->r = NULL;
         r->l = NULL;
      } else {
         p = r;
         cout<<"enter value of node\n";
         cin>>v;
         while(true) {
            if (v< p->d) {
               if (p->l == NULL) {
                  p->l = new nod;
                  p = p->l;
                  p->d = v;
                  p->l = NULL;
                  p->r = NULL;
                  cout<<"value entered in left\n";
                  break;
               } else if (p->l != NULL) {
                  p = p->l;
               }
            } else if (v >p->d) {
               if (p->r == NULL) {
                  p->r = new nod;
                  p = p->r;
                  p->d = v;
                  p->l = NULL;
                  p->r = NULL;
                  cout<<"value entered in right\n";
                  break;
               } else if (p->r != NULL) {
                  p = p->r;
               }
            }
         }
      }
      c++;
   }
}

void inorder(nod *p) {
   if (p != NULL) {
      inorder(p->l);
      cout<<p->d<<endl;
      inorder(p->r);
   }
}

void preorder(nod *p) {
   if (p != NULL) {
      cout<<p->d<<endl;
      preorder(p->l);
      preorder(p->r);
   }
}

void postorder(nod *p) {
   if (p != NULL) {
      postorder(p->l);
      postorder(p->r);
      cout<<p->d<<endl;
   }
}

/* Compute the "height" of a tree -- the number of  
    nodes along the longest path from the root node  
    down to the farthest leaf node.*/
int height(nod* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the height of each subtree */
        int lheight = height(node->l);  
        int rheight = height(node->r);  
  
        /* use the larger one */
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
}  

/* Print nodes at a given level */
void printGivenLevel(nod* root, int level)  
{  
    if (root == NULL)  
        return;  
    if (level == 1)  
        cout << root->d << " ";  
    else if (level > 1)  
    {  
        printGivenLevel(root->l, level-1);  
        printGivenLevel(root->r, level-1);  
    }  
}  

void breadthFirst(nod* root)  
{  
    int h = height(root);  
    int i;  
    for (i = 1; i <= h; i++)  
        printGivenLevel(root, i);  
}

void postorderIndented(nod* p, int indent)
{
    if(p != NULL) {
        if(p->r) {
            postorderIndented(p->r, indent+10);
        }
        if (indent) {
            cout << setw(indent) << ' ';
        }
        if (p->r) cout<<" /\n" << setw(indent) << ' ';
        cout<< p->d << "\n ";
        if(p->l) {
            cout << setw(indent) << ' ' <<" \\\n";
            postorderIndented(p->l, indent+10);
        }
    }
}

void printTree(nod* root)  
{  
    int h = height(root);  
    int i;  
    for (i = 1; i <= h; i++)
    {
        cout << "level " << i << ": ";
        printGivenLevel(root, i);  
        cout << endl;
    }
}  
  

