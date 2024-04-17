typedef struct Queue_ Queue;
Queue *create(int length);            // cria a fila e devolve o ponteiro
int peek(Queue *Queue, int *value);   // consulta o início da fila
int put(Queue *Queue, int value);     // insere no final na fila
int get(Queue *Queue, int *value);    // remove do início da fila
int size(Queue *Queue);               // retorna o tamanho da fila
int is_full(Queue *Queue);            // informa se a fila está cheia
int is_empty(Queue *Queue);           // informa se a fila está vazia
void destroy(Queue *Queue);           // libera o espaço de memória da fila