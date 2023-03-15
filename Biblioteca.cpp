#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Livro {
public:
    string titulo;
    string autor;
    int anoPublicacao;

    Livro(string titulo, string autor, int anoPublicacao) {
        this->titulo = titulo;
        this->autor = autor;
        this->anoPublicacao = anoPublicacao;
    }
};


class Biblioteca {
private:
    vector<Livro> livros;

public:
   
    void adicionarLivro(string titulo, string autor, int anoPublicacao) {
        Livro livro(titulo, autor, anoPublicacao);
        livros.push_back(livro);
    }

    void mostrarLivros() {
        for (int i = 0; i < livros.size(); i++) {
            Livro livro = livros[i];
            cout << livro.titulo << " - " << livro.autor << " (" << livro.anoPublicacao << ")" << endl;
        }
    }
};

int main() {
    Biblioteca biblioteca;

    biblioteca.adicionarLivro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954);
    biblioteca.adicionarLivro("Harry Potter e a Pedra Filosofal", "J.K. Rowling", 1997);
    biblioteca.adicionarLivro("Cem Anos de Solidão", "Gabriel García Márquez", 1967);

    biblioteca.mostrarLivros();

    return 0;
}