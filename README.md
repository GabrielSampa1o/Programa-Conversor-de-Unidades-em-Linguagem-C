# Programa Conversor de Unidades em Linguagem C

## 📋 Descrição do Projeto

O **Programa Conversor de Unidades** é um projeto desenvolvido em **Linguagem C** que permite a conversão entre diversas unidades de medida. O objetivo é criar uma solução modular, colaborativa e organizada, com foco no aprendizado de **Git**, **GitHub** e versionamento de código em equipe.

Este projeto faz parte das atividades da **Residência Embarcatech**, um programa de formação em **Sistemas Embarcados** que visa capacitar profissionais para desenvolver soluções práticas e eficientes utilizando tecnologias embarcadas.

---

## 🚀 Funcionalidades

Este programa realiza conversões entre:

1. **Comprimento**: Metro, Centímetro, Milímetro
2. **Massa**: Quilograma, Grama, Tonelada
3. **Volume**: Litro, Mililitro, Metros Cúbicos
4. **Temperatura**: Celsius, Fahrenheit, Kelvin
5. **Velocidade**: Km/h, m/s, mph
6. **Potência**: Watts, Quilowatts, Cavalos-vapor
7. **Área**: Metro Quadrado, Centímetro Quadrado
8. **Tempo**: Segundos, Minutos, Horas
9. **Dados**: Bits, Bytes, Kilobytes, Megabytes, Gigabytes, Terabytes

---

## 🛠️ Como Compilar e Executar o Projeto

### **Pré-requisitos**
- **GCC** instalado:
   - **Linux/WSL**: Use o comando:
     ```bash
     sudo apt update
     sudo apt install gcc
     ```
   - **Windows**: Instale o [MinGW](http://www.mingw.org/) ou utilize WSL.
   - **MacOS**: O GCC pode ser instalado com **Xcode Command Line Tools**.

---

### **Clonar o Repositório**

Primeiro, clone o repositório em sua máquina local:

```bash
git clone https://github.com/GabrielSampa1o/Programa-Conversor-de-Unidades-em-Linguagem-C.git
cd Programa-Conversor-de-Unidades-em-Linguagem-C
```

---

### **Compilação do Projeto**

#### **Usando Makefile**

Na raiz do projeto, execute:

```bash
make
```

Isso criará um executável chamado **`conversor`**.

#### **Sem Makefile**

Caso prefira compilar manualmente, utilize o **GCC**:

```bash
gcc main.c comprimento.c massa.c volume.c temperatura.c velocidade.c potencia.c area.c tempo.c dados.c -o conversor
```

---

### **Executar o Programa**

Após compilar o programa, execute o seguinte comando:

```bash
./conversor
```

---

### **Limpar Arquivos Compilados**

Caso utilize o **Makefile**, para limpar os arquivos `.o` e o executável gerado:

```bash
make clean
```

---

## 👨‍💻 Como Contribuir

Siga os passos abaixo para contribuir com o projeto:

1. **Faça um Fork** deste repositório.
2. Clone o seu Fork localmente:
   ```bash
   git clone https://github.com/seu-usuario/Programa-Conversor-de-Unidades-em-Linguagem-C.git
   cd Programa-Conversor-de-Unidades-em-Linguagem-C
   ```
3. Crie uma nova branch para sua funcionalidade:
   ```bash
   git checkout -b feature/nome_da_funcao
   ```
4. Adicione sua implementação (arquivos `.c` e `.h`) e faça o commit:
   ```bash
   git add .
   git commit -m "Implementa conversão de nome_da_funcao"
   ```
5. Envie a branch para o GitHub:
   ```bash
   git push origin feature/nome_da_funcao
   ```
6. Abra um **Pull Request** no repositório original.

---

## 🧑‍🤝‍🧑 Equipe

- **Líder do Projeto**: Gabriel Sampaio
- **Colaboradores**:
  - Desenvolvedor 1: Funcionalidade a
  - Desenvolvedor 2: Funcionalidade b
  - ...

---

## 📄 Licença

Este projeto é de uso educacional e está aberto a contribuições de todos os interessados.

---


