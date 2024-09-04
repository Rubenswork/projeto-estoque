#include "estoque.hpp"
#include <iostream>
#include <vector>

using namespace std;

vector<Produto> estoque;

//Função para adicionar os produtos
void adicionarProduto() {
    Produto novoProduto;
    cout << "Digite o ID do produto: ";
    cin >> novoProduto.id;
    cout << "Digite o nome do produto: ";
    cin >> novoProduto.nome;
    cout << "Digite a quantidade do produto: ";
    cin >> novoProduto.quantidade;
    cout << "Digite o preço do produto: ";
    cin >> novoProduto.preco;
    
    estoque.push_back(novoProduto);
    cout << "Produto adicionado com sucesso!";
}

//Função para mostrar os produtos no estoque
void exibirEstoque() {
    if(estoque.empty()) {
        cout << "Estoque vazio!\n";
        return;
    }
    
    cout << "\nProdutos no estoque:\n";
    for(const auto& produto: estoque) {
        cout << "ID: " << produto.id << endl;
        cout << "Nome: " << produto.nome << endl;
        cout << "Quantidade: " << produto.quantidade << endl;
        cout << "Preço: " << produto.preco << endl;
    }
}

//Função para buscar o produto com ID
void buscarPorId(int id) {
    //Verifica todos os IDs para ver se são compativeis com o nome da busca
    for(const auto produto: estoque) {
        if(produto.id == id) {
            cout << "Produto encontrado!" << endl;
            cout << "ID: " << produto.id << endl;
            cout << "Nome: " << produto.nome << endl;
            cout << "Quantidade: " << produto.quantidade << endl;
            cout << "Preço: " << produto.preco << endl;
            return;
        } else {
            cout << "Produto com ID " << id << " não encontrado." << endl;
        }
    }
}

//Função para procurar o produto por NOME
void buscarPorNome(const string& nome) {
    //Verifica todos os nomes para ver se são compativeis com o nome da busca
    for(const auto& produto: estoque) {
        if(produto.nome == nome) {
            cout << "Produto encontrado!" << endl;
            cout << "ID: " << produto.id << endl;
            cout << "Nome: " << produto.nome << endl;
            cout << "Quantidade: " << produto.quantidade << endl;
            cout << "Preço: " << produto.preco << endl;
            return;
        }
    }
    cout << "Produto com " << nome << " não encontrado." << endl;
}

//Função para mudar a quantidade dos produtos
void atualizarQuantidade(int id, int novaQuantidade) {
    for(auto& produto: estoque) {
        if(produto.id == id) {
            produto.quantidade = novaQuantidade;
            cout << "Quantidade atualizada para " << novaQuantidade << endl;
            return;
        }
    }
    cout << "Produto com " << id << " não encontrado." << endl;
}

void removerProduto(int id) {
    for(auto it = estoque.begin(); it != estoque.end(); ++it) {
        if(it->id == id) {
            estoque.erase(it);
            cout << "Produto removido com sucesso!" << endl;
            return;
        }
    }
    cout << "Produto com " << id << " não encontrado." << endl;
}





