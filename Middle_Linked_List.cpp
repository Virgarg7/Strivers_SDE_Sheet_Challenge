Node *findMiddle(Node *head) {
    
        Node* slow = head ;
        Node * fast = head ;

        while( fast->next!=NULL){
            slow = slow->next ;
            fast = fast->next ;
            if(fast->next!=NULL){
                fast = fast->next ;
            }
        }

    return slow ;

}

