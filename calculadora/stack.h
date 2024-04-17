typedef struct Stack_ Stack;
Stack *create(int length);          // cria a pilha e devolve o ponteiro
int peek(Stack *Stack, int *value); // consulta o topo da pilha
int push(Stack *Stack, int value);  // insere no topo na pilha
int pop(Stack *Stack, int *value);  // remove do topo da pilha
int size(Stack *Stack);             // retorna o tamanho a pilha
int is_full(Stack *Stack);          // informa se a pilha está cheia
int is_empty(Stack *Stack);         // informa se a pilha está vazia
void destroy(Stack *Stack);         // libera o espaço de memória da pilha