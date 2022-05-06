typedef struct NO *arvAVL;

arvAVL *cria_arvAVL();

void liberar_arvAVL(arvAVL *raiz);

void libera_NO(struct NO *no);

int vazia_arvAVL(arvAVL *raiz);

int alt_no(struct NO *no);

int fatorBalanceamento_NO(struct NO *no);

int maior(int x, int y);

void rotacaoLL(arvAVL *raiz);

void rotacaoRR(arvAVL *raiz);

void rotacaoLR(arvAVL *raiz);

void rotacaoRL(arvAVL *raiz);

int altura_arvAVL(arvAVL *raiz);

struct NO *procuramenor(struct NO *atual);

int insere_arvAVL(arvAVL *raiz, int valor);

int remove_arvAVL(arvAVL *raiz, int valor);

int totalNO_arvAVL(arvAVL *raiz);

void preOrdem_arvAVL(arvAVL *raiz);

void emOrdem_arvAVL(arvAVL *raiz);

void posOrdem_arvAVL(arvAVL *raiz);

/*

int insere_arvAVL(arvAVL *raiz, int valor);

int remove_arvAVL(arvAVL *raiz, int valor);

struct NO *remove_atual(struct NO *atual);

*/

int consulta_arvAVL(arvAVL *raiz, int valor);
