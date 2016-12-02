//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/tree-top-view

void top_view(node * root)
{
   static node* temp = root;
   if(root == NULL)
    {
    return;
   }
   top_view(root->left);
   cout<<root->data<<" ";
   if(root == temp)
      {
      root = root->right;//Don't want to print the root element twice
      while(root != NULL)
         {
         cout<<root->data<<" ";
         root = root->right;
      }
   }
}
