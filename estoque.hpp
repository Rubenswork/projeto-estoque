#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <string>

using namespace std;

struct Produto {
    int id;
    string nome;
    int quantidade;
    double preco;
};

void adicionarProduto();
void exibirEstoque();
void buscarPorId(int id);
void buscarPorNome(const string& nome);
void atualizarQuantidade(int id, int novaQuantidade);
void removerProduto(int id);

#endif //ESTOQUE_HPP