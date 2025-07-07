/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        //head apenas para facilitar a inicialização do head da list
        ListNode* head = new ListNode(0);

        //NodeList começa aqui
        ListNode* current = head;

        int dif = 0;

        while(l1 != nullptr || l2 != nullptr || dif != 0) {
            
            //Pego o número das duas listas, caso haja
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;

            //soma dos dois, contando com o que "sobrar" de somas que sejam >= 10
            int x = (n1 + n2 + dif);
            
            //para somas >= 10
            dif = x/10;

            //Instancio um novo objeto ListNode, com o valor da soma com o dígito mais a direita
            current->next = new ListNode(x%10);
            current = current->next;

            //Caso o ListNode não esteja null, vai para o próximo elemento da lista
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        ListNode* ans = head->next;

        return ans;
    }
};