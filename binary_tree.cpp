#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int val;
	struct node* left;
	struct node* right;
}node_t;

void insert(node_t** leaf, int val){
	if(*leaf==NULL){
		*leaf=(node_t*)malloc(sizeof(node_t));
		(*leaf)->val=val;
		(*leaf)->left=NULL;
		(*leaf)->right=NULL;
	} 
	else if(val<(*leaf)->val){
		insert(&(*leaf)->left,val);
	}
	else{
		insert(&(*leaf)->right,val);	
	}
	
}

void print_tree(node_t* node){
	if(node==NULL) 
		return;
	
	
	//printf("%d, ",node->val);
	print_tree(node->left);
	printf("%d, ",node->val);
	print_tree(node->right);
	//printf("%d, ",node->val);
}


int main(){
 	
	node_t* root = NULL;
	
	insert(&root,10);  
	insert(&root,9);  
	insert(&root,30);  
	insert(&root,5);   
	insert(&root,7);  
	insert(&root,15); 
	insert(&root,20); 
	
	print_tree(root);
	
	getchar();
	return 0;
} 
